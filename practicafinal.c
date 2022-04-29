#include <stdio.h>
#include <stdlib.h>
struct{
	char nombre[20];
}LIGA[10];
int main(int argc, char, *argv[]){
	
	FILE *ref;
	
	
	int x=0;
	
	if((ref = fopen("c:/UNACH/LIGA.txt","w"))==NULL)
	    printf("el archivo no fue creado");
	else(
	
       while(x < 1){
       	        printf( "\nNo de jugador: " );
       	        fflush(stdin);
       	        //scanf( "%s", &liga);
       	        
       	        printf( "\nNombre: " );
       	        fflush(stdin);
       	        scanf("%s", &liga[x].nombre);
       	        
       	        printf( "\nApellido: " );
       	        fflush(stdin);
       	        //scanf("\n%f", &LIGA);
       	        
       	        printf( "\nEdad: " );
       	        fflush(stdin);
       	        //scanf( "%s", &LIGA );
       	        
	   }	
	)    
}
