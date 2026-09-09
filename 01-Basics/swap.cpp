#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter  first value: ";
    cin>>a;
    int b;
    cout<<"Enter second value: ";
    cin>>b;

    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<"Now First value is "<<a<< " and Second value is "<<b;
    return 0;

}