#include<iostream>
using namespace std;
int main(){
	//variables//
	int num = 0;
	int suma = 0;
	int resultado;
	
	//titulo//
	cout<<"JUANS IMPARES HASTA 300"<<endl;
	
	//procedimiento//
	for(num = 1; num <= 300; num=num+2){
		
		cout<<num<<endl;
		
		suma=suma+num;
	    }
	
	
	//suma//
	cout<<"la suma de los juans inpares es: "<<suma<<endl;
}
