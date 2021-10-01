#include <stdio.h>
#include <stdlib.h>

void main() {
        int A[3][3];
        int i, j, M=3, N=3;
        int size;
        int rowsum, columnsum, diagonalsum;
        int magic = 0;
        int randvalues[9],m=0;
        int t;
      
       
            for(i=0;i<9;i++)     
                    randvalues[i]=i+1;

             for(i=0;i<9;i++)      
              {
                 j=i+rand()/(RAND_MAX/(9-i) + 1);
                 t=randvalues[j];
                  randvalues[j] = randvalues[i];
                 randvalues[i] = t;
               }
                
            printf("\nThe random square is:\n");
             for(i=0; i<M; i++) {
                    for(j=0; j<N; j++) {
                            printf("%3d\t", A[i][j]);
                    }
                    printf("\n");
             }
                
              diagonalsum = 0;
              for(i=0; i<M; i++) {
                      for(j=0; j<N; j++) {
                             if(i==j) {
                                    diagonalsum = diagonalsum + A[i][j];
                            }
                    }
             }
                
              for(i=0; i<M; i++) {
                      rowsum = 0;
                      for(j=0; j<N; j++) {
                              rowsum = rowsum + A[i][j];
                    }
                      if(rowsum != diagonalsum) {
                              printf("\nGiven matrix is not a magic square");
                               return;
                        }
              }
                
                for(i=0; i<M; i++) {
                        columnsum = 0;
                        for(j=0; j<N; j++) {
                                columnsum =  columnsum + A[j][i];
                        }
                        if(columnsum != diagonalsum) {
                                printf("\nGiven matrix is not a magic square");
                                return;
                        }
                }

                printf("\nGiven matrix is a magic square matrix");
}