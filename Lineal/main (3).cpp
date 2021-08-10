#include <iostream>

using namespace std;

int busqueda (int a[], int n, int dato);

int main()
{
    
    
    int a[5]={4,1,2,3,5};
    
    if(busqueda(a,5,5)==-1)
    {
        cout<<"NO EXISTE EL ELEMENTO";
    }
    else
    {
        cout<<"ELEMENTO ESTA EN LA POSICIÓN"<<busqueda(a,5,5);
    }
    
 
    

    return 0;
}


int busqueda (int a[], int n, int dato)
{
    
    for (int i=0; i<=n; i++)
    {
        if(a[i]==dato)
        {
            return i;
        }
    }
  
    
        return -1;
    
}