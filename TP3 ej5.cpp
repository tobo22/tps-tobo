#include<iostream>
using namespace std;
int main(){
	//variables//
	int num, cant, resultado;
	int contador = 0;
	
	//texto para ingresar la cantidad de valores que se quieren comprobar//
	cout<<"cuantos juans queres ver si son pares o impares?: ";
	cin>>cant;
	
	//procedimiento para ingresar tal cantidad de valores//
	while(contador < cant){
		
		cout<<"ingrese su juan: ";
		cin>>num;
		resultado=num%2;
		
		//procedimiento para ver valores par//
		if(resultado == 0){
		cout<<"el numero ("<<num<<") es par"<<endl;
		}
		//procedimiento para ver valores impar//
		else{
		cout<<"el numero ("<<num<<") es impar"<<endl;
		}
		contador ++;
	}
}
