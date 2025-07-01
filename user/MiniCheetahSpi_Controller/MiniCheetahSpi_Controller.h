#ifndef CHEETAH_SOFTWARE_MINICHEETAHSPI_CONTROLLER_H
#define CHEETAH_SOFTWARE_MINICHEETAHSPI_CONTROLLER_H

#include <RobotController.h>
#include <lcm/lcm-cpp.hpp>

#include <thread>
#include <mutex>

class MiniCheetahSpi_Controller : public RobotController {
public:
  MiniCheetahSpi_Controller():RobotController(), _lcm(getLcmUrl(255)) {

    // 订阅频道​通过 _lcm.subscribe("spi_debug_cmd",&MiniCheetahSpi_Controller::handleLcm, this); 
    //    订阅名为 "spi_debug_cmd" 的 LCM 频道，并将接收到的消息传递给 handleLcm 方法处理
    _lcm.subscribe("spi_debug_cmd", &MiniCheetahSpi_Controller::handleLcm, this);
    // LCM 处理线程：​启动一个新的线程 _lcmThread，在其中持续调用 _lcm.handle()，以处理接收到的 LCM 消息。​

    _lcmThread = std::thread([&](){
      for(;;) _lcm.handle();
    });
  }
  // 虚析构函数：​定义了虚析构函数 virtual ~MiniCheetahSpi_Controller() {}，
  // 确保在删除派生类对象时，基类的析构函数也能被正确调用，防止资源泄漏
  virtual ~MiniCheetahSpi_Controller(){}

  virtual void initializeController(){}
  virtual void runController();
  virtual void updateVisualization(){}
  virtual ControlParameters* getUserControlParameters() {
    return nullptr;
  }

  void handleLcm(const lcm::ReceiveBuffer* rbuf, const std::string& chan,
    const leg_control_command_lcmt* msg) {
    (void)rbuf;
    (void)chan;
    _mutex.lock();
    command = *msg;
    _mutex.unlock();
  }

private:

  lcm::LCM _lcm;                  //​LCM 通信对象，用于发送和接收消息
  leg_control_command_lcmt command;// ​LCM 通信对象，用于发送和接收消息
  std::thread _lcmThread;          // ​处理 LCM 消息的线程对象。​
  std::mutex _mutex;               //_mutex：​互斥锁，用于保护对 command 对象的并发访问。
};

#endif //CHEETAH_SOFTWARE_MINICHEETAHSPI_CONTROLLER_H
