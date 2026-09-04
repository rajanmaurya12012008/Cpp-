#include<iostream>
#include<string>
using namespace std;
int main() {
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter your age: ";
    int age;
    cin>> age;
    cout<<"Enter your location: ";
    string loc;
    cin>> loc;
    cout<<"I know you are " <<name<< " and your age is " <<age <<" rAlso you are from "<<loc;
    return 0;
}
