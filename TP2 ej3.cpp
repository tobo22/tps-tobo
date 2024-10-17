#include<iostream>
using namespace std;
int main(){
	//variables//
	int num1, num2;
	float resultadoA, resultadoB;
	
//texto para ingresar los valores//
	cout<<"ingrese el primer juan"<<endl;
	cin>>num1;
	cout<<"ingrese el segundo juan"<<endl;
	cin>>num2;
	
	//procedimiento para valor 1 superior//
	if(num1>num2){
		
		resultadoA=num1+num2;
		cout<<"el primer juan es superior, el resultado de la suma es: "<<resultadoA<<endl;
		resultadoB=num1-num2;
		cout<<"la diferencia entre el primer juan y el segundo es de: "<<resultadoB<<endl;
		
	}
	
	//procedimiento para valor 2 superior//
	else{
		
		resultadoA=num1*num2;
		cout<<"el segundo juan es superior, el producto de los juans es: "<<resultadoA<<endl;
		resultadoB=num2/num1;
		cout<<"el resultado de la division es: "<<resultadoB<<endl;
	}
	
	
	
	
	
	return 0;
}
