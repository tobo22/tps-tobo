#include<iostream>
#include<string>
int funcion();
using namespace std;
int main(){
	
	funcion();
	
}

int funcion(){
	

	
	string palabra1, palabra2;
	int contador = 0;
	int anticon = 0;
	int a = 0;
	int b = 0;
	
	cout<<"ingrese su primer juan palabra: ";
	cin>>palabra1;
	cout<<"ingrese su segunda juan palabra: ";
	cin>>palabra2;
	
	int juan = palabra1.size();
	int ramon = palabra2.size();
	
	if(juan == ramon){
		
	while(true){
		
		if(palabra1.at(a) == palabra2.at(b)){
		contador += 1;
		anticon = 0;
		a += 1;
		b = 0;
		  
		}
		
		else{
		b += 1;
		anticon += 1;
				
		}
		
		if(anticon == ramon){
			cout<<"las palabras no son agrarias"<<endl;
			return 0;
		}
		
		
		if(contador == juan){
		cout<<"las juans palabras son agrarias"<<endl;
		return 0;
		}
		else{
	
		}
		
		
	}
	
}
	else{
	cout<<"tienen que ser palabras de la misma longitud"<<endl;
	system("pause");
	system("cls");
	return main();
	}
	
}
