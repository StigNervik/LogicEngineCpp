# LogicEngineCpp
A logic engine written in C++ using CMake and Google Test.
I have tested out this project running on Mac and Linux Ubuntu.


# Setup
First you need to install CMake and git.

First you need to clone the Google Test framework.
Open a terminal and type in the following:

git clone https://github.com/google/googletest
cd googletest
mkdir build
cd build
cmake ..
make
sudo make install

By using sudo when install the google test framwork the library will be install in /usr/local/include and /usr/local/lib.

