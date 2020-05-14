#include <iostream>
using namespace std;

int factorial(long n);

int main(){
    cout <<"A que numero le quiere sacar el factorial? El numero debe ser entero para que funcione"<< endl;
    long n,m;
    cin >> n;
    m = factorial(n);
    cout <<"El resultado es:" << " " << m;
}

int factorial(long n){
    long m;
    if(n > 1){
         m = n*factorial(n-1);
    }
    else{
        m = 1;
    }
    return m;
}