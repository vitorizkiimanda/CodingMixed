#include <stdio.h>
#include <math.h>
int main() {
short int x, y, z;
scanf("%hd %hd", &x, &y);
z = x / 2.0 * y;
printf("%hd %hd %hd\n", x, y, z);
return 0;
}
