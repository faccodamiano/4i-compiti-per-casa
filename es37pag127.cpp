#include <iostream>
using namespace std;
int Eta (int x)
{
    int differenza;
    differenza=2016-x;
         cout<<"L'eta della persona e'"<<differenza<<endl;
    return differenza;
}
int main(){
    int eta;
    cout<<"inserisci l' anno di nascita"<<endl;
    cin>>eta;
     Eta(eta);

     return 0;
}
