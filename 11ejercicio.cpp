/*Ingresar una nota del 0 al 20 y mostrar su calificación:
18 a 20: Excelente
14 a 17: Bueno
11 a 13: Regular
0 a 10: Deficiente*/
#include<iostream>
using namespace std; 
int main(){
	int N; 
	cout<<"Ingrese la siguiene nota desde 0 al 20(recomendado): ";
	cin>>N; 
	if(N<21 && N>17){
		cout<<"Excelente.";
	}else if(N<18 && N>13){
		cout<<"Bueno."<<endl;
	}else if(N<14 && N>10){ 
		cout<<"Regular."<<endl;
	}else if(N>=0 && N<11){
		cout<<"Deficiente."<<endl;
	}else {
        cout << "Error" << endl;
    }
	return 0;
}
