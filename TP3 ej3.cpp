#include<iostream>
using namespace std;
int main(){
	
	//variables//
	float num = 0;
    int divisor, resultado;
	int contador = 0;
	
	cout<<"Ingrese su juan: "<<endl;
	cin>>num;
	//procedimiento para llegar a 0//
	for(int i=0; num > 0.01; num /= 2){
		
	cout<<i+1<<"-"<<"el resultado de la division es :"<<num<<endl;
	i ++;
		
	}
	
	//texto de felicitacion//
	cout<<"el juan numero final es: "<<num<<endl;
}
