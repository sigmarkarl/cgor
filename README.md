# cgor

## Introduction

Read and write files in .gorz format (see. https://github.com/gorpipe/gor.git). 
Support for reading column compressed .gorz is preliminary.
No support for writing column compressed .gorz.

## Prerequisite if using libdeflate

Compile or Install libdeflate
* Compile: 
```bash
 git clone https://github.com/ebiggers/libdeflate  
make
```

* On Mac: 
```bash
brew install libdeflate
```

## Compile

* Compile cgor: 
```bash
g++ -std=c++11 -O3 -lz gor.cc -o cgor
```
* Compile cgor on Mac using libdeflate: 
```bash
g++ -std=c++11 -O3 -DLIBDEFLATE -L/usr/local/lib -I/usr/local/include -ldeflate gor.cc -o cgor
```

## Usage

read: 
```bash
./cgor dbsnp.gorz
```
seek:
```bash
./cgor -p chr2 dbsnp.gorz | head
```
write:
```bash
cat dbsnp.gor | ./cgor -c > dbsnp.gorz
```