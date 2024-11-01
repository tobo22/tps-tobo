#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int funcion(int min, int max);

int main(){
	
	int min = 0;
	int max = 0;
	
	cout<<"juan aleatorio"<<endl;
	cout<<endl;
	cout<<"idique entre que juanes se puede generar el numero alatorio"<<endl;
	cout<<"entre: ";cin>>min;
	cout<<"y hasta ";cin>>max;
	
	if(min > max){
		cout<<"no se haga el dolobu e ingrese los juanes bien"<<endl;
		cout<<endl;
		system("pause");
		system("cls");
		return main();
	}
	
	if(min == max){
		cout<<"no se haga el dolobu e ingrese los juanes bien"<<endl;
		cout<<endl;
		system("pause");
		system("cls");
		return main();
	}
	
	
	funcion(min, max);

	
	
	
}

int funcion(int min, int max){
	
	bool comprobador = false;
	srand(time(NULL));
	int random = rand() % max;
	
	while(comprobador != true){
	
	if(random < min){
	random = rand() % max;	
	}
	else{
	comprobador = true;
	}
}

	cout<<"aqui tiene su juan buen/a señor/señora: "<<random<<endl;
	
	
	
}
