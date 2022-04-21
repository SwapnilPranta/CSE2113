#include<stdio.h>

int main()
{
    int row, col;

    printf("Enter the row number: ");
    scanf("%d", &row);
    printf("Enter the column number: ");
    scanf("%d", &col);

    int Item_Value[row][col];

    //Taking input
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("Salesgirl%d Item%d: ", i+1, j+1);
            scanf("%d", &Item_Value[i][j]);
            printf("\n");
        }
    }

    printf("\n---------------------------------------------------------\n");
    printf("|Salesgirl   |Item1\t|Item2\t\t|Item3\t\t|");
    printf("\n---------------------------------------------------------\n");
    for(int i = 0; i < row; i++)
    {
        printf("|SalesGirl #%d|", i+1);

        for(int j = 0; j < col; j++)
        {
            printf("\t%d\t|", Item_Value[i][j]);
        }
        printf("\n---------------------------------------------------------\n");
    }
}
