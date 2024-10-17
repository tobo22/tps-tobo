#include<iostream>
#include<string>
using namespace std;
int main(){
	
	string palabra;
	int tamanio;

	
	cout<<"ingrese su juan palabra: ";
	cin>>palabra;
	tamanio = palabra.size();
	
	
	for(int i=tamanio-1; i >= 0; i--){
	
	
		cout<<palabra.at(i)<<endl;
		
}
		
		
	
	
	
	
}
