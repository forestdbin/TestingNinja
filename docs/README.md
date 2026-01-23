# Testing

Showing how to test by using various testing frameworks.

## GoogleTest

```bash
cd shared/source
git clone https://github.com/google/googletest.git
cd googletest
git checkout v1.17.0
```

## Boost

download [boost_1_90_0.tar.bz2](https://archives.boost.io/release/1.90.0/source/boost_1_90_0.tar.bz2) from [Boost Releases](https://www.boost.org/releases/latest/) to shared/source

```bash
cd shared/source
tar xf boost_1_90_0.tar.gz
cd boost_1_90_0
git init
git add .
git commit -m 'Init commit'
```

```bash
cd boost_1_90_0
./bootstrap.sh
./b2
./b2 install --prefix=../../lib/boost/default
```

## Catch2

```bash
cd shared/source
git clone https://github.com/catchorg/Catch2.git
cd Catch2
git checkout v3.12.0
```

## doctest

```bash
cd shared/source
git clone https://github.com/doctest/doctest.git
cd doctest
git checkout v2.4.12
```
