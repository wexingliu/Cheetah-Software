#ifndef PROJECT_LEGINVDYNSUSERPARAMETERS_H
#define PROJECT_LEGINVDYNSUSERPARAMETERS_H
// ​定义了 Leg_InvDyn_UserParameters 类，继承自 ControlParameters，
// 用于声明和管理控制器的用户参数。​



#include "ControlParameters/ControlParameters.h"

class Leg_InvDyn_UserParameters : public ControlParameters {
public:
  // 构造函数 Leg_InvDyn_UserParameters()：
  // ControlParameters("user-parameters")：​调用基类 ControlParameters 的构造函数，
  // 初始化参数集合的名称为 "user-parameters"
  Leg_InvDyn_UserParameters()
      : ControlParameters("user-parameters"),
        // INIT_PARAMETER(num_moving_legs)：​初始化参数 num_moving_legs，这是一个宏，
        // 通常用于将参数添加到参数集合中，并设置默认值
        INIT_PARAMETER(num_moving_legs)
      {}
  // 使用宏 DECLARE_PARAMETER 声明一个名为 num_moving_legs 的参数，类型为 double
  DECLARE_PARAMETER(double, num_moving_legs);
};

#endif //PROJECT_LEGINVDYNSUSERPARAMETERS_H
