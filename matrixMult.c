//Kevin McKinnon is the sole author of this work

#include <math.h>
#include <stdio.h>

int main()
{
    int rows1, columns1, row2, columns2, i, j, k, result;
    printf("Insert matrix 1 dimensions separated by a space: ");
    result=scanf("%d %d",&rows1,&columns1);
    if(result==0 || result==EOF){
                fprintf(stderr, "Invalid Input\n");
                exit(-1);
    }
    while(1)
    {
        printf("Insert matrix 2 dimensions separated by a space: ");
        result=scanf("%d %d",&rows2,&columns2);
        if(result!=2 || result==EOF){
                fprintf(stderr, "\nInvalid Input\n");
                exit(-1);
        }
        if(columns1==rows2){
            break;
        }
        printf("Dimensions Mismatch\n");
    }



    printf("Input matrix 1 elements separated by spaces: ");

    int mat1[rows1][columns1];
    int mat2[rows2][columns2];
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<columns1;j++)
        {
            result=scanf("%d",&mat1[i][j]);
            if(result==0 || result==EOF){
                fprintf(stderr, "Invalid Input\n");
                exit(-1);
            }
        }
    }

    printf("Input matrix 2 elements separated by spaces: ");
    for(i=0;i<rows2;i++)
    {
        for(j=0;j<columns2;j++)
        {
            result=scanf("%d",&mat2[i][j]);
            if(result==0 || result==EOF){
                fprintf(stderr, "Invalid Input\n");
                exit(-1);
            }
        }
    }
    printf("Matrix 1:\n");
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<columns1;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for(i=0;i<rows2;i++)
    {
        for(j=0;j<columns2;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }

    printf("\n Result Matrix:\n");
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<columns2;j++)
        {
            int sum=0;
            for(k=0;k<columns1;k++)
            {
                sum+=mat1[i][k]*mat2[k][j];
            }
            printf("%d\t",sum);
        }
        printf("\n");
    }
}
