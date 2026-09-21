#include<iostream>
using namespace std;
int main() {
    int a; 
    float area;
    cout<<"Enter Radius of circle: ";
    cin>>a;
    float pi=3.142;
    area = 2*pi*(a*a);
    cout<<"Area of radius "<< a <<" circle is: "<< area;
}