// esercizio numero 41 calcolare incasso medio

#include<iostream>
using namespace std ;

void acquisizione_somma(float& somma_incassi, int& num_reparti);
float media (int num_reparti, float somma_incassi);

int main() {
    int num_reparti=0;
    float somma_incassi=0;
    acquisizione_somma(somma_incassi, num_reparti);
    cout<< "l'incasso medio è stato" <<media(num_reparti, somma_incassi) << endl;
    return 0;
}

void acquisizione_somma(float& somma_incassi, int& num_reparti) {
    char scelta;
    float incasso;
    int i=0;
    int x;
    do{
            cout<< "inserisci il nome del" << i << "° reparto:" << endl;
            cin>> x;
            cout<< "inserisci l'incasso del" << i << "° reparto" << endl;
            cin>> incasso ;
            somma_incassi +=incasso;
            i=i++;
            num_reparti=i;
            cout<< "Ancora reparti s/n" << endl ;
            cin>> scelta;
        }while(scelta== 's' ) ;
}
    float media(int num_reparti, float somma_incassi){
    return somma_incassi/num_reparti;
    }
