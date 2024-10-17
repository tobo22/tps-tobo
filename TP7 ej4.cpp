#include<iostream>
#include<string>
using namespace std;
int main(){
	
	string palabra;
	int tamanio;
	int contador = 0;
	char caracter;
	
	cout<<"ingrese su juan palabra: ";
	cin>>palabra;
	cout<<"ingrese el caracter que quiera encontrar: ";
	cin>>caracter;
	cout<<endl;
	tamanio = palabra.size();
	
	for(int i=0; i < tamanio; i++){
		
		palabra.at(i);
		
		if(palabra.at(i) == caracter){
			
			contador += 1;
			
		}
	}
	
	if(contador == 1){
	
	cout<<"en su juan palabra '"<<palabra<<"' el caracter '"<<caracter<<"' se encuentra "<<contador<<" ves"<<endl;
	
}

	else if(contador > 1){
	
	cout<<"en su juan palabra '"<<palabra<<"' el caracter '"<<caracter<<"' se encuentra "<<contador<<" veces"<<endl;
	
}

	else if(contador == 0){
		
	cout<<"en su juan palabra '"<<palabra<<"' el caracter '"<<caracter<<"' no se encuentra"<<endl;
	}
	
	
	
	
	
	
	
	
}
