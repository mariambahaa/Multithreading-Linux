#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1, c1, r2, c2, i, j;
    FILE *f=fopen("threads.txt","r");
    if (f == NULL)
    {
        printf("Could not open file");
    }
    else
    {
        fscanf(f,"%d %d\n",&r1,&c1);
        int matrix1[r1][c1];
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++)
            {
               fscanf(f,"%d",&matrix1[i][j]);
               printf("%d ",matrix1[i][j]);
            }
            printf("\n");
            //fscanf(f,"\n");
        }

        fscanf(f,"%d %d\n",&r2,&c2);
        int matrix2[r2][c2];
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++)
            {
               fscanf(f,"%d",&matrix2[i][j]);
               printf("%d ",matrix2[i][j]);
            }
            printf("\n");
            //fscanf(f,"\n");
        }
    }
    fclose(f);
}
