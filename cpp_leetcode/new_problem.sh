#!/bin/bash
# 用法: ./new_problem.sh <题号> <标题>
# 示例: ./new_problem.sh 1 两数之和

set -e

NUM=$(printf "%04d" "$1")
TITLE="$2"
FOLDER="${NUM}_${TITLE}"
TEMPLATE_DIR="$(dirname "$0")/template"

if [ -z "$NUM" ] || [ -z "$TITLE" ]; then
    echo "用法: $0 <题号> <标题>"
    echo "示例: $0 1 两数之和"
    exit 1
fi

if [ -d "$FOLDER" ]; then
    echo "文件夹已存在: $FOLDER"
    exit 1
fi

cp -r "$TEMPLATE_DIR" "$FOLDER"
echo "已创建: $FOLDER"
