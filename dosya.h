#include <stdio.h>
#include <stdlib.h>


void iprint(int **matrix, int m, int n){
	
    int i,j;
    int x;
	FILE *DOSYA ; 
	DOSYA = fopen("soru1.txt","w");
	

    for(i=0; i < m; i++){
        for(j=0; j < n; j++){
           x=*(*(matrix + i) + j);
           fprintf(DOSYA, "%d ",x);
        }
        fprintf(DOSYA,"\n\n");
    }
    fclose(DOSYA); 
}


void fprint(float **matrix, int m, int n){
    int i,j;
    float x;
	FILE *DOSYA ; 
	DOSYA = fopen("soru1.txt","w");
	
	fprintf(DOSYA,"\n\n");
    for(i=0; i < m; i++){
        for(j=0; j < n; j++){
           x=*(*(matrix + i) + j);
           fprintf(DOSYA, "%.1f ",x);
        }
        fprintf(DOSYA,"\n\n");
    }
    fclose(DOSYA); 
}







void dprint(double **matrix, int m, int n){
    int i,j;
    double x;
	FILE *DOSYA ; 
	DOSYA = fopen("soru1.txt","w");
	

    for(i=0; i < m; i++){
        for(j=0; j < n; j++){
           x=*(*(matrix + i) + j);
           fprintf(DOSYA, "%.1lf ",x);
        }
        fprintf(DOSYA,"\n\n");
    }
    fclose(DOSYA); 
}