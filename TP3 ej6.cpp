#include<iostream>
using namespace std;
int main(){
	//variables//
	int num = 0;
	int suma = 0;
	
	//titulo//
	cout<<"JUANS PARES"<<endl;
	
	//procedimiento para pares//
	for(num = num; num < 101; num=num+2){
		
		cout<<num<<endl;
		suma=suma+num;
		
	}
	
	//suma//
	cout<<"la suma de los juans pares es: "<<suma<<endl;
}
