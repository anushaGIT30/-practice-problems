#include<bits/stdc++.h>
using namespace std;
 
class student{
public:
    string name;
    int rollno;
    int marks;
    string address;
};
 
int main(){
    student s1; //object initialization
    s1.name = "Tanusha";
    s1.rollno = 21;
    s1.marks = 99;
    s1.address = "hyd";
    cout << s1.name << endl;
    cout << s1.rollno << endl;
    cout << s1.marks << endl;
    cout << s1.address << endl;
    
    return 0;
}
