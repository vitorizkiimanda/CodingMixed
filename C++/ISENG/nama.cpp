#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string nama;
    char apa;
    int x;
    printf ("Hello Guys!!\nPerkenalkan saya Cplusplus\nNama kamu siapa?\n");
    printf ("Nama saya : ");
    getline(cin, nama);
    cout << "\noalahh.. "<< nama ;
    printf ("\napakah kamu menyukai CPSC?\n\n");
    printf ("(tekan 1 untuk suka banget)\n(tekan 2 untuk biasa saja)\n(tekan 3 jika kurang suka)\n\n");
    scanf (" %d", &x);
    printf("\n");
    switch(x)
    {
        case 1:
            printf ("Unnnccchhhh... aku terharuuu deh.. :')\n");
            printf ("Kenapa suka banget??\n");
            printf("Komentar : ");
            scanf(" %c", &apa);
            while(apa != '\n') scanf("%c", &apa);
            printf("\noh gitu ya ");
            break;
        case 2:
            printf ("Uhhhh... biasa aja ya.. -_-\n");
            printf ("Ko biasa aja sihhh??\n");
            printf("Komentar : ");
            scanf(" %c", &apa);
            while(apa != '\n') scanf("%c", &apa);
            printf("\nhmm yaudah deh ");
            break;
        case 3:
            printf ("hikss,, sedih deh dengernya :'(\n");
            printf ("Masukannya dong buat CPSC tahun depan hehehheee\n");
            printf("Komentar : ");
            scanf(" %c", &apa);
            while(apa != '\n') scanf("%c", &apa);
            printf("\nWah, diterima masukannya ");
            break;
    }
    cout << nama << ", makasih ^-^ "<< endl << "babay !!"<< endl<< endl<< endl<< endl<< endl<< endl;
}
