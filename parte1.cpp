#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;


const double k = 100;
const double delta =  0.01;
const double lamda =  1;
const double m =  2;


double f0 (double t, double y0, double y1);
double f1 (double t, double y0, double y1);
void euler (double df, string n);




int main (){
    
    euler (delta, "euler.dat");
    
    return 0;
}

double f0 (double t, double y0, double y1){
    
    return y0;
}

double f1 (double t, double y0, double y1){
    
    return 0;
}



void euler (double df, string n){
    
    int time = 1000;
    int t = 1;
    double espacio[time], velocidad[time];
    espacio[0] = 1;
    velocidad[0] = 0;
    
    ofstream outfile;
    outfile.open(n);
        
    outfile << espacio[0] <<""<<velocidad[0]<<endl;
    
    
    for (int i=1 ; i<=11; i++){
        
        espacio[i] = (velocidad[i-1]*delta  ) + espacio[i-1];
        velocidad[i] = (espacio[i-1]*delta  ) + velocidad[i-1];
        outfile << espacio[i] <<""<<""<<velocidad[i]<<""<<endl;
        t+=delta;
    }
        
    
        
    
    
}