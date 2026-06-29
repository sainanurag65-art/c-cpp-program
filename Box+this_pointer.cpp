#include <iostream>
using namespace std;

class Box
{
private:
    int length;

public:
    void setLength(int length)
    {
        // 'this' pointer is used to refer to the current object's data member
        this->length = length;
    }

    void display()
    {
        cout << "Length of Box = " << length << endl;
    }
};

int main()
{
    Box b1;

    b1.setLength(15);
    b1.display();

    return 0;
}