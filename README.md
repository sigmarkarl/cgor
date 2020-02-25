# cgor

## Prerequisite

Compile or Install libdeflate
* Compile:  git clone https://github.com/ebiggers/libdeflate
            make CC=x86_64-w64-mingw32-gcc
* On Mac: brew install libdeflate
* On Ubuntu: apt install libdeflate

## Compile

* Compile cgor on Mac: g++ -O3 -L/usr/local/lib -I/usr/local/include -lz -ldeflate gor.cc -o cgor