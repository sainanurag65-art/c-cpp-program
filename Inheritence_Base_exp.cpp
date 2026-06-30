#include<iostream>
using namespace std;
class base{
    public:
    int ba;

    public:
    void input_base(){
        cout<<"Enter the base: ";
        cin>>ba;
    }

    void show_base(){
        cout<<"Base is: "<<ba<<endl;
    }
};

    class exponent{
        public:
        int exp;

        public:
        void input_exp(){
            cout<<"Enter the Exponent: ";
            cin>>exp;
        }
        void show_exp(){
            cout<<"Exponent is: "<<exp<<endl;
        }
    };

    class power: public base, public exponent{

        int po;
        public:
        void input(){

        input_base();
        input_exp();
        }
        void show(){
            show_base();
            show_exp();

            int i;
            po = 1;
            for(i=1; i<=exp; i++)
                po = po * ba;
                cout<<"Power is: "<<po<<endl;
        }
    };
    int main(){
        power o1;
        o1.input();
        o1.show();
    }

