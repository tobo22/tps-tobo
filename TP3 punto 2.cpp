#include <iostream>
using namespace std;

int main() {
	
    int tp;
    char salir;
    
    while(salir != 'a'){
	
    cout << "para mi profe favorita :)" << endl;
    cout << "------------------------------------" << endl;
    cout << "seleccione el trabajo que quiera ver" << endl;
    cin >> tp;
    cout << "------------------------------------" << endl;

    switch (tp) {
        case 1: {
            cout << "----------------" << endl;
            cout << "TP3-EJERCICIO 1:" << endl;
            cout << "----------------" << endl;
            // variables //
            int nota, aprobados = 0, reprobados = 0;

            // texto para indicar aprobados y desaprobados //
            for (int i = 0; i < 10; i++) {
                cout << "ingrese la nota: ";
                cin >> nota;
                
                // procedimiento para aprobado //
                if (nota >= 7) {
                    aprobados++;
                }
                // procedimiento para desaprobado //
                else {
                    reprobados++;
                }
            }

            // texto para indicar aprobados y desaprobados //
            cout << "reprobados: " << reprobados << endl;
            cout << "aprobados: " << aprobados << endl;    
            break;
        }

        case 2: {
            cout << "----------------" << endl;
            cout << "TP3-EJERCICIO 2:" << endl;
            cout << "----------------" << endl;
            // variables //
            int num, numM = 0;
            float numN = 99999999999999999999999999999.0, suma = 0;

            // procedimiento para ingresar los valores //
            for (int i = 0; i < 10; i++) {
                cout << "ingrese el juan: ";
                cin >> num;
                suma += num;

                // procedimiento para encontrar el valor menor //
                if (num < numN) {
                    numN = num;
                }
                // procedimiento para encontrar el valor mayor //
                if (num > numM) {
                    numM = num;
                }
            }

            // formulas para suma y promedio //
            cout << "el juan mayor es: " << numM << endl;
            cout << "el juan menor es: " << numN << endl;
            cout << "el resultado de la juan suma es: " << suma << endl;
            cout << "el resultado del juan promedio es: " << suma / 10 << endl;
            break;
        }

        case 3: {
            cout << "----------------" << endl;
            cout << "TP3-EJERCICIO 3:" << endl;
            cout << "----------------" << endl;
            // variables //
            float num;
            int i = 0;

            cout << "Ingrese su juan: " << endl;
            cin >> num;

            // procedimiento para llegar a 0 //
            while (num > 0.01) {
                cout << i + 1 << "- el resultado de la division es: " << num << endl;
                num /= 2;
                i++;
            }

            // texto de felicitacion //
            cout << "el juan numero final es: " << num << endl;
            break;
        }

        case 4: {
            cout << "----------------" << endl;
            cout << "TP3-EJERCICIO 4:" << endl;
            cout << "----------------" << endl;
            // variables //
            int multi = 1, num = 11, resultado;

            // titulo //
            cout << "VALORES JUAN ESPEJO" << endl;

            // procedimiento para valores espejo //
            while (multi <= 10) {
                resultado = num * multi;
                cout << resultado << endl;
                multi++;
            }
            break;
        }

        case 5: {
            cout << "----------------" << endl;
            cout << "TP3-EJERCICIO 5:" << endl;
            cout << "----------------" << endl;
            // variables //
            int num, cant, contador = 0;

            // texto para ingresar la cantidad de valores que se quieren comprobar //
            cout << "cuantos juans queres ver si son pares o impares?: ";
            cin >> cant;

            // procedimiento para ingresar tal cantidad de valores //
            while (contador < cant) {
                cout << "ingrese su juan: ";
                cin >> num;
                // procedimiento para ver valores par //
                if (num % 2 == 0) {
                    cout << "el numero (" << num << ") es par" << endl;
                }
                // procedimiento para ver valores impar //
                else {
                    cout << "el numero (" << num << ") es impar" << endl;
                }
                contador++;
            }
            break;
        }

        case 6: {
            cout << "----------------" << endl;
            cout << "TP3-EJERCICIO 6:" << endl;
            cout << "----------------" << endl;
            // variables //
            int suma = 0;

            // titulo //
            cout << "JUANS PARES" << endl;

            // procedimiento para pares //
            for (int num = 0; num <= 100; num += 2) {
                cout << num << endl;
                suma += num;
            }

            // suma //
            cout << "la suma de los juans pares es: " << suma << endl;
            break;
        }

        case 7: {
            cout << "----------------" << endl;
            cout << "TP3-EJERCICIO 7:" << endl;
            cout << "----------------" << endl;
            // variables //
            int suma = 0;

            // titulo //
            cout << "JUANS IMPARES HASTA 300" << endl;

            // procedimiento //
            for (int num = 1; num <= 300; num += 2) {
                cout << num << endl;
                suma += num;
            }

            // suma //
            cout << "la suma de los juans inpares es: " << suma << endl;
            break;
        }

        case 8: {
            cout << "----------------" << endl;
            cout << "TP3-EJERCICIO 8:" << endl;
            cout << "----------------" << endl;
            // variables //
            int num, resultado = 1;

            // texto para indicar valores //
            cout << "ingrese su juan: ";
            cin >> num;

            // procedimiento para indicar la elevacion //
            for (int i = 1; i <= 5; i++) {
                resultado *= num;
            }

            // texto para indicar el resultado //
            cout << "el juan elevado a la quinta potencia da: " << resultado << endl;
            break;
        }
    }
    cout<<""<<endl;
    cout<<"ya terminaste de repasar profe :v ?"<<endl;
    cout<<"A)si  B)no"<<endl;
    cin>>salir;
}
    return 0;
}
 
