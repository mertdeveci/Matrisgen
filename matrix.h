#include<stdlib.h>
#include<time.h>

int** imatrix(int **matrix,int m,int n,int max, int min){
        srand(time(NULL));
        int i=0,j=0;
        if(min>max){
            i=max;
            max=min;
            min=i;
        }
        matrix = (int **)malloc( m * sizeof(int*) );
        if( matrix == NULL ){
            printf( "Yetersiz bellek!" );
        }
        
        
        for( i = 0; i < m; i++ ) {
            matrix[i] = (int *)malloc( n * sizeof(int) );
            if( matrix[i] == NULL ){
                printf( "Yetersiz bellek!" );
            }
        }
        
        
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                matrix[i][j]=(rand()%(max-min))+min;
                printf("%2d ",matrix[i][j]);
            }
            printf("\n\n");
        }
        return matrix;
}
        

// - - - - - - - - - - - - - - - - - - - - - - - - - - -

float** fmatrix(float **matrix,int m,int n,int max, int min){
        srand(time(NULL));
        int i=0,j=0;
        if(min>max){
            i=max;
            max=min;
            min=i;
        }
        matrix = (float **)malloc( m * sizeof(float*) );
        if( matrix == NULL ){
            printf( "Yetersiz bellek!" );
        }
        
        
        for( i = 0; i < m; i++ ) {
            matrix[i] = (float *)malloc( n * sizeof(float) );
            if( matrix[i] == NULL ){
                printf( "Yetersiz bellek!" );
            }
        }
        
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                matrix[i][j]=(float)(rand()%(max-min))+min;
                printf("%.1f ",matrix[i][j]);
            }
            printf("\n\n");
        }

        return matrix;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - -

double** dmatrix(double **matrix,int m,int n,int max, int min){
        srand(time(NULL));
        int i=0,j=0;
        if(min>max){
            i=max;
            max=min;
            min=i;
        }
        matrix = (double **)malloc( m * sizeof(double*) );
        if( matrix == NULL ){
            printf( "Yetersiz bellek!" );
        }
        
        
        for( i = 0; i < m; i++ ) {
            matrix[i] = (double *)malloc( n * sizeof(double) );
            if( matrix[i] == NULL ){
                printf( "Yetersiz bellek!" );
            }
        }
        
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                matrix[i][j]=(double)(rand()%(max-min))+min;
                printf("%.1lf ",matrix[i][j]);
            }
            printf("\n\n");
        }
        return matrix;
}





























