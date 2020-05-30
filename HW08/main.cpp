# include <iostream>
# include "funciones.h"
using namespace std;

/*
Comentario largo
A tope
*/

int main(){

    double dt = 0.01;
    double x0 = 8.5;
    double v0 = 20;
    
    dt = 0.01;
    double t = 0;
    double * Xi = new double[2];
    Xi[0] = x0;
    Xi[1] = v0;
    while(Xi[0] > 0){
        Xi = rk4(Xi,t,dt);
        t+=dt;
        cout << t << " " << Xi[0] <<endl;
    }
    /*
    double A[2] = {1,2};
    double * B = new double[2];
    B = por(A,2);
    cout<< B[0] << " , " << B[1] <<endl;
    */
}

