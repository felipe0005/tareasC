#include<bits/stdc++.h>
using namespace std;

class Cnumber{
	
private:
	
	int a;
	int b;
	int c;
	
public:
	
	Cnumber(int, int, int);
	int MaxNumber ();
	int MinNumber ();
	float PromNumber ();
	int ParNumber ();
	int InparNumber();
};

Cnumber::Cnumber(int A, int B, int C){
	
	A = a;
	B = b;
	C = c;
	
}

int Cnumber::MaxNumber(){
	
	if(A > B && A > C){
		
		return A;
		
	}
	if(B > A && B > C){
		
		return B;
		
	}
	if(C > A && C > B){
		
		return C;
	}
}

int Cnumber::MinNumber(){
	
	if(A < B && A < C){
		
		return A;
		
	}
	if(B < A && B < C){
		
		return B;
		
	}
	if(C < A && C < B){
		
		return C;
	}
	
}

float Cnumber::PromNumber(){
	
	return (A + B + C)/3;
	
}

int Cnumber::ParNumber(){
	
	if(A%2 == 0){
		
		return A;
		
	}
	if(B%2 == 0){
		
		return B;
		
	}
	if(C%2 == 0){
		
		return C;
		
	}		
}

int Cnumber::InparNumber(){
	
	if(A%2 =! 0){
		
		return A;
		
	}
	if(B%2 =! 0){
		
		return B;
		
	}
	if(C%2 =! 0){
		
		return C;
		
	}	
}

int main(){
	
	Cnumber lista1 = Cnumber(4,8,10);
		
	lista1.MaxNumber();
	lista1.MinNumber();
	lista1.ParNumber();
	lista1.PromNumber();
	lista1.InparNumber();	
	
	return 0;
}

