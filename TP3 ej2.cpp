#include<iostream>
using namespace std;
int main(){
	//variables//
	int num = 0;
	int numM = 0;
	float numN = 99999999999999999999999999999;
	int suma = 0;
	float promedio;
	int contador = 0;

    //prodedimiento para ingresar los valores//
	while(contador < 10){
		
		cout<<"ingrese el juan: ";
    	cin>>num;
    
        suma += num;
		
		//procedimiento para encontrar el valor menor// 
		if(num < numN){
			
			numN=num;
			
	    }
	    
    	//procedimiento para encontrar el valor mayor// 
        if(num > numM){
        	
        	numM=num;
        
		}
    
    	contador ++;
    }
	
	//formulas para suma y promedio//
	cout<<"el juan mayor es: "<<numM<<endl;
	cout<<"el juan menor es: "<<numN<<endl;
	cout<<"el resultado de la juan suma es: "<<suma<<endl;
	promedio=suma/10;
	cout<<"el resultado del juan promedio es: "<<promedio<<endl;
}
