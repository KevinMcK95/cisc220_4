//Kevin McKinnon is the sole author of this work

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows1, columns1, rows2, columns2, i, j, k, result;
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
        fprintf(stderr,"Dimensions Mismatch\n");
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
    printf("\nMatrix 1:\n");
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<columns1;j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for(i=0;i<rows2;i++)
    {
        for(j=0;j<columns2;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplcation Result:\n");

    int final[rows1][columns2];
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<columns2;j++)
        {
            printf("Element [%d,%d] = ",i+1,j+1);
            int sum=0;

            for(k=0;k<columns1;k++)
            {
		if (k == columns1-1)
			printf("%d*%d = ",mat1[i][k],mat2[k][j]);
		else
			printf("%d*%d + ",mat1[i][k],mat2[k][j]);
                sum+=mat1[i][k]*mat2[k][j];
            }
            final[i][j]=sum;
	    printf("%d\n",sum);
        }
    }

    printf("\nFinal output:\n");
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<columns2;j++)
	{
	    printf("%d\t",final[i][j]);
	}
	printf("\n");
    }
    int rows3, columns3;
    
    while(1)
    {
        printf("\nInsert matrix 3 dimensions separated by a space: ");
        result=scanf("%d %d",&rows3,&columns3);
        if(result!=2 || result==EOF){
                fprintf(stderr, "\nInvalid Input\n");
                exit(-1);
        }
        if(columns2==rows3){
            break;
        }
        fprintf(stderr,"Dimensions Mismatch\n");
    }



    printf("Input matrix 3 elements separated by spaces: ");

    int mat3[rows3][columns3];
    for(i=0;i<rows3;i++)
    {
        for(j=0;j<columns3;j++)
        {
            result=scanf("%d",&mat3[i][j]);
            if(result==0 || result==EOF){
                fprintf(stderr, "Invalid Input\n");
                exit(-1);
            }
        }
    }

    printf("\nPrevious Result Matrix:\n");
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<columns2;j++)
        {
            printf("%d\t",final[i][j]);
        }
        printf("\n");
    }


    printf("\nMatrix 3:\n");
    for(i=0;i<rows3;i++)
    {
        for(j=0;j<columns3;j++)
        {
            printf("%d\t",mat3[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplcation Result:\n");

    int finalAgain[rows1][columns3];
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<columns3;j++)
        {
            printf("Element [%d,%d] = ",i+1,j+1);
            int sum=0;

            for(k=0;k<columns2;k++)
            {
		if (k == columns2-1)
			printf("%d*%d = ",final[i][k],mat3[k][j]);
		else
			printf("%d*%d + ",final[i][k],mat3[k][j]);
                sum+=final[i][k]*mat3[k][j];
            }
            finalAgain[i][j]=sum;
	    printf("%d\n",sum);
        }
    }

    printf("\nFinal output:\n");
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<columns3;j++)
	{
	    printf("%d\t",finalAgain[i][j]);
	}
	printf("\n");
    }
}
