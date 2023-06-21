#include <stdio.h>

void suma(float* p1,float* p2,float* r){
    *r=*p1+*p2;
}   

void resta(float* p1,float* p2,float* r){
    *r=*p1-*p2;
}   

void multi(float* p1,float* p2,float* r){
    *r=(*p1)*(*p2);
}   

void div(float* p1,float* p2,float* r){
    if (*p2!=0){
        *r=(*p1)/(*p2);
    }else{
        printf("Error numero invalido\n");
    }
    
}   

void sumaescalar(int n, int m, int* matriz, int* mult){
    
    for(int i=0;i<m;i++){
        *mult = n + *matriz;
        matriz++;
        mult++;
    }
}

void compararcad(char *cadena1,char *cadena2){
    while (*cadena1!='\0' && *cadena2!='\0'){
        if(*cadena1==*cadena2){
            printf("no igual\n");
            break;
        }
        *cadena1++;
        *cadena2++;
        
        

    }
    if (*cadena1=='\0' && *cadena2=='\0')
        {
           printf(" igual\n");
        }

}
