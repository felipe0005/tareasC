//actividad numero 3
#include <bits/stdc++.h>
using namespace std;

int EsMayor(int a, int b, int c);

int main(){
int a;
int b;
int c;

cout<<"ingrese un numero 1: "<<endl;
cin>>a;

cout<<"ingrese un numero 2: "<<endl;
cin>>b;

cout<<"ingrese un numero 3: "<<endl;
cin>>c;


cout<<EsMayor(a, b, c)<<endl;


return 0;
}
int EsMayor(int a, int b, int c ){

string msg;

if(a < b && c){

msg = "el mayor es a";

}
if(b < a && c){

msg = "el mayor es b";

}
if(c < a && c){

msg = "el mayor es c";

}


return msg;
}


