#include <bits/stdc++.h>
using namespace std;

vector <int> GenerarVector(vector <int> A , int n);
vector <int> VectorPar(vector <int> A , vector <int> B);
void MostrarVector(vector <int> A);

vector <int> GenerarVector(vector <int> A , int n){//genero el vector

int c;	

//creo un vector con numero aleatorios	
srand (time(NULL));
for(int i = 0 ; i < n ; i++){
	
	c = rand()%100;
	A.push_back(c);
	
	
}	
	
return A;
}

vector <int> VectorPar(vector <int> A , vector <int> B){
	
for(int i = 0 ; i < A.size() ; i++){
	
	if(A[i] %2 == 0){
		
		B.push_back(A[i]);// creo el vector B con los numero pares del vector A
		
	}	
}
	
return B;	
}

void MostrarVector(vector <int> A){
	
for( int i = 0 ; i < A.size() ; i++){
	
	cout<<A[i]<<" /" ;
	
}
	
cout<<endl;
}

int main(){
	
int n;
vector <int> A;	
vector <int> B; 
	
A = GenerarVector(A , 10);
B = VectorPar(A , B);	

cout<<"numero de vector A"<<endl;
MostrarVector(A);
cout<<endl;

cout<<"Numeros Pares vector B"<<endl;
MostrarVector(B);
	
return 0;
}
