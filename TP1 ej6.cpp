#include<iostream>
using namespace std;
int main(){
	int precio, cantidad, ticket;
	cout<<"crack cuanto te sale la comida?"<<endl;
	cin>>precio;
	cout<<"idolo cuantos paquetes comprase loco?"<<endl;
	cin>>cantidad;
	ticket=precio*cantidad;
	cout<<"lo que tenes que pagar es:"<<ticket<<" fuaaa"<<endl;
	
	if(ticket > 3000){
		cout<<"te re estafaron"<<endl;
	}
	else{
		cout<<"oferton"<<endl;
	}
	
	return 0;
}
