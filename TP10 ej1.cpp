#include<iostream>
using namespace std;

int funcion();

int main(){

funcion();

}

int funcion(){
	
	int num1, num2, num3;
	int numMax, numMIN;
	
	cout<<"ingrese el primer juan: ";
	cin>>num1;
	cout<<"ingrese el segundo juan: ";
	cin>>num2;
	cout<<"ingrese el tercer juan: ";
	cin>>num3;
	
	if(num1 > num2 && num1 > num3){
		
		numMax=num1;
		cout<<"el juan mayor es el primero ingresado ("<<num1<<") :v"<<endl;
	}
	
	else if(num2 > num1 && num2 > num3){
		
		numMax=num2;
		cout<<"el juan mayor es el segundo ingresado ("<<num2<<") :v"<<endl;
		
	}
	
	else if(num3 > num1 && num3 > num2){
		
		numMax=num3;
		cout<<"el juan mayor es el tercero ingresado ("<<num3<<") :v"<<endl;
		
	}
	else{
		cout<<"los juanes son iguales"<<endl;
	}
	
	
	
}
