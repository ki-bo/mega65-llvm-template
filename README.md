# mega65-llvm-template
Template for llvm based projects for MEGA65

## Install needed SDK
Download the latest release of [mos-llvm-sdk](https://github.com/llvm-mos/llvm-mos-sdk/releases) from Github and extract it to any folder you like.

## Retrieve MEGA65-LIBC
If you cloned the repository without submodules, you can retrieve the needed mega65-libc repository manually via

`git submodule update --init`

## Install CMake and Ninja
Install [CMake](https://cmake.org/) for your operating system and the [Ninja](https://ninja-build.org/) build tool.

### APT:
```
sudo apt install cmake ninja-build
```

### Chocolatey:
```
choco install cmake ninja
```

### Homebrew:
```
brew install cmake ninja
```


## Configure the CMake project
If you put the SDK into your PATH, CMake can be used just as is. It will find the SDK, configure a cross-compile toolchain with the needed compiter and MEGA65 target.

```
cmake -B build -G Ninja
cmake --build build
```

*Warning: If you already have any clang compiler in your path, you should not add mos-llvm to it, since they will conflict.*

**If the SDK is not in your path** (which is perfectly fine), you should add the path to it when calling the CMake command:

```
cmake -B build -G Ninja -DCMAKE_PREFIX_PATH=<path where you extracted the SDK>
cmake --build build
```
The resulting MEGA65 mode exectuable (default `hello.prg`) will be available in the `build` folder.
