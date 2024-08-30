#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void jumlah(){
    int angka1,angka2;
    printf("Masukkann angka ke-1 :");
    scanf("%d",&angka1);
    printf("Masukkann angka ke-2 :");
    scanf("%d",&angka2);
    int result=angka1+angka2;
    printf("Hasil %d + %d = %d ",angka1,angka2,result);
}

void pengurangan(){
    int angka1,angka2;
    printf("Masukkann angka ke-1 :");
    scanf("%d",&angka1);
    printf("Masukkann angka ke-2 :");
    scanf("%d",&angka2);
    int result=angka1-angka2;
    printf("Hasil %d - %d = %d",angka1,angka2,result);

    //return result;
}

void perkalian(){
    int angka1,angka2;
    printf("Masukkann angka ke-1 :");
    scanf("%d",&angka1);
    printf("Masukkann angka ke-2 :");
    scanf("%d",&angka2);
    int result=angka1*angka2;
    printf("Hasil %d x %d = %d",angka1,angka2,result);

    //return result;
}

void pembagian(){
    float angka1,angka2;
    printf("Masukkann angka ke-1 :");
    scanf("%f",&angka1);
    printf("Masukkann angka ke-2 :");
    scanf("%f",&angka2);
    float result=angka1/angka2;
    printf("Hasil %.2f : %.2f = %.2f",angka1,angka2,result);

    //return result;

}

void perpangkatan(){
    int angka,pangkat;
    printf("Masukkan angka : ");
    scanf("%d",&angka);
    printf("Masukkan pangkat : ");
    scanf("%d",&pangkat);
    int result=pow(angka,pangkat);
    printf("Hasil %d pangkat %d = %d",angka,pangkat,result);
}

void hasilakar(){
    int nilaiakar;
    printf("Masukkan nilai akar : ");
    scanf("%d",&nilaiakar);
    float result = sqrt(nilaiakar);
    printf("Hasil akar %.2f ",result);


}

/*void faktorial(){
    int nilai;
    printf("Masukkan nilai faktorial : ");
    scanf("%d",&nilai);

    if(nilai<=1){
        return 1;
    }else{
        return nilai*faktorial(nilai-1);
    }  
}*/

void faktorial(){
    int nilai;
    printf("Masukkan nilai faktorial : ");
    scanf("%d",&nilai);

    printf("Hasil %d! = ",nilai);

    for(int a=nilai;a>=1;a--){
        if(a>1){
            printf(" %d x ",a);
        }else{
            printf("%d = ",a);
        }
    }
    int hasil=1;
    for(int i=0;i<nilai;i++){
        hasil*=(nilai-i);
    }
    printf("%d",hasil);
}

void fibonacci(){
    int nilai1,nilai2,sum_fibonacci;
    printf("Masukkan nilai fibonacci ke-1 : ");
    scanf("%d",&nilai1);
    printf("Masukkan nilai fibonacci ke-2 :  ");
    scanf("%d",&nilai2);
    printf("Masukkan jumlah angka fibonacci : ");
    scanf("%d",&sum_fibonacci);
    printf("%d %d ",nilai1,nilai2);

    int temp=0;
    for(int a=1;a<=sum_fibonacci-2;a++){
        temp=nilai1+nilai2;
        printf("%d ",temp);
        nilai1=nilai2;
        nilai2=temp;
    }

}

int main(){
    char ulang;
    int pil;
    do{
        start:
        printf("======PROGRAM KALKULATOR SIMPLE======\n");
        printf("Pilih Program Kalkulator :\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Perpangkatan\n");
        printf("6. Hasil Akar\n");
        printf("7. Faktorial\n");
        printf("8. Fibonacci\n");
        printf("Masukkan pilihan anda <1-9>: ");
        scanf("%d",&pil);

        system("cls");
        switch (pil) {
            case 1 :
                jumlah();
                break;
            case 2 :
                pengurangan();
                break;
            case 3 :
                perkalian();
                break;
            case 4 :
            pembagian();
                break;
            case 5 :
                perpangkatan();
                break;
            case 6 :
                hasilakar();
                break;
            case 7 :
                faktorial();
                break;
            case 8 :
                fibonacci();
                break;
            default :
                goto start;
                break;
        }
        printf("\n");
        printf("Ulangi <y/n> : ");
        scanf("%s",&ulang);
        system("cls");
    } while(ulang == 'y');
    printf("======Program Selesai======");
    return 0;
}