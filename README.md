# cpplint-test

运行命令：

```shell
cpplint --output=eclipse --counting=toplevel --repository .. --recursive .
```

编译命令：

```shell
g++ -o main -I. main.cc table/map.cc
```

## 备注

CPPLINT.cfg文件中使用的选项：

```cpp
set noparent
filter=+filter1,-filter2,...
exclude_files=regex
linelength=80
root=subdir  // 相对路径与 CPPLINT.cfg 的目录相关。
headers=x,y,...
```
