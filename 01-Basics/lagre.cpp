#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number here: "<<a;
    cin>>a;
    int l=0;
    while(a>0){
        int digit = a % 10;
        if(l < digit){
            l=digit;
        }
        a=a/10;
    }
    cout<<"Largest no. is: "<<l;
    

}