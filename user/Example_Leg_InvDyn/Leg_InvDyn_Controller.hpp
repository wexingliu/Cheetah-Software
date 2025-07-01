#ifndef JPOS_CONTROLLER
#define JPOS_CONTROLLER

#include <RobotController.h>
#include "Leg_InvDyn_UserParameters.h"

class Leg_InvDyn_Controller:public RobotController{
  public:
    // Leg_InvDyn_Controller()：​调用基类 RobotController 的构造函数进行初始化。
    Leg_InvDyn_Controller():RobotController(){
    }
    // ~Leg_InvDyn_Controller()：​声明为虚函数，确保在删除派生类对象时，
    // 能够正确调用派生类的析构函数，防止资源泄漏
    virtual ~Leg_InvDyn_Controller(){}

    virtual void initializeController(){}
    virtual void runController();
    virtual void updateVisualization(){}
    virtual ControlParameters* getUserControlParameters() {
      return &userParameters;
    }
  protected:
    Leg_InvDyn_UserParameters userParameters;
};

#endif
