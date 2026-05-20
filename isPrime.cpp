#include<iostream>
using namespace std;

void isPrime(int a){
    if(a==0){
        cout<<"zero is'nt primeNumber ";
    }
    else{ int flag = 0;
        for(int i=1; i<=a; i++){
            if(a%i==0){
                flag++;
            }
        }
        if(flag == 2) {
            cout<<"prime";
        }
        else{
            cout<<"notPrime";
    }
    }
}

int main() {
    int n;
    cout<<"enter number to check ";
    cin>>n;
    isPrime(n);
}