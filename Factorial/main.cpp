#include <iostream>
using namespace std;
int main(){
    cout <<"A que numero le quiere sacar el factorial? El numero debe ser entero para que funcione"<< endl;
    long n;
    cin >> n;
    long m = n-1;
    if(n != 0){
        for(m; m > 1; m--){
            n *= m;
        }  
    }
    else{
        n = 1;
    }
    cout <<"El resultado es:" << " " << n;
}