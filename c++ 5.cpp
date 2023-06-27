//actividad numero 5
#include <bits/stdc++.h>
using namespace std;

float CalcularFahrenheit(int Celciuls);

int main(){

int Celsius;

cout<<"ingrese grados a convertir: "<<endl;
cin>>Celsius;

cout<<CalcularFahrenheit(Celsius);

return 0;
}
float CalcularFahrenheit(int Celciuls){

int Celsius;

return (Celsius - 32) * (5/9);
}

