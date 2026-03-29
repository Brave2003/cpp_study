cmake_minimum_required(VERSION 3.10)
project(HelloCpp)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 寻找刚才安装的 JSON 库
find_package(nlohmann_json CONFIG REQUIRED)

add_executable(main main.cpp)

# 将库链接到你的程序
target_link_libraries(main PRIVATE nlohmann_json::nlohmann_json)