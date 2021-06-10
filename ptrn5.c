/* 
A
B B
C C C
D D D D
E E E E E
*/

#include<stdio.h>
int main() {

    int n, i, j;
    char alpha = 'A';
    printf("enter no. of rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%c ", alpha);
        }
        alpha++;
        printf("\n");
    }
    return 0;
}