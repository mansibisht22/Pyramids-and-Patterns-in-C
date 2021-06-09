/* half pyramid of alphabets
A
BC
DEF
*/

#include <stdio.h>
int main()
{
    int n, i, j;
    char alph = 'A';

    printf("enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", alph);
            alph++;
        }
        printf("\n");
    }
    return 0;
}