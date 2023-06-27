//actividad numero 4
#include <bits/stdc++.h>
using namespace std;

float CalcularSalario(int salario);

int main(){

int salario;

cout<<"ingrese su salario: "<<endl;
cin>>salario;

cout<<CalcularSalario(salario)<<endl;


}
float CalcularSalario(int salario){

float nsalario;

if(salario >= 0 && salario <= 400.00){

nsalario = salario + (salario * 0.15);

}
if(salario > 400.00 && salario <= 800.00){

nsalario = salario + (salario * 0.12); 

}
if(salario > 800.00 && salario <= 1200.00){

nsalario = salario + (salario * 0.10);

}
if(salario > 1200.00 && salario <= 2000.00){

nsalario = salario + (salario * 0.7);

}
if(salario > 2000.00){

nsalario = salario + (salario * 0.4);

}



return nsalario;
}

