#include<iostream>
using namespace std;

int funcion(int base, int expo);

int main(){
	
	int base, expo;
	
	cout<<"ingrese su juan base: ";cin>>base;
	cout<<"ingrese el juan exponente: ";cin>>expo;
	
	if(base > 0 && expo > 0){
	
	cout<<"perfecto, ahora le elevamos su "<<base<<"^"<<expo<<""<<endl;
	funcion(base, expo);
		
	}
	
	else{
	cout<<"bro, tienen q ser mayores a 0"<<endl;
	system("pause");
	system("cls");
	return main();
	}

	
}

int funcion(int base, int expo){
	
	int resultado = base;
	
	cout<<"-----------------------------"<<endl;
	for(int i=1; i < expo; i++){
	
	cout<<resultado<<"x"<<base<<"=";
	resultado=resultado*base;
	cout<<resultado<<"("<<i<<")"<<endl;
	
	}
	cout<<"-----------------------------"<<endl;
	
	cout<<base<<"^"<<expo<<" es igual a "<<resultado<<endl;
	
	
	
	
	
	
}
