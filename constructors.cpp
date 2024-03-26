#include<iostream>
using namespace std;
class rectangle{
    public:
    int l;
    int b;

rectangle(){//default constructor
    l=6;
    b=9;
}
rectangle(int x,int y){//parameterized constructors
    l=x;
    b=y;
}
rectangle(rectangle &r){
    //copy constructor: when we want to initialize an object by another existing object
l=r.l;
b=r.b;
}
};
int main(){
    rectangle r1;
    cout<<r1.l<<endl;
    cout<<r1.b<<endl;
    rectangle r2(4,6);
    cout<<r2.l<<endl;
    cout<<r2.b<<endl;
    rectangle r3=r2;
    cout<<r3.l<<endl;
    cout<<r3.b<<endl;
}