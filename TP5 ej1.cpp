#include<iostream>
using namespace std;
int main(){
	
	//variables//
	int juan = 1;
	int num;
	
	//texto para ingresar el valor//
	cout<<"Ingrese su juan: ";
	cin>>num;
	
	//procedimiento para descubrir el factorial//
	for(int i=1; i <= num; i++){
		
		juan=i*juan;
		
	}	
	
	//texto para indicar el factorial//
	cout<<"tu juan factorial es: "<<juan<<endl;
}
