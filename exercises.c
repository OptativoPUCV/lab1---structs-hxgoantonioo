#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ejercicio 1: Encuentra el Elemento Mayor
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y devuelva el valor más grande del arreglo.
*/
int findMax(int arr[], int size) 
{ 
  int numeroMayor = 0;
  for (int i = 0; i < size; i++)
    {
      if (arr[i] > numeroMayor)
      {
        numeroMayor = arr[i];
      }
    }
  return numeroMayor; 
}

/*
Ejercicio 2: Invertir un Arreglo
Descripción: Escribe una función que tome un arreglo y su tamaño, y luego
invierta el orden de sus elementos.
*/
void reverseArray(int arr[], int size) 
{
  int temp;
  int sizeTemp = size;
  for (int i = 0; i < size / 2; i++)
    {
      temp = arr[i];
      arr[i] = arr[sizeTemp - 1];
      arr[sizeTemp - 1] = temp;
      sizeTemp--;
    }
}

/*
Ejercicio 3: Filtrar Números Pares
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y luego devuelva un nuevo arreglo que contenga solo
los números pares del arreglo original.
newsize apunta a una dirección válida que no ha sido inicializada con nigún valor específico. 
*newsize debe almacenar el tamaño del nuevo arreglo que se retorna.
*/
int *filterEvenNumbers(int arr[], int size, int *newSize) 
{
  int *nuevoArreglo = (int *)malloc(size * sizeof(int));
  *newSize = 0;
  for (int i = 0; i < size; i++)
    {
      if (arr[i] % 2 == 0)
      {
        nuevoArreglo[*newSize] = arr[i];
        (*newSize)++;
      }
    }
  return nuevoArreglo; 
}

/*
Ejercicio 4: Fusión de dos Arreglos Ordenados
Descripción: Escribe una función que tome dos arreglos
ordenados de menor a mayor y sus tamaños, y luego fusione estos dos
arreglos en un tercer arreglo también ordenado de menor a mayor.
*/
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int result[]) 
{
  int size3 = 0;
  int prov1 = 0, prov2 = 0;

  while (size3 < size1 + size2)
  {
    if (prov1 < size1 && (prov2 >= size2 || arr1[prov1] <= arr2[prov2]))
    {
      result[size3] = arr1[prov1];
      prov1++;
    }
    else
    {
      result[size3] = arr2[prov2];
      prov2++;
    }
    size3++;
  }
}

/*
Ejercicio 5: Comprobación de Ordenación
Descripción: Escribe una función que tome un arreglo y su tamaño,
y luego devuelva 1 si el arreglo está ordenado en orden ascendente,
  0 si no está ordenado, y -1 si está ordenado en orden descendente.
*/
int checkSorted(int arr[], int size) 
{
  // 1 = ordenado ascendentemente, 0 = no ordenado, -1 = ordenado descendentemente
  int orden = 0;
  for (int i = 0; i < size - 1; i++)
    {
      if (i == 0)
      {
        if (arr[i] < arr[i + 1])
        {
          orden = 1;
        }
        else if (arr[i] > arr[i + 1])
        {
          orden = -1;
        }
        else
        {
          orden = 0;
        }
      }
      else
      {
        if (orden == 1)
        {
          if (arr[i] > arr[i + 1])
          {
            orden = 0;
            return orden;
          }
          else if (arr[i] == arr[i + 1])
          {
            orden = 1;
          }
        }
        else if (orden == 0)
        {
          if (arr[i] < arr[i + 1])
          {
            orden = 1;
          }
          else if (arr[i] > arr[i + 1])
          {
            orden = -1;
          }
          else
          {
            orden = 0;
          }
        }
        else
        {
          if (arr[i] < arr[i + 1])
          {
            orden = 0;
            return orden;
          }
          else if (arr[i] == arr[i + 1])
          {
            orden = -1;
          }
        }
      }
    }
  return orden;
}

/*
Ejercicio 6: Información de una Biblioteca
Descripción: Vamos a representar la información de una biblioteca. En la
biblioteca, hay libros, y cada libro tiene un autor. Queremos organizar esta
información utilizando estructuras anidadas en C. Escribe la función para
inicializar la información de un libro.
*/

typedef struct {
  char nombre[50];
  int anioNacimiento;
} Autor;

typedef struct {
  char titulo[100];
  Autor autor;
  int anioPublicacion;
} Libro;

void inicializarLibro(Libro *libro, const char *titulo, const char *nombreAutor,
                      int anioNacimiento, int anioPublicacion) {}

/*
Ejercicio 7: Lista enlazada de números
Descripción: Escribe una función que tome un arreglo de enteros y su tamaño, y
luego cree una lista enlazada usando la estructura Nodo. Cada nodo de la lista
debe contener un número del arreglo, y los nodos deben estar enlazados en el
mismo orden que los números aparecen en el arreglo. El último nodo de la lista
debe apuntar a NULL. La función debe devolver un puntero al primer nodo de la
lista enlazada.
Recuerda reservar memoria dinámica para cada nodo usando malloc.
Puedes guiarte con lo que vimos en las clases (diapos).
  */

typedef struct nodo {
  int numero;
  struct nodo *siguiente; // puntero al siguiente nodo
} Nodo;

Nodo *crearListaEnlazada(int arr[], int size) { return NULL; }
