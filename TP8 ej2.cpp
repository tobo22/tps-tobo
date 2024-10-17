#include<iostream>
#include<string>
using namespace std;

int contarPalabras(string palabras, int tamanio);

int main(){

string palabra;
int tamanio;
int contador = 1;
	
cout<<"ingrese la su juan oracion: ";
getline(cin, palabra);
tamanio = palabra.size(); 

contarPalabras(palabra, tamanio);


}

int contarPalabras(string palabras, int tamanio){
	
	int contador = 1;
	
	for(int i = 0; i < tamanio; i++){
	
	palabras.at(i);
	
	if(palabras.at(i) == ' '){
		
	 	contador += 1;
	}
}

cout<<"en su juan oracion hay "<<contador<<" palabras"<<endl;
	
	
	
}
