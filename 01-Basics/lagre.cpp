#include<iostream>
using namespace std;
int main(){
    int a,l=0;
    cout<<"Enter number here: ";
    cin>>a;
    while(a>0){
        int digit = a % 10;
        if(l<digit){
            l=digit;
        }
        a=a/10;
    }
    cout<<"Largest no. is: "<<l;
}