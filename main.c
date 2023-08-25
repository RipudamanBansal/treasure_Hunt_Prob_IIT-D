#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int arr[5][2] = {{3, 20}, {1, 40}, {2, 10}, {4, 40}, {2, 40}};
    int initialX = 0;
    int initialY = 0;
    int totalDist = 0;


    for (int i = 0; i < 5; i++){
        totalDist += arr[i][1];
        if(arr[i][0] == 3){
            initialY = initialY + arr[i][1];
        } else if(arr[i][0] == 2){
            initialY = initialY - arr[i][1];
        } else if(arr[i][0] == 1){
            initialX = initialX + arr[i][1];
        } else {
            initialX = initialX - arr[i][1];
        }
    }

    printf("Final x coord: %d\n", initialX);
    printf("Final y coord: %d\n", initialY);

    int totalDisp = 0;
    totalDisp = (initialX*initialX) + (initialY* initialY);
    totalDisp = sqrt(totalDisp);

    printf("Total Distance: %d\n", totalDist);
    printf("Total displacement: %d\n", totalDisp);

    int quadrant = 0;
    if(initialX > 0 && initialY > 0) {
        quadrant = 1;
    } else if (initialX > 0 && initialY < 0) {
        quadrant = 4;
    } else if (initialX < 0 && initialY > 0) {
        quadrant = 2;
    } else if (initialX < 0 && initialY < 0) {
        quadrant = 3;
    } else {
        quadrant = -1;
    }

    printf("Quadrant: %d", quadrant);

    return 0;
}
