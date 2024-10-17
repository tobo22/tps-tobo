#include<iostream>
using namespace std;
int main(){
	
	//variables//
	int dinero = 69000;
	char eleccion;
	int depositar, retirar;
	
	//titulo//
	cout<<"-----------"<<endl;
	cout<<"TOBO CAJERO"<<endl;
	cout<<"-----------"<<endl;
	
	//procedimiento para no cerrar hasta que se seleccione salir//
	while(eleccion != 'd'){
	
	//menu//
	cout<<""<<endl;
	cout<<"opciones: "<<endl;
	cout<<"A) consultar saldo"<<endl;
	cout<<"B) depositar dinero"<<endl;
	cout<<"C) retirar dinero"<<endl;
	cout<<"D) salir"<<endl;
	cout<<"que hara?: ";
	cin>>eleccion;
	
	//elecciones//
	switch(eleccion){
		
		//informe de dinero//
		case 'a':
		cout<<"-------------------------------------"<<endl;
		cout<<"dinero actual: "<<dinero<<" tobopesos"<<endl;
		cout<<"-------------------------------------"<<endl;
		break;
		
		//informe de deposito//
		case 'b':
		cout<<"-----------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"cuanto dinero depositara?: "<<endl;
		cin>>depositar;
	    cout<<"gracias por depositar "<<depositar<<" tobopesos en el banco, tranquilo que no me voy a ir en helicoptero :)"<<endl;
	    dinero=dinero+depositar;
		cout<<"-----------------------------------------------------------------------------------------------------------"<<endl;
		break;
		
		case 'c':
		cout<<"---------------------------------------------------------------"<<endl;
		cout<<"cuanto dinero quiere retirar?: "<<endl;
		cin>>retirar;
		//procedimiento por si se quiere retirar mas de lo que hay//
		if(retirar > dinero){
			cout<<"lamentablemente la inflacion no le permite retirar tanto :("<<endl;
			return 0;
		}
		//procedimiento por si el retiro es posible//
		else{
			cout<<"sea feliz con sus "<<retirar<<" tobopesos fisicos :)"<<endl;
			dinero=dinero-retirar;
		}
		cout<<"---------------------------------------------------------------"<<endl;
		break;
		
		//mensaje de despedida//
		case 'd':
		cout<<"------------"<<endl;
		cout<<"nos vemos :)"<<endl;
		cout<<"------------"<<endl;
		break;
		
	}
}
}
