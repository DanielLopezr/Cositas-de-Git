using namespace std;

// Esta función hace la suma entre dos vectores bidimensionales.
double * suma(double a[2], double b[2]){
    double * c = new double[2];
    c[0] = a[0] + b[0];
    c[1] = a[1] + b[1];
    return c;
}

// Esta función hace la multiplicación de un vector bidimensional. por un escalar
double * por(double a[2], double b){
    double * c = new double[2];
    c[0] = a[0]*b;
    c[1] = a[1]*b;
    return c;
}


//Esta función actualiza el vector de aceleración.
double * alpha(double X[2], double t){
    double g = -9.8;
    double * a = new double[2];
    a[0] = X[1];
    a[1] = g;
    return a;
}

//Esta función es rungekutta para aceleración constante.
double * rk4(double X[2], double t, double dt){
    
    double * k1 = new double[2];
    double * k2 = new double[2];
    double * k3 = new double[2];
    double * k4 = new double[2];
    double * add1 = new double[2];
    double * add2 = new double[2];
    double * add3 = new double[2];
    double * Xnew = new double [2];

    k1 = por( alpha(X,t) , dt );
    k2 = por( alpha( suma( X , por(k1,0.5) ) , t+(dt/2) ), dt );
    k3 = por( alpha( suma( X , por(k2,0.5) ) , t+(dt/2) ), dt );
    k4 = por( alpha( suma( X , k3 ) , t+dt ), dt );
        
    add1 = suma( por( k1 , 0.16 ) , por( k2 , 0.33) );
    add2 = suma( add1 , por( k3 , 0.33) );
    add3 = suma( add2 , por( k4 , 0.16) );
    Xnew = suma( X , add3);        
    return Xnew;
} 

/*
def ALPHA(X,t):
    global g,l
    return np.array([X[1],-(g/l)*np.sin(X[0])])
    
def rungekutta4(dt,t,X,Xprima):
    assert callable(Xprima)
    k1 = Xprima(X,t)*dt
    k2 = Xprima(X+k1/2,t+dt/2)*dt
    k3 = Xprima(X+k2/2,t+dt/2)*dt
    k4 = Xprima(X+k3,t+dt)*dt
    return t+dt,X+(k1+2*k2+2*k3+k4)/6
*/

