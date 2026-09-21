#include<iostream>
#include<string>
using namespace std;
int main() {
    string name;
    cout<<"Enter Your name: ";
    getline(cin,name);
    cout<<"Enter your age: ";
    int age;
    cin>> age;
    cout<<"Enter Your location: ";
    string loc;
    cin>> loc;
    cout<<"I know you are " <<name<< " and your age is " <<age <<" Also you are from "<<loc;
    return 0;
}
