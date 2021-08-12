#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <math.h>
#include <fstream>
using namespace std;

//prototipos
void menu();
string nombrearchivo; 
void escribirArchivo();
void leerArchivo();


int main() {
string a = "1";
system("clear");
int opcion = 1;
bool i = false;

menu();

while(i == false){
  
  cin>>opcion;
  cin.ignore();
  
  
  switch (opcion){
    case 1:
    escribirArchivo();
    menu();

    break;
    case 2:
    leerArchivo();
    menu();

    break;
    case 3:
  cout<<"Gracias por usar la REGISTRO DE PERSONAS";
    i = true;

    break;
    default:
    cout<<"Ingeso de opcion no valido\n";
    cout<<"Por favor seleccione una opcion valida\n";
    

    break;

  }
 }
  return 0;
}

void menu(){
  cout<<"REGISTRO DE PERSONAS\n";
  cout<<"Seleccione su opcion:\n";
  cout<<"1)Ingresar datos\n";
  cout<<"2)Mostrar datos\n";
  cout<<"3)Salir\n";
}

void escribirArchivo()
{
  string nombre;
  string apellido;
  int edad;
  char r;
  ofstream archivoprueba;
  cout<<"Ingrese el nombre del archivo: ";
  getline(cin,nombrearchivo);
  archivoprueba.open(nombrearchivo.c_str(),ios::out);
  do
  {
    cout<<"\t Ingrese el nombre:";
    getline(cin,nombre); 
    cout<<"\t Ingrese el apellido:";
    getline(cin,apellido); 
    cout<<"\t Ingrese la edad:";
    cin>>edad;
    archivoprueba<<nombre<<" "<<apellido<<" "<<edad<<endl;
    cout<<"Desea ingresar otro contacto s/n ";
    cin>>r;
    cin.ignore();
  }
  while(r=='s');
  
  archivoprueba.close();

}

void leerArchivo()
{
  string nombre;
  string apellido;
  int edad;
  ifstream archivolectura(nombrearchivo,ios::in);
  string texto;
  if (archivolectura.fail() )
  {
    cout<<"EL ARCHIVO NO SE PUDO LEER, O EL MISMO NO SE ENCUENTRA CREADO\n";
  }
  else
  {
  while(!archivolectura.eof())
    {
      archivolectura>>nombre>>apellido>>edad;
      if(!archivolectura.eof())
            {
              cout<<"--------------------------------\n";
              cout<<"-> Nombre:\t"<<nombre<<endl;
              cout<<"-> Apellido:\t"<<apellido<<endl;
              cout<<"-> Edad:\t"<<edad<<endl;
              cout<<"--------------------------------\n";
            }
    }
  archivolectura.close();
  }

}