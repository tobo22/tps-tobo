#include<iostream>
using namespace std;
int main(){
	//variables//
	int num1, num2;
	
	//texto para ingresar los valores//
	cout<<"ingrese el primer juan"<<endl;
	cin>>num1;
	cout<<"ingrese el segundo juan"<<endl;
	cin>>num2;
	
	//procedimiento para valor 1 sueprior//
	if(num1>num2){
		
		cout<<"el primer juan ("<<num1<<") es superior"<<endl;
		
	}
	
	//procedimiento para valores iguales//
	else if(num1 == num2){
		
		cout<<"crack tienen q ser distintos, y segun yo "<<num1<< " y " <<num2<<" son iguales"<<endl;
		
	}
	
	//procedimiento para valor 2 superior//
	else{
		
		cout<<"el segundo juan ("<<num2<<") es superior"<<endl;
		
	}
	return 0;
}
