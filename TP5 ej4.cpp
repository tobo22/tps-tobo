#include<iostream>
using namespace std;
int main(){

	//variables//
	int vendedores;
	int resultado = 0;
	
	
	//titulo//
	cout<<"-----------------------"<<endl;
	cout<<"LISTA DE TOBOVENDEDORES"<<endl;
	cout<<"-----------------------"<<endl;
	
	cout<<""<<endl;
	
	//texto que indica que ingreses la cantidad de vendedores//
	cout<<"ingrese la cantidad de vendedores: ";
	cin>>vendedores;
	cout<<""<<endl;
	
	//variables de vendedores//
	int ventas[vendedores];
	string nombres[vendedores];

   //bucle donde indicas los nombres y ventas de los vendedores//
	for(int i=0; i < vendedores; i++){
				
		cout<<"ingrese su vendedor N-"<<i+1<<" : ";
		cin>>nombres[i];
		cout<<"cuantas ventas realizo?: ";
		cin>>ventas[i];
		
	}	
	
	cout<<"--------------------------------------------"<<endl;
	cout<<"lista de vendedores"<<endl;
	
	//bucle que genera la lista de vendedores y sus ventas//
	for(int i=0; i < vendedores; i++){
	
    
	cout<<i+1<<"-"<<nombres[i]<<"("<<ventas[i]<<")"<<endl;
	resultado += ventas[i];
	
}
   
   //indicador de ventas totales//
   cout<<"ventas totales: "<<resultado<<endl;
   cout<<"----------------------------------------------"<<endl;
	
}
