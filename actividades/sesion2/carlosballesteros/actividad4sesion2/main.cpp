#include <iostream>
using namespace std;
int main()

{

int a, b=2, c=3, d=5, e=7;
cout<<"introduce un numero: ";
cin>>a;
b=0;
while(b==0 && a==2 || a==3 || a==5 || a==7){
cout<<"Es primo";
b++;
break;
}
if(a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0){
cout<<"Es numero primo";
}
else{
 cout<<"no es primo";
}
}
