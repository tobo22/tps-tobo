#include<iostream>
using namespace std;
int main(){
	
	//variables//
	int num, resultado = 1;
	
	//texto para indicar valores//
	cout<<"ingrese su juan: ";
	cin>>num;
	
	//procedimiento para indicar la elevacion//
	for(int i=1; i <= 5; i++){
		
		resultado *= num;
	}
	
	//texto para indicar el resultado//
	cout<<"el juan elevado a la quinta potencia da: "<<resultado;
	}

