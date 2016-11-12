#include <iostream>
using namespace std;
bool ControlloPerpendicolarita(int x,int y);
int main(){
    int m1,m2;
    cout<<"Il primo coefficiente angolare e'"<<endl;
    cin>>m1;
    cout<<"Il secondo coefficiente angolare e'"<<endl;
    cin>>m2;
     ControlloPerpendicolarita(m1,m2);
    return 0;
}
bool ControlloPerpendicolarita(int x,int y)
{
    int verita;
    if (x=-1/y){
        verita= true;
        cout<<"le rette sono perpendicolari"<<endl;
    }
    else{
            verita=false;
            cout<<"le rette non sono perpendicolari"<<endl;
    }
    return verita;
}
