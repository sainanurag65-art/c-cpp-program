#include<iostream>
using namespace std;
class car
{
    public:
    string brand;
    int price;

    //static Variable
    static int totalCars;
    //Constructor
    car(string b, int p)
    {
        brand = b;
        price = p;
        totalCars++;    //Increament object count
    }
    void display(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
//static function
    int car::totalCars = 0;

int main(){
    car c1("Toyota", 12000000);
    car c2("Honda",90000000);
    car c3("Mercedes",150000000);

    c1.display();
    cout<<endl;

    c2.display();
    cout<<endl;

    c3.display();
    cout<<endl;

    //call static function

    car::totalCars;
}    
