# C++ Study

> 个人 C++ 学习项目仓库，包含多个独立子项目，持续更新中。

## 子项目列表

| 项目 | 说明 |
|---|---|
| [cpp_hello](./cpp_hello) | C++ 基础入门示例，Hello World |
| [cpp_json](./cpp_json) | 使用 nlohmann_json 库处理 JSON 数据 |

## 目录结构

```
cpp_study/
├── cpp_hello/      # C++ 基础示例
├── cpp_json/        # JSON 处理示例
└── .gitignore
```

## 当前项目详情

### cpp_hello

最简单的 C++ 程序，演示：
- 基本输出
- WSL2 环境下的编译运行

**编译运行：**
```bash
cd cpp_hello
g++ main.cpp -o hello
./hello
```

### cpp_json

使用 `nlohmann/json` 库演示：
- JSON 对象构造
- 美化输出（pretty print）

**编译运行：**
```bash
cd cpp_json
mkdir build && cd build
cmake ..
make
./main
```

## 后续计划

- [ ] cpp_transformer — 从零实现 Transformer 算法
- [ ] cpp_network — Socket 网络编程
- [ ] cpp_concurrency — C++ 并发与线程池
- [ ] cpp_algorithm — 常见算法实现

---

*持续学习，欢迎交流。*
