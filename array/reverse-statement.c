#include <stdio.h>
int main() 
{
    // Inisialisasi Variabel
    char kalimat[100];
    // User Input Kalimat
    printf("Masukan sebuah kalimat: ");
    scanf("%[^\n]s",kalimat);
    // Cari panjang array yang keiisi
    int panjang = 0;
    while (kalimat[panjang] != '\0') 
    {
        panjang++;
    }
    printf("Panjang array = %d", panjang);
    
    for (int i = panjang; i >= 0 ;i--)
    {
        printf("%c",kalimat[i]);
    }
    
    return 0;
}