#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include <errno.h>
#include <cstring>
#include <cerrno>
#include <fstream>
#include <memory>
#include <cassert>
#include <cstdlib>
#include <algorithm>
using namespace std;
class A {

private:
    int x;

public:
    A() :
        x(0)
    {

    }
    ~A() {

    }
};

class B {

private:
    std::vector<std::unique_ptr<A>> vec;

public:
    B() :
        vec(std::vector<std::unique_ptr<A>>())
    {
        std::unique_ptr<A> a(new A());
        vec.push_back(std::move(a));
    }
    ~B() {

    }
    // needs to be copy-able!

};

int main() {
A a;
B b;
}
