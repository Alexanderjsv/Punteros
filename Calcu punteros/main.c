#include <stdio.h>
#include <string.h>
#include "punterocalcu.h"

int main(void){
    float a,b,c;
    float* p1;
    float* p2;
    float* r;
    int vector[100];
    int vecfinal[100];
    int m,n;
    p1=&a;
    p2=&b;
    r=&c;
    //comparar
    /*char cadena1[20],cadena2[20];
    printf("Ingrese la primera cadena\n");
    scanf("%s",&cadena1);

    printf("Ingrese la segunda cadena\n");
    scanf("%s",&cadena1);
    
    compararcad(cadena1,cadena2);*/
    
    //suma vector
    printf("Ingrese dimension del vector\n");
    scanf("%d",&m);

    for(int i=0;i<m;i++){
        printf("Ingrese el numero de la posicion %d: ",i);
        scanf("%d",&vector[i]);
    }

    printf("Ingrese el numero por el cual desee sumar su arreglo\n");
    scanf("%d",&n);
    sumaescalar(n, m, vector, vecfinal);
    for(int i=0;i<m;i++){
        printf("%d\n",vecfinal[i]);
        
    }
   
   
    /*printf("Coloque el numero 1\n");
    scanf("%f",&a);
    printf("Coloque el numero 2\n");
    scanf("%f",&b);

    suma(p1,p2,r);
    printf("Suma: %f\n",*r);

    resta(p1,p2,r);
    printf("Resta: %f\n",*r);

    multi(p1,p2,r);
    printf("Multi: %f\n",*r);

    div(p1,p2,r);
    printf("Div: %f\n",*r);*/


}