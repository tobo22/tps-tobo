#include<iostream>
using namespace std;
int main(){
	//varaibles//
    int multi = 1;
	int num = 11;
	int resultado;
	
	//titulo//
	cout<<"VALORES JUAN ESPEJO"<<endl;
	
	//procedimiento para valores espejo//
	for(num = num; multi < 10; multi++){
		resultado=num*multi;
		cout<<resultado<<endl;
	}
}
