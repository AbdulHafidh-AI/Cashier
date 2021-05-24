#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 1000;
    int number[1000];
    int a;
    for (int i = 0; i < n; i++){
        number[i] = rand() % (150) + 1;
        printf("->%d", number[i]); // Nah ini cuman aku kasih nampak bilangan yang belum di sorting
    }
    // Untuk sorting pahami dulu ya algoritma sorting baru tulis kodinganya ni
    for (int i = 0; i < n; i++) 
{
  for (int j = i + 1; j < n; j++)
  {
    if (number[i] > number[j]) 
    {
      a =  number[i];
      number[i] = number[j];
      number[j] = a;
    }
  }
}
 // Ni kita mencatak bilangan 1 - 150 yang udh di sorting
 for (int i = 0; i < n; i++){
     printf("->%d", number[i]); // Nah ini bilangan yang udh di sorting
    }

    // Untuk nilai modus, jumlah data dll aku yakin kalian bisa!! di petani kode banyak cara2nya
 
}