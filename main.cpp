#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <math.h>
#include <fstream>
#include <string.h>
#include <stdlib.h>
using namespace std;

//protoripos
int mitad (int a[],int pinicial, int pfinal);
void ordenar (int a[],int pinicial, int pfinal);
void quicksort(int A[10]);

int main(){
system("clear");

int A[10]= {44, -87, 19, 101, 96, 555, -814, 900, -145, 0};
quicksort(A);

cout<<"Elementos originales"<<endl;
for(int i=0;i<10;i++){
  cout<<"["<<A[i]<<"]";
}

cout<<"\nElementos ordenados"<<endl;
ordenar(A,0,9);
for(int i=0;i<10;i++){
cout<<"["<<A[i]<<"]";
}    
return 0;
}

//Funciones
int mitad (int a[],int pinicial, int pfinal){
    return a[(pinicial+pfinal)/2];
}


void ordenar (int a[],int pinicial, int pfinal){

    int i=pinicial;
    int j=pfinal;
    int temp;
    int piv=mitad(a,pinicial,pfinal);

    do
    {
        while(a[i]<piv)
        {
            i++;
        }
        while(a[j]>piv)
        {
            j--;
        }
        if(i<=j)
        {
            temp =a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
    }
    while(i<=j);
    if(pinicial<j)
    {
        ordenar(a,pinicial,j);
    }
    if(i<pfinal)
    {
      ordenar(a,i,pfinal);
    }
}

void quicksort(int A[10]){
  ofstream quicksort;

 quicksort.open("quicksort.txt",ios::out); //abrir

 if(quicksort.fail()){
   cout<<"No se pudo abrir el archivo.\n";
   exit(1);
 }

  quicksort<<"--------------- Ordenamiento por algoritmo rapido o quicksort ---------------\n\n";

  quicksort<<"Elementos originales"<<endl;
  for(int i=0;i<10;i++){
  quicksort<<"["<<A[i]<<"]";
  }
  quicksort<<"\n";
  quicksort<<"\nElementos ordenados"<<endl;
  ordenar(A,0,9);
  for(int i=0;i<10;i++){
  quicksort<<"["<<A[i]<<"]";
  }  

 quicksort.close();
}