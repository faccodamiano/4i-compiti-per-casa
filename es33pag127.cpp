#include <iostream>
using namespace std;
int coordinatax;
int coordinatay;
int Fuoco(int x,int y,int z);
int Vertice(int x,int y,int z);
int IntAssi(int x,int y,int z);

int main(){
    int a,b,c;
    cout<<"Inserisci i tre coefficienti"<<endl;
    cin>>a>>b>>c;
    Fuoco(a,b,c);
    Vertice(a,b,c);
    IntAssi(a,b,c);
    return 0;
}
int Fuoco(int x,int y,int z){
   coordinatax=-y/(2*x);
   coordinatay=((4*x*z)-(y*y))/(4*x);
   cout<<"Il fuoco ha coordinate"<<coordinatax<<";"<<coordinatay;
   return coordinatax;
   return coordinatay;
}
int Vertice(int x,int y,int z){
   coordinatax=-y/(2*x);
   coordinatay=(1-(y*y)+(4*x*z))/(4*x*z);
   cout<<"Il vertice ha coordinate"<<coordinatax<<";"<<coordinatay;
   return coordinatax;
   return coordinatay;
}
int IntAssi(int x,int y,int z){
   coordinatax=-y/(2*x);
   coordinatay=(-1+(y*y)-(4*x*z))/(4*x*z);
   cout<<"Le intersezioni con gli assi hanno coordinate"<<coordinatax<<";"<<coordinatay;
   return coordinatax;
   return coordinatay;
}

