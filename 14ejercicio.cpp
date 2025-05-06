/*Ingresar tres lados y deterinar si el triangulo es: 
Equilatero
Isosceles 
Escaleno*/
#include<iostream>
using namespace std; 
int main(){
	float lado1, lado2, lado3;

    cout << "Ingrese el primer lado: ";
    cin >> lado1;
    cout << "Ingrese el segundo lado: ";
    cin >> lado2;
    cout << "Ingrese el tercer lado: ";
    cin >> lado3;

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        if (lado1 == lado2 && lado1 == lado3) {
            cout << "Es un triangulo equilátero." << endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "Es un triangulo isósceles." << endl;
        } else {
            cout << "Es un triangulo escaleno." << endl;
        }
    } else {
        cout << "Los lados no forman un triangulo." << endl;
    }

	return 0;
}
