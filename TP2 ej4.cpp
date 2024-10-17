#include<iostream>
using namespace std;
int main(){
	//variables//
	int A, B, C;
	
	//texto para ingresar los valores//
	cout<<"ingrese el juan A"<<endl;
	cin>>A;
	cout<<"ingrese el juan B"<<endl;
	cin>>B;
	cout<<"ingrese el juan C"<<endl;
	cin>>C;
	
	
	//procedimiento para C mayor y A menor//	
	if(C>B && B>A){
		cout<<"el mayor es el C("<<C<<")"<<endl;
		cout<<"el menor es el A("<<A<<")"<<endl;
	}
	
	//procedimiento para A mayor y C menor//
	else if(A>B && B>C){
	    cout<<"el mayor es el A("<<A<<")"<<endl;
	     cout<<"el menor es el C("<<C<<")"<<endl;
	}

	//procedimiento para A mayor y B menor//	
	else if(C>A && A>B){
		cout<<"el mayor es el C("<<C<<")"<<endl;
		cout<<"el menor es el B("<<B<<")"<<endl;
	}

	//procedimiento para B mayor y C menor//	
	else if(B>A && A>C){
	cout<<"el mayor es el B("<<B<<")"<<endl;
	cout<<"el menor es el C("<<C<<")"<<endl;		
	}
	
	//procedimiento para b mayor y A menor//	
	else if(B>C && C>A){
	cout<<"el mayor es el B("<<B<<")"<<endl;
	cout<<"el menor es el A("<<A<<")"<<endl;		
	}
	

	
	
	//procedimiento para valores iguales//	
	if(A == B, A == C, B == C){
		
	cout<<"boludo pone numeros distintos"<<endl;
		
	}

	return 0;
}
