#include <iostream>

using namespace std;

int main(){
double Arreglo[3][7], Promedio, CantidadMenor,CantidadMayor=0;
string nombreSemana[]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
string Hecho={"\n\n\nHecho por: Scarlet Falette, Matricula: 100336643."};


cout <<"------------------------Programa de comida de monos-----------------------"<<endl<<endl<<endl;

for (int a=0; a<3;a++){
        cout <<"Ingrese los datos de la semana del mono no. "<<++a<<endl<<endl;
--a;
    for (int b=0;b<7;b++){
        cout <<nombreSemana[b]<<": "; cin>> Arreglo[a][b];
        if (Arreglo[a][b]<0){
            cout <<"No introduzca numeros negativos."<<endl;
            cout <<nombreSemana[b]<<": "; cin >>Arreglo[a][b];
        }
    }
}
for (int b=0;b<7;b++){
    Promedio= (Arreglo[0][b]+Arreglo[1][b]+Arreglo[2][b])/3;
    cout <<"El Promedio de la cantidad de Libras de alimentos del "<< nombreSemana[b]<<" es: "<< Promedio<<endl;
}
for (int a=0; a<3;a++){
        CantidadMenor=Arreglo[a][0];
CantidadMayor=0;
    for (int b=0;b<7;b++){
         if (CantidadMenor>Arreglo[a][b]) {
                CantidadMenor=Arreglo[a][b];

         }
         if (CantidadMayor<Arreglo[a][b]) {
                CantidadMayor=Arreglo[a][b];

         }
    }
    cout <<"\nCantidad Menor de comida consumida durante la semana del mono no. "<<++a<<": "<< CantidadMenor<<endl;
    cout <<"Cantidad Mayor de comida consumida durante la semana del mono no. "<<a<<": "<< CantidadMayor<<endl;
--a;
}




cout<< Hecho;
return 0;
}
