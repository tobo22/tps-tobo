#include<iostream>
using namespace std;
int main(){
	//variables//
	int num;
	
	//texto para ingresar el valor//
	cout<<"ingrese su juan"<<endl;
	cin>>num;
	
	//procedimiento para valor positivo//
	if(num>0){
		
		cout<<"tu juan es positivo"<<endl;
		
	}
	//procedimiento para valor neutro//
	else if(num == 0){
		
		cout<<"tu juan es nulo"<<endl;
		
	}
	//procedimiento para valor negativo//
	else{
	
	cout<<"tu juan es negativo"<<endl;
			
	}
	
	
	
	
	return 0;
}
