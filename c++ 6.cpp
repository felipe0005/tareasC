//actividad numero 6
#include <bits/stdc++.h>
using namespace std;

string calcularDDD(int codigo);

int main(){

int codigo;

cout<<"ingresar codigo: "<<endl;
cin>> codigo;

cout<<calcularDDD(codigo)<<endl;





return 0;
}
string calcularDDD(int codigo){


string msg;

if(codigo == 61){

msg = "Brasilia";

}
if(codigo == 71){

msg = "Salvador";

}
if(codigo == 11){

msg = "Sao paulo";

}
if(codigo == 21){

msg = "Rio de Janeiro";

}
if(codigo == 32){

msg = "Juiz de fora";

}
if(codigo == 19){

msg = "Campinas";

}
if(codigo == 27){

msg = "Vitoria";

}
if(codigo == 31){

msg = "Belo Horizonte";

}


return msg;
}


