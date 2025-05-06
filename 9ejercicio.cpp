/*Ingresar si es multiplo de 5.*/
#include<iostream>
using namespace std; 
int main(){
		int a;
	float c; 
	cout<<"Ingrese el numero: ";
	cin>>a;
	c=a%5;
	if(c==1){
		cout<<"El numero no es multiplo de 5.";
	}else{ 
		cout<<"El numero es multiplo de 5.";
	}

	return 0;
}
