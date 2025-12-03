#include <stdio.h>

int main(){

    int a[2][3], b[3][2];
    int i,j;

    for(i=0; i < 2; i++){
        for(j=0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i < 3; i++){
        for(j=0; j < 2; j++){
            scanf("%d", &b[i][j]);
        }
    }

    printf("The first matrix you entered is\n");
    for(i=0; i < 2; i++){
        for(j=0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix you entered is\n");
    for(i=0; i < 3; i++){
        for(j=0; j < 2; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("The multiplication product of the matrix A and matrix B :\n");
    for(i=0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j]);
        }
        printf("\n");
    }

    return 0;
}

