# StackSpeedTest

A stack speed test project group.
The methods to use are push(), pop(), search().

In Golang, I made the structure and function for Stack.


# Related article

* 言語別Stack処理速度比較<br>
https://qiita.com/gx3n-inue/items/05a0941a83d86dcd8cbc


# How to Build and Run

## Project for C


### Change Directory

```
$ cd Project_C_by_Segment
```
or
```
$ cd Project_C_by_ListNode
```


### Build(no debug info)

* Windows (Minimalist GNU for Windows)

```  
> mingw32-make.exe all
```


* macOS or Linux (gcc)

```
$ make all
```

### Build(with debug info)

* Windows (Minimalist GNU for Windows)

```
> mingw32-make.exe debug
```

* macOS or Linux (gcc)

```
$ make debug
```

### Run

* Windows

```
> ./main.exe 100000000
```

* macOS

```
$ ./main_for_mac 100000000
```

* Linux

```
$ ./main_for_linux 100000000
```

## Project for Java


### Change Directory

```
$ cd Project_Java_Stack
```
or
```
$ cd Project_Java_Deque
```
or
```
$ cd Project_Java_ArrayDeque
```


### Build

* Windows(MinGW is required)

```
> rm *.class
> mingw32-make all
```

* macOS/Linux

```
$ make clean
$ make all
```

### Run(Java)

```
$ java Main 100000000
```

## Project for Python3

### Change Directory

```
$ cd Project_Python3
```

### Run(Python3)

```
$ python ./main.py 100000000
```


## Project for Golang

### Change Directory

```
$ cd /Project_Go_Stack_by_Segment
```

or

```
$ cd /Project_Go_Stack_by_ListNode
```

or

```
$ cd /Project_Go_Stack_by_Array
```


### Run(Golang)

```
$ go run ./main.go 100000000
```


## Project for C Sharp (.NET Core 3.0)

### Change Directory

```
$ cd Project_CS
```

### Run(dotnet) [Windows/macOS/Linux]

```
> dotnet run -c Release 100000000
```

# Results

Execution result of 100 million stack generation in the following environment.

|item|value|
|---|---------|
|OS|MS-Windows 10|
|CPU|Intel Core-i7 8559u|
|Memory|16GB(LPDDR3/2133MHz)|


## C (gcc.exe \(x86_64-posix-seh-rev0, Built by MinGW-W64 project\) 8.1.0)(Segment Array)

|times|Execution time|
|---|---------|
|1st|843 [ms]|
|2nd|828 [ms]|
|3rd|828 [ms]|


## C (gcc.exe \(x86_64-posix-seh-rev0, Built by MinGW-W64 project\) 8.1.0)(ListNode)

|times|Execution time|
|---|---------|
|1st|7816 [ms]|
|2nd|7828 [ms]|
|3rd|7953 [ms]|


## C# NET Core 3.0.100(Class Stack)

https://docs.microsoft.com/ja-jp/dotnet/api/system.collections.generic.stack-1?view=netcore-3.1

|times|Execution time|
|---|---------|
|1st|977 [ms]|
|2nd|1003 [ms]|
|3rd|1004 [ms]|


## go1.14.4 windows/amd64(Segment)

|times|Execution time|
|---|---------|
|1st|874 [ms]|
|2nd|881 [ms]|
|3rd|904 [ms]|


## go1.14.4 windows/amd64(Array)

|times|Execution time|
|---|---------|
|1st|2089 [ms]|
|2nd|1853 [ms]|
|3rd|1737 [ms]|


## go1.14.4 windows/amd64(ListNode)

|times|Execution time|
|---|---------|
|1st|5617 [ms]|
|2nd|5400 [ms]|
|3rd|5569 [ms]|


## java 13.0.2(Class Stack)

https://docs.oracle.com/javase/jp/8/docs/api/java/util/Stack.html

|times|Execution time|
|---|---------|
|1st|6743 [ms]|
|2nd|6690 [ms]|
|3rd|6733 [ms]|


## java 13.0.2(Class ArrayDeque)

https://docs.oracle.com/javase/jp/8/docs/api/java/util/ArrayDeque.html

|times|Execution time|
|---|---------|
|1st|4397 [ms]|
|2nd|4612 [ms]|
|3rd|4477 [ms]|


## java 13.0.2(Interface Deque)

https://docs.oracle.com/javase/jp/8/docs/api/java/util/Deque.html

|times|Execution time|
|---|---------|
|1st|21416 [ms]|
|2nd|20187 [ms]|
|3rd|20341 [ms]|


## Python 3.8.3(List)

|times|Execution time|
|---|---------|
|1st|16957 [ms]|
|2nd|16561 [ms]|
|3rd|17558 [ms]|

