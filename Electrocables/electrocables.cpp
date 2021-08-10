#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <math.h>
using namespace std;
int main() {
  
system("clear");
  int puntodered,nconectores,totalconectores,ntotalconectores,contador;
  float distanciaconector,distanciatotal,dist,costo,precio,ganancia,total,pago;
  string lugar;
  nconectores=0;
  totalconectores=0;
  distanciatotal=0;
  contador = 0;

  cout<<"*** BIENVENIDO A EMPRESA ELECTROCABLES ***\n";
  cout<<"\t\tEste es un software contable\t\t\n";
  cout<<"-Ingrese el nombre del lugar de la instalación\n";
  cin>> lugar;
  cout<<"-Ingrese el número de puntos de red que van a ser instalados\n" ;
  cin>> puntodered ;
  
  while (puntodered>0)
  {
  cout<<"\n Punto de red # "<< contador+1 ;
  
  cout<<"\n-Ingrese la distancia entre el conector del punto de red hasta el equipo de conectividad ";
  cin>> distanciaconector;
  cout<<"\nIngrese el número de conectores para el punto de red ";
  cin>> nconectores;
  distanciatotal=distanciatotal+(distanciaconector*nconectores);
  totalconectores=totalconectores+nconectores;
  puntodered--;
  ntotalconectores=nconectores+ntotalconectores;
  contador++;
  }
  dist=(1.05)*(distanciatotal);
  cout<<"\t\tEl detalle de la instalacion es el siguiente\t\t\n";
  cout<<"\n-La distancia total del cable utilizado en la instalacion es: "<<dist;
  costo=distanciatotal*0.9;
  cout<<"\n-El costo del cable según la categoria 5e es: "<<costo;
  ntotalconectores=ntotalconectores*2;
  precio=((ntotalconectores*0.15)+(ntotalconectores*0.35))*1.15;
  cout<<"\n-El precio total de los conectores RJ45(hembra y macho) es: "<< precio ;
  total=costo+precio;
  cout<<"\n-El total del material utilizado es: "<<total;
  ganancia=total*0.45;
  cout<<"\n-La ganancia es: "<< ganancia;
  pago=ganancia+total;
  cout<<"\n-El total a pagar por su instalacion es: "<< pago;
  contador=0;

  return 0;
}