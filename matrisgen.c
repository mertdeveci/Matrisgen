#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "matrix.h"
#include "dosya.h"
#include "transpoz.h"
#include "kontrol.h"




int main(int argc, char **argv){
    if(argc<4 || argc>5){
        kontrol1();
    }
    if(argc==5){
        kontrol6(argv[4]);
    }
        
    
    srand(time(NULL));
    int i=0,j=0;
    char *cp;
    
    int m=strtol(argv[1], &cp, 10);
    if(*cp!='x'){ kontrol2(cp); }
    cp++;
    int n=strtol(cp, NULL, 10);
    kontrol4(n,cp);
    
    
    int a=strtol(argv[2], &cp, 10);
    if(*cp!='-'){ kontrol2(cp); }
    cp++;
    int b=strtol(cp, NULL, 10);
    kontrol4(b,cp);
    if(a==b){
        b++;
    }
    
    kontrol3(argv[3]);
    if(strcmp(argv[3],"i")==0){
        int **matrix=imatrix(matrix,m,n,a,b);
        iprint(matrix,m,n);
        if(argc==5 && strcmp(argv[4],"-t")==0){
            tiprint(matrix,m,n);
        }
        for (i = 0; i < m; i++)
            free(matrix[i]);

        free(matrix);
    }
    
    if(strcmp(argv[3],"f")==0){
       float **matrix=fmatrix(matrix,m,n,a,b);
       fprint(matrix,m,n);
       if(argc==5 && strcmp(argv[4],"-t")==0){
            tfprint(matrix,m,n);
        }
        for (i = 0; i < m; i++)
            free(matrix[i]);

        free(matrix);
    }
    
    if(strcmp(argv[3],"d")==0){
        double **matrix=dmatrix(matrix,m,n,a,b);
        dprint(matrix,m,n);
        if(argc==5 && strcmp(argv[4],"-t")==0){
            tdprint(matrix,m,n);
        }
        for (i = 0; i < m; i++)
            free(matrix[i]);

        free(matrix);
        
    }
    
    
    
    
    


    return 0;
}
