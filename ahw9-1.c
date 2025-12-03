#include <stdio.h>
#include <math.h>

int main(){

    double rgb[3];
    double distance[5];
    const char *names[] = {"Black", "Red", "Green", "Blue", "White"};

    int colTb[5][3] = {{0,0,0},
                       {255, 0, 0},
                       {0, 255, 0},
                       {0, 0, 255},
                       {255, 255, 255}};
    int i;

    for(i = 0; i < 3; i++){
        scanf("%lf", &rgb[i]);
    }

    for(i = 0; i < 5; i++){
        distance[i] = sqrt(pow((rgb[0] - colTb[i][0]), 2) + pow((rgb[1] - colTb[i][1]), 2) + pow((rgb[2] - colTb[i][2]), 2));
    }

    int min_index = 0;
    double min_val = distance[0];

    for(i = 1; i <5; i++){
        if(distance[i] < min_val){
            min_val = distance[i];
            min_index = i;
        }
    }

    printf("The nearest color is %s", names[min_index]);

    return 0;
}
