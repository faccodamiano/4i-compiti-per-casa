#include <iostream>
using namespace std;

int AreaPerimetro(int x);
int main(){
    int lato;
    cout<<"Misura del lato del quadrato"<<endl;
    cin>>lato;
    AreaPerimetro(lato);
    return 0;

}
int AreaPerimetro(int x){
    int Area;
    int Perimetro;
     Area=x*x;
    Perimetro=x*4;
    cout<<"L'area e':"<<Area<<endl;
    cout<<"il perimetro e':"<<Perimetro<<endl;
}
