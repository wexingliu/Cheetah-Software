猎豹软件
此存储库包含 Robot 和 Simulation 软件项目。有关入门指南，请参阅 documentation 文件夹。

common 文件夹包含带有动力学和实用程序的 common 库 resources 文件夹将包含数据文件，例如用于可视化的机器人的 CAD 机器人文件夹将包含机器人程序 sim 文件夹将包含仿真程序。它是唯一依赖于 QT 的程序。第三方将包含我们修改过的小型第三方库。这应该只是 Cheetah 3 的 libsoem，Pat 曾修改过它。

建
要构建所有代码，请执行以下作：

mkdir build
cd build
cmake ..
./../scripts/make_types.sh
make -j4
如果你正在计算机上构建代码，并且想要复制到迷你猎豹上，你必须将 cmake 命令替换为

cmake -DMINI_CHEETAH_BUILD=TRUE
否则它将不起作用。如果您正在构建迷你猎豹代码一台迷你猎豹计算机，则无需执行此作。

此构建过程构建公共库、robot 代码和模拟器。如果您只是更改了 robot 代码，则只需再次运行 make -j4 即可。如果更改 LCM 类型，则需要运行 cmake ..; make -j4。这会自动运行 make_types.sh。

要测试 common 库，请运行 common/test-common。要运行 robot 代码，请运行 robot/robot。要运行模拟器，请运行 sim/sim。

此构建过程的一部分将自动下载 gtest 软件测试框架并进行设置。构建完成后，它将生成一个 libbiomimetics.a 静态库和一个可执行的 test-common。使用 common/test-common 运行测试。此输出有望以

[----------] Global test environment tear-down
[==========] 18 tests from 3 test cases ran. (0 ms total)
[  PASSED  ] 18 tests.
运行模拟器
要运行模拟器：

打开控制板
./sim/sim
在另一个命令窗口中，运行 robot 控制代码
./user/${controller_folder}/${controller_name} ${robot_name} ${target_system}
示例）

./user/JPos_Controller/jpos_ctrl 3 s
3：猎豹 3，m：迷你猎豹 s：模拟，r：机器人

Run Mini cheetah （迷你猎豹）
创建构建文件夹 mkdir mc-build
构建为迷你 cheetah 可执行文件 cd mc-build; cmake -DMINI_CHEETAH_BUILD=TRUE ..; make -j
通过以太网连接到迷你猎豹，验证您是否可以通过 ssh 输入
将 ../scripts/send_to_mini_cheetah.sh 程序复制到迷你猎豹
通过 SSH 进入迷你 Cheetah SSH user@10.0.0.34
进入机器人程序文件夹 cd robot-software-....
运行 robot 代码 ./run_mc.sh
依赖：
Qt 5.10 - https://www.qt.io/download-qt-installer
LCM - https://lcm-proj.github.io/ （请确保您有 java 让 lcm 一起编译 java-extension）
特征 - http://eigen.tuxfamily.org
mesa-common-dev
freeglut3-dev
libblas-dev liblapack-dev
要使用 Ipopt，请使用 CMake Ipopt 选项。例如） cmake -DIPOPT_OPTION=ON ..