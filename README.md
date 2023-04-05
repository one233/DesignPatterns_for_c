# DesignPatterns_for_c

## 简介

本项目基于[DesignPatterns_for_c](https://github.com/AnotherSeventeen/DesignPatterns_for_c)，加入makefile文件方便编译，makefile编写参考[多文件目录下makefile文件递归执行编译所有c文件](https://blog.csdn.net/Wang20122013/article/details/120868086)完成。

## 使用示例

前置条件:**配置好MinGW**

```Shell
MINGW64 /e/Learn/DesignPatterns_for_c (master)
$ cd Adapter/

MINGW64 /e/Learn/DesignPatterns_for_c/Adapter (master)
$ make
gcc -c media.c -o ./debug/obj/media.o
gcc -c play_mp4.c -o ./debug/obj/play_mp4.o
gcc -c main.c -o ./debug/obj/main.o

make -C debug
make[1]: Entering directory 'E:/Learn/DesignPatterns_for_c/Adapter/debug'
gcc -o bin/myapp.exe obj/media.o obj/play_mp4.o obj/main.o
make[1]: Leaving directory 'E:/Learn/DesignPatterns_for_c/Adapter/debug'

MINGW64 /e/Learn/DesignPatterns_for_c/Adapter (master)
$ ./debug/bin/myapp.exe
play hello.mp3
play hello.mp4
unknow type
```

## 后续

如果需要递归递归删除子目录下所有.xx后缀文件可以参考[用rm递归递归删除子目录下所有.o后缀文件](https://www.cnblogs.com/UnGeek/p/4319547.html)中的方法：

```Shell
find . -name "*.o"  | xargs rm -f
```
