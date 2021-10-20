#include <stdio.h>
#include <string.h>

int main() {
    typedef struct {
        int x;
        int y;
    } point;

    point newPoint;

    newPoint.x = 69;
    newPoint.y = 420;

    printf("%d\n", newPoint.x);
    printf("%d\n", newPoint.y);

    char xStr[5];
    char yStr[5];

    sprintf(xStr, "%d", newPoint.x);
	sprintf(yStr, "%d", newPoint.y);

	strcat(xStr,yStr);

    printf("%s\n", xStr);

    return 0;
};
