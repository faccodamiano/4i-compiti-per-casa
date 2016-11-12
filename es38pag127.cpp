#include <iostream>
using namespace std;
float CalcolaSconto (float x,float y)
{
    float prezzoScontato;
    prezzoScontato=(x*y)/(100);
    cout<<"Il prezzo scontato "<<prezzoScontato<<endl;
    return prezzoScontato;
}


int main()
{
    float prezzoDiVendita;
    float percentuale;
    cout<<"Il prezzo di vendita e'"<<endl;
    cin>>prezzoDiVendita;
    cout<<"La percentuale di sconto e'"<<endl;
    cin>>percentuale;
     CalcolaSconto(prezzoDiVendita,percentuale);
    return 0;
}
