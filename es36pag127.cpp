#include <iostream>
using namespace std;
void OrdinaEta (int& x, int& y){
int temp;
if(x<y){
temp=x;
x=y;
y=temp;
}
}
int main(){
int a,b,c;
cin>>a>>b>>c;
OrdinaEta(a,b);
OrdinaEta(a,c);
OrdinaEta(b,c);
cout<<"Numeri in ordine"<<a<<b<<c;
return 0;
}
