#include <iostream>
#include <string>
using namespace std;
int PercentualeVoti(int x,int y,int z,string nome1,string nome2);
int main(){
    int voti;
    int voti1;
    string candidato1;
    string candidato2;
    cout<<"Qual' e' il nome del primo candidato?"<<endl;
    cin>>candidato1;
    cout<<"Qual' e' il nome del secondo candidato?"<<endl;
    cin>>candidato2;
    cout<<"voti condidato1"<<endl;
    cin>>voti1;
    int voti2;
    cout<<"i voti per il secondo candidato"<<endl;
    cin>>voti2;
    voti=voti1+voti2;
    PercentualeVoti(voti1,voti2,voti,candidato1,candidato2);
    return 0;
}
int PercentualeVoti(int x,int y,int z,string nome1,string nome2){
    int PercentualeVoti1;
    int PercentualeVoti2;
    PercentualeVoti1=(x*100)/(z);
    PercentualeVoti2=100-PercentualeVoti1;
    if(PercentualeVoti1>PercentualeVoti2){
        cout<<nome1<<' '<<nome2<<endl;
    }
    else{
        cout<<nome2<<' '<<nome1;

    }

}
