#include "MiniCheetahSpi_Controller.h"

// 函数的主要作用是将接收到的关节控制命令应用到机器人的腿部控制器中
void MiniCheetahSpi_Controller::runController() {
  _mutex.lock();  // 加锁，确保对共享资源的线程安全访问

  u32 idx = 0;  // 初始化索引变量
  for(u32 leg = 0; leg < 4; leg++) {  // 遍历四条腿
    for(u32 joint = 0; joint < 3; joint++) {  // 遍历每条腿的三个关节
      _legController->commands[leg].qDes[joint] = command.q_des[idx];  // 设置期望关节位置
      _legController->commands[leg].kpJoint(joint,joint) = command.kp_joint[idx];  // 设置关节位置控制的比例增益
      _legController->commands[leg].kdJoint(joint,joint) = command.kd_joint[idx];  // 设置关节位置控制的微分增益
      idx++;  // 更新索引
    }
  }

  _mutex.unlock();  // 解锁
}