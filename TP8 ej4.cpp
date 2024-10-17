#include<iostream>
#include<string>
using namespace std;

int funcion(string cadena, string palabra);

int main(){
	
	string cadena;
	string palabra;
	
	cout<<"ingrese su juan oracion: ";
	getline(cin, cadena);
	cout<<"ingrese su juan palabra: ";
	cin>>palabra;
	
	funcion(cadena, palabra);
	
	
}

int funcion(string cadena, string palabra){
	
	getline(cin, cadena);
	cout<<cadena<<endl;
	int puntos;
	int contador;
	int a=0;
	int b=0;
	int tamanio = palabra.size();
	int tamanioC = cadena.size();
	
	while(tamanio != puntos){
		
		if(cadena.at(a) == palabra.at(b)){
			
			puntos++;
			a++;
			b++;
	
			
		}
		
		else{
			
			a++;
			b++;
			
	    }
	    
	    if(b == tamanio){
		
		if(puntos == tamanio){
		
		cout<<"la oracion contiene la palabra '"<<palabra<<"'"<<endl;
		return 0;
		
		}
		
		else{
		b=0;
		puntos=0;
		}
		
	}
		
	if(cadena.at(a) == ' '){
		
		if(puntos == tamanio){
		
		cout<<"la oracion contiene la palabra '"<<palabra<<"'"<<endl;
		return 0;
		
		}
		
		else{
		
		b=0;
		a++;
		puntos=0;

		}
		
	}
	
	else if(a == tamanioC-1){
		
	if(puntos == tamanio){
		
		cout<<"la oracion contiene la palabra '"<<palabra<<"'"<<endl;
		return 0;
		
		}
		
		else{
		cout<<"La oracion no contiene la palabra"<<endl;
		return 0;
		}	
		
	}
		
	
}



}

