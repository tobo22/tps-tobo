#include<iostream>
using namespace std;
int main(){
    
    //variables//
	int num, resultado;
	
	//texto para indicar el valor//
	cout<<"ingrese su juan: ";
	cin>>num;
	//separador//
	cout<<"-"<<endl;
	
	//formula para sacar el producto
	resultado=num%2;
	cout<<resultado<<endl;
	
    //procedimiento para valor par//
	if(resultado == 0){
		
		cout<<"el numero es par"<<endl;
		
	}
	
	//procedimiento para valor impar//
	else{
		
		cout<<"el numero es impar"<<endl;
		
	}
	
}
