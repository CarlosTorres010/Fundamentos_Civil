#include<iostream>
using namespace std; 
int main(){
	int dia; 
	cout<<"Ingrese un numero del 1 hasta el 7: ";
	cin>>dia; 
	if (dia==1){
		cout<<"El dia es Lunes. ";
	}else if(dia==2){ 
		cout<<"El dia es Martes. ";		
	}else if(dia==3){
		cout<<"El dia es Miercoles.";
	}else if(dia==4){
		cout<<"El dia es Jueves.";
	}else if(dia==5){
		cout<<"El dia es Viernes."; 
	}else if(dia==6){
		cout<<"El dia es Sabado."; 
	}else if(dia==7){ 
		cout<<"El dia es Domingo.";
	}else{ 
		cout<<"Error.Ingreso un numero que no es del 1 al 7.";
	}
	/*aplicando el switch
	int dia; 
	cout<<"Ingrese el numero del 1 hasta el 7: ";
	cin>>dia; 
	switch(dia){
		case 1:
			cout<<"El dia es Lunes";
			break;
		case 2:
			cout<<"El dia es Martes";
			break;
		case 3: 
			cout<<"El dia es Miercoles";
			break;
		case 4: 
			cout<<"El dia es Jueves";
			break;
		case 5:
			cout<<"El dia es Viernes";
			break; 
		case 6: 
			cout<<"El dia es Sabado";
			break;
		case 7:
			cout<<"El dia es Domingo";
			break; 
		default:
			cout<<"Error.Opcion invalida"<<endl;
	}*/
	return 0;
}
