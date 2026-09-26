#include<iostream>
using namespace std;
int main(){
    int n, i, j;
    cout<<"Enter N here: ";
    cin>>n;
    for(i=0; i<n; i++){
        cout<<" "<<endl;
        for(j=0;j<n;j++){
            cout<<" * ";
        }
    }
}