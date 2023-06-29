//actividad numero 7
#include <bits/stdc++.h>
using namespace std;

int ContarLetra(string frase);


int main(){

string frase;

cout<<"ingrese una frase"<<endl;
cin>> frase;


cout<<ContarLetra(frase)<<endl;



return 0;
}
int ContarLetra(string frase){


int contador = 0;

	
for(int i = 0 ; i < frase.size() ; i++){

	if(frase == 'a' || frase == 'e' || frase == 'i' || frase == 'o' || frase == 'u'){


	contador++;


	}


}
return contador;
}


