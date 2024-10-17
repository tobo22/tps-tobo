#include<iostream>
using namespace std;
int main(){
	//variables//
	int nota, juan, resultado;
	int aprobados = 0;
	int reprobados = 0;
	int contador = 0;
	
	//texto para idicar aprobados y desaprobados//
	cout<<"reprobados: "<<reprobados<<endl;
	cout<<"aprobados: "<<aprobados<<endl;
	
	//procedimiento para calcular la nota//
	for(int i = 0; i < 10; i++){
		
		cout<<"ingrese la nota: ";
		cin>>nota;
		
	//procedimiento para aprobado//
	if(nota <= 6){
		
		reprobados=reprobados+1;
		
	}
	
	//procedimiento para desaprobado//
	if(nota >= 7){
		
		aprobados=aprobados+1;
		
    }
	
	}


    
	//texto para idicar aprobados y desaprobados//
	cout<<"reprobados: "<<reprobados<<endl;
	cout<<"aprobados: "<<aprobados<<endl;
}

