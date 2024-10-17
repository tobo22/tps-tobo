#include<iostream>
using namespace std;

//funcion de juan datos//
int datos(int &nota1, int &nota2, int &nota3, string &nombre, string &apellido, string &curso, string &materia);
int datos(int &nota1, int &nota2, int &nota3, string &nombre, string &apellido, string &curso, string &materia){


	
cout<<"ingrese tu juan nombre: ";
cin>>nombre;
cout<<"ingrese tu juan apellido: ";
cin>>apellido;
cout<<"ingrese su juan curso: ";
cin>>curso;
cout<<"Ingrese su juan materia: ";
cin>>materia;
cout<<"ingrese sus 3 notas correspondientes a su trimestre"<<endl;
cin>>nota1>>nota2>>nota3;	

}

//funcion de hector promedio//

int contarPromedio(bool &aprobado, int nota1, int nota2, int nota3, double &promedio);
int contarPromedio(bool &aprobado, int nota1, int nota2, int nota3, double &promedio){
	
	promedio=(nota1+nota2+nota3) / 3;
	
	if(promedio >= 7){
		aprobado = true;
	}
	else{
		aprobado = false;
	}
}

//funcion de ramon condicion//
int condicion(bool aprobado, string nombre, string apellido, string curso, string materia, double promedio);
int condicion(bool aprobado, string nombre, string apellido, string curso, string materia, double promedio){

string desaprobado;

if(aprobado == true){
	
	desaprobado = "aprobado";
}

else{
	
	desaprobado = "desaprobado";
}
	
cout<<nombre<<" "<<apellido<<" - "<<materia<<" - "<<curso<<endl;
cout<<"nota final: "<<promedio<<" ("<<desaprobado<<")"<<endl;



}


//bendito main//
int main(){

string nombre, apellido, curso, materia;
int nota1, nota2, nota3;
double promedio;
bool aprobado;

datos(nota1, nota2, nota3, nombre, apellido, curso, materia);
cout<<endl;
contarPromedio(aprobado, nota1, nota2, nota3, promedio);
condicion(aprobado, nombre, apellido, curso, materia, promedio);

}





