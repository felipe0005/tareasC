//actividad numero 1
#include <bits/stdc++.h>
using namespace std;

bool EsMultiplode3 (int n);

int main(){

int n;

cout<<"ingrese un numero entre 1 y 10"<<endl;
cin>> n;

cout<<EsMultiplode3(n)<<endl;

return 0;
}
bool EsMultiplode3(int n){

string msg;

for(int i = 0 ; n < 10 ; i++){

if(n %3 == 0){

msg = "es múltiplo";

}
else{

msg = "no es múltiplo";

}

}


return msg;
}

