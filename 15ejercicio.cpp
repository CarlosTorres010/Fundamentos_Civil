#include<iostream>
using namespace std; 
int main(){
	int tipoTrabajador;
    float horasTrabajadas, tarifa, total, sueldoFinal;
    cout << "Ingrese las horas del trabajador: ";
    cin >> horasTrabajadas;
	cout << "Ingrese la tarifa del trabajador: ";
    cin >> tarifa;
	total = horasTrabajadas * tarifa;
	cout << "Ingrese el tipo de trabajador (1: obrero, 2: tecnico, 3: profesional): ";
    cin >> tipoTrabajador;
    if(tipoTrabajador==1){
    	sueldoFinal=total*1.05;
    	cout<<"El sueldo del obrero es "<<sueldoFinal<<endl;
	}else if(tipoTrabajador==2){ 
		sueldoFinal=total*1.10;
		cout<<"El sueldo del tecnico es "<<sueldoFinal<<endl; 
	}else if(tipoTrabajador==3){ 
		sueldoFinal=total*1.15; 
		cout<<"El sueldo del profesional es "<<sueldoFinal<<endl; 
	}else{ 
		cout<<"Error. Ingreso un numero diferente al inficado. "; 
	}
    /*switch (tipoTrabajador) {
        case 1: 
            sueldoFinal = total * 1.05;
            cout << "El sueldo del obrero es: " << sueldoFinal << endl;
            break;
        case 2: 
            sueldoFinal = total * 1.10;
            cout << "El sueldo del tecnico es: " << sueldoFinal << endl;
            break;
        case 3: 
            sueldoFinal = total * 1.15;
            cout << "El sueldo del profesional es: " << sueldoFinal << endl;
            break;
        default:
            cout << "Error: tipo de trabajador invalido." << endl;
    }*/
	return 0;
}
