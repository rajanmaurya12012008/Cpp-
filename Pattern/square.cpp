#include<iostream>
using namespace std;
int main(){
    int n, i, j;
    cout<<"Enter N here: ";
    cin>>n;
    for(i; i<n; i++){
        cout<<" "<<endl;
        for(j; j<n; j++){
            cout<<" * ";
        }
    }
}