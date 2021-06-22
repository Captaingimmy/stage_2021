#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    
    printf("Inserisci il primo numero: ");
    scanf("%d", &a);
    
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);
    
    printf("Inserisci il terzo numero: ");
    scanf("%d", &c);
    
    
    char  operazione[50];
    printf("dimmi la espressione che vuoi eseguire? ");
    scanf("%s",&operazione);
    
    
    
    if(strcmp(operazione,"(a+b)-c")== 0){
        int risultato = a + b;
        int finale = risultato - c;
        printf("risultato = %d",finale);
    }
    
    if(strcmp(operazione,"(a-b)-c")== 0){
         int risultato = a - b;
         int finale = risultato - c;
        printf("risultato = %d",finale);
    }      
    
    if(strcmp(operazione,"(a*b)-c")== 0){
        int risultato = a * b;
        int finale = risultato - c;
        printf("risultato = %d",finale);
    }
    
    if(strcmp(operazione,"(a+b)+c")== 0){
        int risultato = a + b;
        int finale = risultato + c;
        printf("risultato = %d",finale);
    }
    if(strcmp(operazione,"(a*b)+c")== 0){
        int risultato = a * b;
        int finale = risultato + c;
        printf("risultato = %d",finale);
    }
    if(strcmp(operazione,"(a*b)/c")== 0){
        float risultato = a * b;
        float finale = risultato / c;
        printf("risultato = %f",finale);
    }
    if(strcmp(operazione,"(a/b)*c")== 0){
        float risultato = a / b;
        float finale = risultato - c;
        printf("risultato = %f",finale);
    }
    if(strcmp(operazione,"(a*b)*c")== 0){
        int risultato = a * b;
        int finale = risultato * c;
        printf("risultato = %d",finale);
    }
    if(strcmp(operazione,"(a/b)/c")== 0){
        float risultato = a /b ;
        float finale = risultato / c;
        printf("risultato = %f",finale);
    }
    if(strcmp(operazione,"(a/b)-c")== 0){
        float risultato = a / b;
        float finale = risultato - c;
        printf("risultato = %f",finale);
    }
    if(strcmp(operazione,"(a/b)+c")== 0){
        float risultato = a / b;
        float finale = risultato + c;
        printf("risultato = %f",finale);
    }
    if(strcmp(operazione,"(a+b)/c")== 0){
        float risultato = a + b;
        float finale = risultato / c;
        printf("risultato = %f",finale);
    }
    if(strcmp(operazione,"(a-b)/c")== 0){
        float risultato = a - b;
        float finale = risultato / c;
        printf("risultato = %f",finale);
    }
    if(strcmp(operazione,"(a+b)*c")== 0){
        int risultato = a + b;
        int finale = risultato * c;
        printf("risultato = %d",finale);
    }
    if(strcmp(operazione,"(a-b)*c")== 0){
        int risultato = a - b;
        int finale = risultato * c;
        printf("risultato = %d",finale);
    }
    
    
   return 0;
}
    
    