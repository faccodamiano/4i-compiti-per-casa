#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x1,x2,y1,y2;
    double distanza;
    cout<<"la prima x e'"<<endl;
    cin>>x1;
    cout<<"la seconda x e'"<<endl;
    cin>>x2;
    cout<<"la prima y e'"<<endl;
    cin>>y1;
    cout<<"la seconda y e'"<<endl;
   cin >>y2;
    distanza=sqrt((pow(x2,2.0))-(pow(x1,2.0))+((pow(y2,2.0))-(pow(y1,2.0))));
    cout<<"La distanza "<<distanza<<endl;
    return 0;


}

