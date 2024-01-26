/*Opción 10:  Multiplicación rusa Metodo 1
Gabriel Gaibor
David Proaño
Jose Fraga
*/

#include <stdio.h>
int main() {
  ///se asignan las variables
  int n, m, sum=0;
  char respuesta;
  respuesta='S';
  ///Se crea un bucle para realizar las operaciones siempre y cuando la respuesta sea S (si)
  do{
    ///Se piden los numeros
    printf("Ingrese los numeros deseados:\n");
    scanf("%d %d",&m, &n);
    ///Se evalua si el numero resultante es par o impar y se le añade al resultado (sum)
    while (m>0){
      if ( m % 2 != 0){
        sum=sum+n;
      }
      ///Se realizan las operaciones de divicion y multiplicacion
      m=m/2;
      n=n*2;
    }
    ///Se imprime el resultado
    printf("Su respuesta es: %d\n",sum);
    ///Se pregunta si se desea realizar otra operacion
    printf("Desea ingresar otros numeros: S/N\n");
    scanf(" %c", &respuesta);
    ///Se reinicia el resultado
    sum=0;
  }while(respuesta=='s' || respuesta=='S');
}
