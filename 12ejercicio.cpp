/*Mostrar un menú con opciones de suma, resta, multiplicacion y division.
Pedir dos numeros y realizar la operacion seleccionada.*/
#include<iostream>
using namespace std; 
int main(){
	int opcion;
	float num1, num2, r; 
	cout << "Seleccione una opcion (1:suma, 2:resta, 3:multiplicacion y 4: division): ";
    cin >> opcion;
	
	cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    switch (opcion) {
        case 1:
            r = num1 + num2;
            cout << "Resultado: " << r << endl;
            break;
        case 2:
            r = num1 - num2;
            cout << "Resultado: " << r << endl;
            break;
        case 3:
            r = num1 * num2;
            cout << "Resultado: " << r << endl;
            break;
        case 4:
            if (num2 != 0) {
                r = num1 / num2;
                cout << "Resultado: " << r << endl;
            } else {
                cout << "Error: No se puede dividir entre cero." << endl;
            }
            break;
        default:
            cout << "Opción invalida." << endl;
    }

	return 0;
}
