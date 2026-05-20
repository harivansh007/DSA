#include<iostream>
using namespace std;

int tableof(int a){
    int mul;
    for(int i=1; i<=10; i++){
        mul = a*i;
        cout<<a<<" x "<<i<<" = "<<mul<<endl;
    }
}

int main()
{ int n;
    cout<<"enter value of n ";
    cin>>n;
    tableof(n);
return 0;}