/*Ingresar el precio de un producto y un porcentaje de descuento. Calcular y
mostrar el precio final*/
#include<iostream>
using namespace std; 
int main(){
	int producto,descuento, Pfinal; 
	cout<<"Ingresar el precio del producto: ";
	cin>>producto;
	cout<< "Ingresar el descuento del producto: ";
	cin>>descuento; 
	Pfinal=producto*(100-descuento)/100;
	cout<<"El precio final con el descuento es "<<Pfinal<<endl; 
	return 0;
}
