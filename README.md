# StackSpeedTest

A stack speed test project group.
The methods to use are push(), pop(), search().

In Golang, I made the structure and function for Stack.

# How to Build and Run

## Project for Java


### Change Directory

```
$ cd Project_Java
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
$ cd /Project_Go_Stack_by_Array
```

or

```
$ cd /Project_Go_Stack_by_ListNode
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

results sample.

|item|value|
|---|---------|
|OS|MS-Windows 10|
|CPU|Intel Core-i7 8559u|

## C# NET Core 3.0.100


|times|Execution time|
|---|---------|
|1st|977 [ms]|
|2nd|1003 [ms]|
|3rd|1004 [ms]|

## go1.14.4 windows/amd64

|times|Execution time|
|---|---------|
|1st|2089.997 [ms]|
|2nd|1853.999 [ms]|
|3rd|1737.996 [ms]|

## java 13.0.2 2020-01-14

|times|Execution time|
|---|---------|
|1st|6743 [ms]|
|2nd|6741 [ms]|
|3rd|6733 [ms]|

## Python 3.8.3

|times|Execution time|
|---|---------|
|1st|16957.996130 [ms]|
|2nd|16561.013699 [ms]|
|3rd|17558.000088 [ms]|
