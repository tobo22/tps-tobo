#include<iostream>
using namespace std;
int main(){
	//variables//
	float a, b, c, nota;
	
	//texto para indicar las notas//
	cout<<"ingrese la nota del 1er cuatrmiestre"<<endl;
	cin>>a;
	cout<<"ingrese la nota del 2do cuatrmiestre"<<endl;
	cin>>b;
	cout<<"ingrese la nota del 3er cuatrmiestre"<<endl;
	cin>>c;
	
	//formula para sacar el promedio//
	nota=(a+b+c)/3;
	
	//procedimiento para TEA//
	if(nota >= 7){
		
		cout<<"aprobaste gg, TEA"<<endl;
		
	}
	
	//procedimiento para TEP//
	else if(nota >= 4){
		
		cout<<"casi, TEP"<<endl;
		
	}
	
	//procedimiento para TED//
	if(nota < 4){
		
		cout<<"malisimo, TED"<<endl;
		
	}
}
