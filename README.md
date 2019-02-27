# Simple CTest example

Simple CMake example that bulids a program `test` that fails when you
pass it anything other than zero.

## Building

To build:

```
mkdir build && cd build
cmake ..
make
```

## Testing

To test (from within the build directory):

```
ctest
```

That's all!
