#include <iostream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main() {
    // 创建一个 JSON 对象
    json ex1 = {
        {"happy", true},
        {"pi", 3.141},
        {"course", "C++ Learning"},
        {"platform", "WSL2 (Ubuntu 24.04)"}
    };

    std::cout << "序列化后的 JSON 内容:\n" << ex1.dump(4) << std::endl;
    return 0;
}