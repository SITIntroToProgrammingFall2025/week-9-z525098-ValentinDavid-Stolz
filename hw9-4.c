#include <stdio.h>

int main(){
    char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int rgb[3];
    int i;

    for(i = 0; i < 3; i++){
        scanf("%d", &rgb[i]);
    }

    printf("The hex code is #");
    for(i = 0; i < 3; i++){
        int fc = rgb[i] / 16;
        int sc = (((double)rgb[i] / (double)16) - fc) * 16;
        printf("%c", hex[fc]);
        printf("%c", hex[sc]);
    }


    return 0;
}



