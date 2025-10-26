#include <stdio.h>

int main() {
    int matrix1[3][3], saddlePoint[3], count=0;
    
	int i,j;
	
	for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nEnter Element of Row %d And Column %d: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("|%d| ", matrix1[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        int smallestInRow=matrix1[i][0];
        int colInd=0;

        for (j = 0; j < 3; j++)
        {
            if (matrix1[i][j] < smallestInRow)
            {
                smallestInRow = matrix1[i][j];
                colInd = j;
            }
        }
        int isSadP = 1,k;
        for (k = 0; k < 3; k++)
        {
            if (matrix1[k][colInd] > smallestInRow)
            {
                isSadP = 0;
                break;
            }
        }
        if (isSadP)
        {
            saddlePoint[count++] = smallestInRow;
        }
    }
    printf("\nSaddle Points in th given matrix are:");
    for (i = 0; i < count; i++)
    {
        printf("|%d| ", saddlePoint[i]);
    }
    return 0;
}
