#include<iostream>
#include<string>

using namespace std;

struct Bebidas{
int codigo;
string NombreBebida;
double PrecioEnBebida;
int CantidadEnBebida;

};
Bebidas Vector[5];
void inicializar();
void Mostrar();
void procesar();
int clave;
double dinero, devuelta=0.0, Total_ganado=0.0;
string Hecho="Hecho por: Scarlet Falette, Matricula: 100336643", Opcion;
int main(){
    inicializar();
 bool comprar=true;
do
{
     cout <<"-------------Maquina de Bebidas------------------"<<endl<<endl;

Mostrar();

if (Opcion == "Si" || Opcion == "si" || Opcion == "SI"){
 comprar=false;
cout << "\nEl Total ganado es: "<< Total_ganado;
}else{
   cout << "Digite el Codigo de la Bebida: "; cin>> clave;
cout << "Introduzca el dinero: "; cin>> dinero;
procesar();
}

}while(comprar);
cout <<endl<<endl<<endl<< Hecho;
return 0;
}

void inicializar(){

Vector[0].NombreBebida= "Botella de Agua";
Vector[0].PrecioEnBebida= 20.0;
Vector[0].CantidadEnBebida= 20;
Vector[0].codigo= 1;

Vector[1].NombreBebida= "Coca Cola";
Vector[1].PrecioEnBebida= 25.0;
Vector[1].CantidadEnBebida= 20;
Vector[1].codigo= 2;

Vector[2].NombreBebida= "Seven Up";
Vector[2].PrecioEnBebida= 25.0;
Vector[2].CantidadEnBebida= 20;
Vector[2].codigo= 3;

Vector[3].NombreBebida= "Montain Dew";
Vector[3].PrecioEnBebida= 30.0;
Vector[3].CantidadEnBebida= 20;
Vector[3].codigo= 4;

Vector[4].NombreBebida= "Jugo V8";
Vector[4].PrecioEnBebida= 50.0;
Vector[4].CantidadEnBebida= 20;
Vector[4].codigo= 5;
}

void Mostrar(){
    cout <<"Codigo -------- Nombre de Bebida -------- Precio -------- Cantidad disponible"<< endl;
for (int a=0; a < 5; a++){
    cout << Vector[a].codigo<<" ------------ ";
    cout << Vector[a].NombreBebida<<" ------------ ";
    cout << Vector[a].PrecioEnBebida<<" ----------- ";
    cout << Vector[a].CantidadEnBebida<< endl;
}
cout << "Desea Salir: Si/No "; cin>>Opcion;
}
void procesar(){
    bool codigo =true;
    int numero=clave;
for (int a=0; a<5; a++){

            if (Vector[a].codigo==numero){
                codigo=false;
              if (dinero>=Vector[a].PrecioEnBebida && Vector[a].CantidadEnBebida>0){
                devuelta = dinero - Vector[a].PrecioEnBebida;
                Total_ganado += Vector[a].PrecioEnBebida;
                Vector[a].CantidadEnBebida--;
cout << "Usted Selecciono la bebida "<< Vector[a].NombreBebida;
            cout << ", Su cambio es: "<< devuelta<<endl;

              }else if (Vector[a].CantidadEnBebida==0){
              cout << "La Bebida seleccionada esta agotada"<< endl;
              }else cout <<"El monto ingresado no es aceptado para la bebida seleccionada."<< endl;
            }
        }
if (codigo){
    cout <<"El codigo ingresado es incorrecto."<< endl;
}

    }




