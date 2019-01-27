#include<stdio.h>
int main()               //baris pertama,baris terakhir,kolom pertama,kolom terakhir
{
     int n, a, b;
    printf ("Masukkan Tinggi Bintang : ");scanf ("%d", &n);
    printf ("\n");
    for (a = 1; a <= n; a++) {
        printf ("*");
    }

    printf ("\n");
    for (a = 1; a <= (n-2); a++) {
        printf ("*");
        for (b = 1; b <= (n-2); b++) {
            printf (" ");
        }
        printf ("*\n");
    }
   for (a = 1; a <= n; a++) {
        printf ("*");
    }
    return 0;
}
