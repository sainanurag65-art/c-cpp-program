#include<iostream>>
using namespace  std;
class rectangle
{
    public:
    float lenght, width;

    void input(){
        cout<<"Enter the Lenght: ";
        cin>>lenght;

        cout<<"Enter the Width: ";
        cin>>width;
    }
     void display(){
        
        cout<<"The Length is: "<<lenght<<endl;
        cout<<"The Width is: "<<width<<endl;
     }

    void area(){

        cout<<"Area of the Rectangle: "<<lenght*width<<endl;
    }
    
    
};
int main(){
    class rectangle rec;
    rec.input();
    rec.display();
    rec.area();
}