#include <stdio.h>
#include <stdlib.h> 
struct point{
    int x;
    int y;
};
int main() {
    struct point p[2];
    int dist;
    for(int i = 0;i < 2;i++){
        printf("enter %d x-coordinate : ", i+1);
        scanf("%d",&p[i].x);
        printf("enter %d y-coordinate : ",i+1);
        scanf("%d",&p[i].y);
        printf("\n");
        dist = abs(p[1].x - p[0].x) + abs(p[1].y - p[0].y); 
    }
    printf("distance between two given points is : %d ",dist);
    return 0;
}