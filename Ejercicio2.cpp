#include<iostream>
#include<vector>
#include<String>

using namespace std;



int main(){
cout <<  "------------------Calculo de sueldo de empleados----------------------"<<endl<<endl<<endl;
vector <long> Id_empleado ={5658845,4520125,7895122,8777541,8451277,1302850,7580489};
vector <int> Horas_trabajadas;
vector <double> Tarifa_por_Horas,Salario_Bruto;
string Hecho="Hecho por: Scarlet Falette, Matricula: 100336643.";

for (int a=0; a<7;a++){
        int horas=0;
double tarifa=0, Sueldo=0;


    cout <<endl << "El ID del empleado es: " << Id_empleado[a]<<endl;
    cout <<"Ingrese las horas trabajadas: ";cin >>horas;

   if (horas<0){
    while (horas<0){
        horas=0;
        cout << "\nPor favor ingrese horas validas, no negativos: "; cin >> horas;
    }
    }
 cout <<"Ingrese la tarifa por Horas: ";cin.ignore(); cin >> tarifa;
    if (tarifa<50.00){
while(tarifa<50.00){
        tarifa=0;
    cout <<"Por favor ingrese una tarifa mayor a 50.00$: "; cin >> tarifa;
}
}
Sueldo=horas*tarifa;
Horas_trabajadas.push_back(horas);
Tarifa_por_Horas.push_back(tarifa);
Salario_Bruto.push_back(Sueldo);
}
cout << "Listado de Empleados con sus Salarios"<<endl<<endl;
for (int a=0; a<7;a++){

    cout << "ID DEL EMPLEADO: "<<Id_empleado[a]<<endl;
    cout << "Salario Bruto del empleado: "<<Salario_Bruto[a]<<endl<<endl;

}

cout<<endl<<endl<<endl<< Hecho;
return 0;
}
