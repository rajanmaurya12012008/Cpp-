#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter no. here: ";
    cin>>a;
    if (a%2==0){
        cout <<a<<" is Even"<< endl;
    }
    else if (a%2!=0){
        cout<<a<<" is odd number"<< endl;
    }
    else {
        cout<<"Invalid Enter try again"<< endl;
    }

}