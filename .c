/*Daniela Hernandez Lopez 
Ejercicio 1 clases
Volumen*/

#include <stdio.h>

int main()
{
  //inicio
  //Declaracion de variables 
  int v, a, b, c;


  //Leer de los valores 
  printf("Dame el valor del lado a: ");
  scanf("%i", &a);
  prinft("Dame el valor del lado b: ");
  scanf("%i", &b);
  printf("Dame el valor del lado c: ");
  scanf("%i", &c);

  //Calcular
  v=a * b * c;

  //Imprimir salida 
  printf("El volumen de la figura es de %i m³", v);

  //Fin 
  return 0;
}
