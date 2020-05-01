#include<iostream>
#include<string>
#include<string>
#include<sstream>
#include<fstream>
using namespace std;

struct Empleado{
	string nombreEmpleado;
	float salario;
	float horas;
	float aporteIGSS;
};

int main(){
function calculoIGSS(float salario){
		float pagoIgss = salario * 0.0483;
		return pagoIgss;
	}
	
	function leerArchivo(){
		miArchivo.open("Planilla.txt", ios::in);
		string line;
		while(getline(miArchivo,line)){
			cout << line << endline;
		}
	}
	
	
	function grabarArchivo(string nombre, float salario, float horas,float pagoIGSS){
		float horasExtras;
		float valorHorasExtras;
		float SalarioOrdinario;
		
		SalarioOrdinario = (salario/30)/8);
		if (horas > 40){
			horasExtras = horas - 40;
			valorHorasExtras = ((SalarioOrdinario*1.5)*horasExtras;
			
		}
		ofstream miArchivo("Planilla.txt", std::ios_base::app);
		miArchivo << "---------------"<<endl;
		miArchivo << "Nombre: " << nombre;
		miArchivo << "Salario: " << salario;
		miArchivo << "Horas: " << horas;
		miArchivo << "IGSS: " << pagoIGSS;
		miArchivo << "Salario Ordinario: " << SalarioOrdinario;
		miArchivo << "Horas Extras: " << valorHorasExtras;
		miArchivo.close();
		
	}                        	
	
	int opcion;
	
	cout << "Seleccione una opción:" << endl;
	cout << "1. Grabar datos en archivos" << endl;
	cout << "2. Leer archivo" << endl;
	cout << "3. Mostrar pago de IGSS" << endl;
	cin >> opcion;
	
	switch(opcion){
		case 1: 
			cout << "Ingrese el nombre del empleado" << endl;
			getline(cin, Empleado.nombreEmpleado);
			cout << "Ingrese el salario del empleado" << endl;
			getline(cin, Empleado.salario);
			cout << "Ingrese horas trabajadas" << endl;
			getline(cin, Empleado.horas);
			float IGSS = calculoIGSS(Empleado.salario);
		 	grabarArchivo(Empleado.nombreEmpleado, Empleado.salario, Empleado.horas, IGSS);
		break;
		case 2:
			cout << "Leyendo archivo" << endl;
			leerArchivo();
		break;
		case 3:
			cout <<"Ingrese Salario del Empleado para calcular el IGSS" << endl;
			float salario;
			getline(cin; salario);
			float IGSS = calculoIGSS(salario);
			cout << "El Pago de IGSS es: Q." << IGSS << endl;
		break;
		default:
			cout << "Por favor ingrese una opción válida";
	}
}


?
#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
using namespace std;


int main(){
	float tienda[10];
	float venta;
	float sumaVentas;
	float mediaVenta;
	
	for (int i = 1; i <= 10; i ++){
		cout << "Ingrese la venta del almacén No. " << i << endl;
		cin >> venta;
		tienda[i] = venta;
		sumaVentas = tienda[i] + sumaVentas;
	}
	
	mediaVenta = sumaVentas/10;
	
	for (int j = 1; j <= 10; j ++){
		if (tienda[j] > mediaVenta) {
			cout << "Almacén No. " << j << " con ventas mayor a la media" << endl;
		}
	}
	
}

