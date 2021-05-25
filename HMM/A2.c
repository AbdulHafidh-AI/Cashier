#include<stdio.h>
#include<stdlib.h>
#include<math.h>
	
		int DesimalBiner()
	{
		int n, i=1, j, k;
		int biner[8];
		
		do{
			printf("Masukkan bilangan Desimal: ");
			scanf("%d", &n);
			
			if(n<0 || n>255){
				printf("\n\n-=Nilai tidak valid=-\n\n");
			
			}else{
				while(n>0){
					biner[i]=n%2;
					n=n/2;
					i=i+1;
					k=i;
				}
				printf("Bilangan biner: ");
				for(j=k-1; j>0; j--){
					printf("%d", biner[j]);
				}
			}
		}while(n<0 || n>255);
		
	}
	
	int BinerDesimal(){
		int num=0;
		int bin;
		int bindigit;
		int i=0;
		
		printf("Masukkan bilangan biner: ");
		scanf("%d", &bin);
		while(bin){
			bindigit = bin%10;
			num +=bindigit*pow(2, i);
			bin = bin/10;
			i++;
		}
		printf("Bilangan desimal = %d", num);
	}
	
	int DesimalOktal(){
		
		int num;
		int oct_arr[100];
		int i=0;
		
		printf("Masukkan bilangan desimal: ");
		scanf("%d", &num);
		
		while(num){
			oct_arr[i] = num%8;
			num = num/8;
			i++;
		}
		printf("Bilangan oktal: ");
		while(i--){
			printf("%d", oct_arr[i]);
		}
		
	}
	
	int OktalDesimal(){
		
		int num=0;
		int oct;
		int octdigit;
		int i=0;
		
		printf("Masukkan bilangan oktal: ");
		scanf(" %d", &oct);
		
		while(oct){
			octdigit = oct%10;
			num += octdigit*pow(8, i);
			oct = oct/10;
			i++;
			
		}
		printf("Bilangan desimal = %d", num);
		return 0;
		
	}
	
	int main(){
		int input;
		
		printf(">>>PROGRAM KONVENSI BILANGAN<<<\n\n");
		printf("Pilih yang anda inginkan\n\n");
		printf("1. Desimal - Biner\n");
		printf("2. Biner - Desimal\n");
		printf("3. Desimal - Oktal\n");
		printf("4. Oktal - Desimal\n");
		printf("\n\n Masukkan pilihanmu: ");
		scanf("%d", &input);
		
		 switch (input) {
    	case 1 :
    		DesimalBiner();
    	break;
    	case 2 :
    		BinerDesimal();
    	break;
    	case 3 :
    		DesimalOktal();
    	break;
    	case 4 :
    		OktalDesimal();
    	break;
    	default:
    		break;
    }
	}
