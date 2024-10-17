#include<iostream>
using namespace std;

int juanfuncion(int a, int b, char eleccion);

int main(){
	int num1, num2;
	char eleccion;
	
	cout<<"ingrese el tipo de juan funcion que quiere utlizar"<<endl;
	cout<<"A>suma  B>resta  C>multiplicacion  D>division"<<endl;
	cin>>eleccion;
	cout<<"ingrese su primer juan: ";
	cin>>num1;
	cout<<"ingrese su segundo juan: ";
	cin>>num2;z
	juanfuncion(num1, num2, eleccion);
	

}

int juanfuncion(int a, int b, char eleccion){
	
	switch(eleccion){
		
	case 'a':
	cout<<"la suma de sus numero es: "<<a+b<<endl;
	break;
		
	case 'b':
	cout<<"la resta de sus numero es: "<<a-b<<endl;
	break;	
		
	case 'c':
	cout<<"la multiplicacion de sus numero es: "<<a*b<<endl;
	break;	
		
	case 'd':
	cout<<"la division de sus numero es: "<<a/b<<endl;
	break;	
		
		
	}
}
