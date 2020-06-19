# Template project

## Running this project

### Requirements:

Install the following programs:

- Cmake
- Check
- Valgrind

    $ mkdir build && cd build
    $ cmake ..
    $ make
    $ make test
    $ make valgrind_test_template

Note: For each add_executable in the build, you will need to create a specific target for the valgrind with add_custom_target.

This template was adapted from [Simple unit testing example with Check and CMake](https://github.com/vndmtrx/check-cmake-example/blob/c62b71f1d93ae2443fc05b814810e5d8c49fc904/README.md)
