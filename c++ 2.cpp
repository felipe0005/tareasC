//actividad numero 2
#include <bits/stdc++.h>
using namespace std;

float ConvertirDolar(int can);

int main(){

int can;

cout<<"ingresar una cantidad"<<endl;
cin>>can;

cout<<ConvertirDolar(can)<<endl;


return 0;
}
float ConvertirDolar(int can){
return can*331.37;
}

