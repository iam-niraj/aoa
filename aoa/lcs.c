#include <stdio.h>
#include <string.h>

char S1[20] = "ACADB", S2[20] = "CBDA", b[20][20];
int LCS_TABLE[20][20];

void lcsAlgo()
{
    int m = strlen(S1);
    int n = strlen(S2);
    printf("%d", m);
    for (int i = 0; i <= m; i++)
    {
        LCS_TABLE[i][0] = 0;
    }
    for (int j = 0; j <= n; j++)
    {
        LCS_TABLE[0][j] = 0;
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (S1[i - 1] == S2[j - 1])
            {
                LCS_TABLE[i][j] = LCS_TABLE[i - 1][j - 1] + 1;
            }
            else if (LCS_TABLE[i - 1][j] >= LCS_TABLE[i][j - 1])
            {
                LCS_TABLE[i][j] = LCS_TABLE[i - 1][j];
            }
            else
            {
                LCS_TABLE[i][j] = LCS_TABLE[i][j - 1];
            }
        }
    }

    int index = LCS_TABLE[m][n];
    char lcsAlgo[index + 1];
    lcsAlgo[index] = '\0';

    int i = m;
    int j = n;
    while (i > 0 && j > 0)
    {
        if (S1[i - 1] == S2[j - 1])
        {
            lcsAlgo[index - 1] = S1[i - 1];
            i--;
            j--;
            index--;
        }
        else if (LCS_TABLE[i - 1][j] > LCS_TABLE[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    printf("S1 : %s \nS2 : %s \n", S1, S2);
    printf("LCS: %s", lcsAlgo);
}

void main()
{
    lcsAlgo();
}
