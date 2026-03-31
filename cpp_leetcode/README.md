# LeetCode 刷题子项目

每道题一个独立文件夹，独立编译运行。

## 目录结构

```
cpp_leetcode/
├── template/        # 刷题模板（ListNode、TreeNode 等）
└── 0001_template/   # 第 0001 题
```

## 使用方法

每道题的文件夹包含独立的 CMakeLists.txt，可单独编译运行。

```bash
# 编译运行某道题
cd 0001_template
mkdir build && cd build
cmake ..
make
./solve
```

## 创建新题目

从 template 复制文件夹，按题号命名（如 `0001_两数之和`），然后在 `main.cpp` 中编写解题代码。
