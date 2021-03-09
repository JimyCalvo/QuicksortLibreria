#include <iostream>

using namespace std;

void Quicksort(int Arreglo_Q[], int izq, int der);
int mitad(int ArregloQ[], int izq, int der);
void imprimir (int ArregloQ[], int tam);
int mitad(int ArregloQ[], int izq, int der)
{
    return ArregloQ[(izq + der) / 2];
}
void Quicksort(int Arreglo_Q[], int izq, int der)
{
    int i = izq,Num2=der;
    int j = der;
    int piv = mitad(Arreglo_Q, izq, der);
    int temp;
    do {
        while (Arreglo_Q[i]<piv) 
        {
            i++;
        }
        while (Arreglo_Q[j]>piv) 
        {
            j--;
        }
    
        if (i<=j) 
        {
            temp = Arreglo_Q[i];
            Arreglo_Q[i] = Arreglo_Q[j];
            Arreglo_Q[j] = temp;
            i++;
            j--;
        }
    }  while(i <= j);
      
    
    if (izq < j)
        Quicksort(Arreglo_Q, izq, j);
    if (i < der)
        Quicksort(Arreglo_Q, i, der);
  }
  