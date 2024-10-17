#include<iostream>
using namespace std;
int main(){
	//variable//
	int num;
	
	//repetir bucle hasta que se eliga un valor valido//
    while(num <= 0){
	
	//texto que indica que ingreses un valor//
	cout<<"ingrese su  juan: ";
	cin>>num;
	
	cout<<""<<endl;
	
	//procedimiento para ver si el numero es mayor o igual a 0//
	if(num <= 0){
		
		cout<<"capo, tiene que ser mayor a cero"<<endl;
		cout<<""<<endl;
	}
	
}
    //tabla//
	cout<<"";
	cout<<"x |"<<" ";
	
	for(int a = 1; a <= num; a++){
		if(a < 10){
		cout<<a<<"   ";
	    }
	    
	    else if(a < 100){
		cout<<a<<"  ";
	    }
	}
	
	cout<<""<<endl;
	cout<<"";
	cout<<"--|";
	
	for(int b = 1; b < num; b++){
		cout<<"-----";
	}
	
	cout<<""<<endl;
	
	for(int c = 1; c <= num; c++){
		
		if(c <= 9){
			cout<<c<<" |";
		}
		else if(c >= 10){
			cout<<c<<"|";
		}
		
		for(int d = 1; d <= num; d++){
			
			int resultado=c*d;
			cout<<" "<<resultado;
			
			if(resultado < 10){
				cout<<"  ";
			}
			else if(resultado < 100){
				cout<<" ";
			}
			else if(resultado < 1000){
				cout<<"";
			}
			
		}
		
		cout<<""<<endl;
	}
 
}
