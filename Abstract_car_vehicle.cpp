#include <iostream>
using namespace std;


class Car {
public:
    virtual void start() = 0;   
};


class BMW : public Car {
public:
    void start() override {
        cout << "BMW Car Started" << endl;
    }
};

int main() {
    BMW b;
    b.start();

    return 0;
}