#include <bits/stdc++.h>
using namespace std;

vector <int> GenerarVector(vector <int> A , int n);
vector <int> VectorParInpar(vector <int> A);
void MostrarVector(vector <int> A);

int main(){
	
int num;
vector <int> VecA;
vector <int> VecB;


cout<<"ingrese los valores: "<<endl;
cin>> num;
	
VecA = GenerarVector(VecA , num);
VecB = VectorParInpar(VecB);

cout<<"el vector es: "<<endl;	
MostrarVector(VecA);

cout<< "vector B y C: "<<endl;
MostrarVector(VecB);
	
return 0;
}
vector <int> GenerarVector(vector <int> A , int n){
	
int e ;

srand (time(NULL));

for(int i = 0 ; i < A ; i++){

	
	e = rand()%30;
	A.push_back(e);
		
	
}
	
return A;	
}
vector <int> VectorParInpar(vector <int> A){
	
	vector <int> B;
	int par = 0;
	int inpar = 0;
	
for(int i = 0 ; i < A.size() ; i++){
	
	if(A[i] %2 == 0){
		
		par += A[i];
		
	}
	else{
		
		inpar += A[i];
		
	}
	
}
	
 B.push_back(par);
 B.push_back(inpar);
	
return B;
}
void MostrarVector(vector <int> A){
	
	
for(int i = 0 ; i < A.size() ; i++){
	
	cout<<A[i]<<"/"<<endl;
	
}
	cout<<endl;
}
