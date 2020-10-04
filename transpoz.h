

#include <stdio.h>
#include <stdlib.h>


void tiprint(int **matrix, int m, int n){
	
    int i,j;
    int x;
	FILE *DOSYA ; 
	DOSYA = fopen("soru1-transpoze.txt","w");
	
    for(i=0; i < n; i++){
        for(j=0; j < m; j++){
           x=*(*(matrix + j) + i);
           fprintf(DOSYA, "%d  ",x);
        }
        fprintf(DOSYA,"\n\n");
    }
    fclose(DOSYA); 
}


void tfprint(float **matrix, int m, int n){
	
    int i,j;
    float x;
	FILE *DOSYA ; 
	DOSYA = fopen("soru1-transpoze.txt","w");
	
    for(i=0; i < n; i++){
        for(j=0; j < m; j++){
           x=*(*(matrix + j) + i);
           fprintf(DOSYA, "%.1f  ",x);
        }
        fprintf(DOSYA,"\n\n");
    }
    fclose(DOSYA); 
}



void tdprint(double **matrix, int m, int n){
	
    int i,j;
    double x;
	FILE *DOSYA ; 
	DOSYA = fopen("soru1-transpoze.txt","w");
	
    for(i=0; i < n; i++){
        for(j=0; j < m; j++){
           x=*(*(matrix + j) + i);
           fprintf(DOSYA, "%.1lf  ",x);
        }
        fprintf(DOSYA,"\n\n");
    }
    fclose(DOSYA); 
}



