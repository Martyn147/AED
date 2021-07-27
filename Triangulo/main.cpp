#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <math.h>
using namespace std;
int main() {
system("cls");

float l1 = 0, l2 = 0, l3 = 0, cat1 = 0, cat2 = 0, hip = 0, area = 0;

cout<<"Ingrese el lado 1:\n";
cin>>l1;
cout<<"Ingrese el lado 2:\n";
cin>>l2;
cout<<"Ingrese el lado 3:\n";
cin>>l3;

if(l1 > l2){
  cat1=l2;
  if(l1 > l3){
    hip = l1;
    cat2 = l3;
  }
  else{
    hip=l3;
    cat2 = l1;
  }
}
else{
  cat1 = l1;
  if(l2>l3){
    hip=l2;
    cat2=l3;
  }
  else{
    hip = l3;
    cat2 = l2;
  }
}

if(pow(hip,2)==pow(cat1,2)+ pow(cat2, 2)){
  area = (cat1 * cat2) / 2;
  cout<<"El area es: "<<area<<endl;
}
else{
  cout<<"No es un triangulo rectangulo\n";
 }
}
