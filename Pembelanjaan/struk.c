//Dibuat Oleh Abdul Hafidh
#include <stdio.h> 
#include <time.h> // Karena ada waktu
int main(){
    int shampoo,pastaGigi,sikatGigi,sabun,tepung,Minyak,telur; // Barang
    int shampoo2,pastaGigi2,sikatGigi2,sabun2,tepung2,Minyak2,telur2;
    int total_harga;
    int uang;
    int kembalian;
    printf("SELEMAT DATANG DI SWALAYAN PANIK GA?\n");
    printf("=====================================\n");
    printf("Masukan Belanjaan Anda\n");
    printf("Shampoo : ");
    scanf("%d",&shampoo);
    printf("Pasta Gigi : ");
    scanf("%d",&pastaGigi);
    printf("Sikat Gigi : ");
    scanf("%d",&sikatGigi);
    printf("Sabun : ");
    scanf("%d",&sabun);
    printf("Tepung : ");
    scanf("%d",&tepung);
    printf("Minyak : ");
    scanf("%d",&Minyak);
    printf("Telur : ");
    scanf("%d",&telur);
    shampoo2 = shampoo;
    pastaGigi2 = pastaGigi;
    sikatGigi2 = sikatGigi;
    sabun2 = sabun;
    tepung2 = tepung;
    Minyak2 = Minyak;
    telur2 = telur;
    shampoo = shampoo * 20000;
    pastaGigi = pastaGigi * 18000;
    sikatGigi = sikatGigi * 4500;
    sabun = sabun * 18000;
    tepung = tepung * 16000;
    Minyak = Minyak * 28000;
    telur = telur * 1800;
    total_harga = shampoo + pastaGigi + sikatGigi + sabun + tepung + Minyak + telur;
    printf("Total Belanjaan : %d\n", total_harga);
    printf("Masukan Jumlah Uang Pembayaran (Rp.): ");
    scanf("%d",&uang);
    if (uang >= total_harga){
    printf("\n\n-------------------------------------------------\n");
    printf("\t SWALAYAN PANIK GA?\n");
    printf("JL. T. NYAK ARIEF - KOPELMA DARUSSALAM\n");
    printf("-------------------------------------------\n");
    printf("Cuman waktu yang belum tahu \n"); // Ada yang tau ga cara cetak waktu saat ini? 
    printf("-------------------------------------------\n");
    printf("Nama barang \t jmlh \t harga \t total\n");
    printf("shampoo     \t %d   \t 20000 \t %d\n",shampoo2,shampoo);
    printf("Pasta Gigi  \t %d   \t 18000 \t %d\n",pastaGigi2,pastaGigi);
    printf("Sikat Gigi  \t %d   \t 4500  \t %d\n",sikatGigi2,sikatGigi);
    printf("Sabun       \t %d   \t 18000 \t %d\n",sabun2,sabun);
    printf("Tepung      \t %d   \t 16000 \t %d\n",tepung2,tepung);
    printf("Minyak      \t %d   \t 28000 \t %d\n",Minyak2,Minyak);
    printf("Telur       \t %d   \t 1800  \t %d\n",telur2,telur);
    printf("--------------------------------------------\n");
    printf("\t\t\t Total Harga: \t%d\n",total_harga);
    printf("--------------------------------------------\n");
    printf("\t\t\t Total :\t%d\n",total_harga);
    printf("\t\t\t Tunai:\t%d\n",uang);
    kembalian = uang - total_harga;
    printf("\t\t\t kembali:\t%d\n",kembalian);
    printf("\n\t\t TERIMA KASIH\n");
    printf("\t\t ATAS KUNJUNGANYA\n");
    printf("\t\t LAYANANAN KONSUMEN SMS 081223441666\n");
    printf("-------------------------------------------\n");
    }else{
        printf("Uang Anda Tidak Cukup");
    }
    
   return 0;
}