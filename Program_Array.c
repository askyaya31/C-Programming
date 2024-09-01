#include<stdio.h>
#include<stdlib.h>

#define rows 3
#define cols 2

void printArr(int arr1[rows][cols],int arr2[rows][cols]){
    printf("Array Pertama\n");
    for(int a=0;a<rows;a++){
        for(int b=0;b<cols;b++){
            printf("%d  ",arr1[a][b]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Array Kedua\n");
    for(int a=0;a<rows;a++){
        for(int b=0;b<cols;b++){
            printf("%d  ",arr2[a][b]);
        }
        printf("\n");
    }
}

void changeArr(int arr1[rows][cols],int arr2[rows][cols]){
    int chArr;
    printf("Array yang ingin diubah\n");
    printf("1. Array Pertama\n");
    printf("2. Array Kedua\n");
    printf("Pilih array <1/2> : ");
    scanf("%d",&chArr);
    
    if(chArr == 1){
        printf("Array Pertama\n");
        for(int a=0;a<rows;a++){
            for(int b=0;b<cols;b++){
                printf("Array [%d][%d] : ",a,b);
                scanf("%d",&arr1[a][b]);
            }
        }
        printf("\n");
    }else if(chArr == 2){
        printf("Array Kedua\n");
        for(int a=0;a<rows;a++){
            for(int b=0;b<cols;b++){
                printf("Array [%d][%d] : ",a,b);
                scanf("%d",&arr2[a][b]);
            }
        }
        printf("\n");
    }else{
        printf("Array yang dipilih tidak ada\n");
    }
}

void addArr(int arr1[rows][cols],int arr2[rows][cols]){
    int result[rows][cols];

    printf("Penjumlahan Array\n");
    for(int a=0;a<rows;a++){
        for(int b=0;b<cols;b++){
            result[a][b]=arr1[a][b]+arr2[a][b];
            printf("%d ",result[a][b]);
        }
        printf("\n");
    }

}

void subtractArr(int arr1[rows][cols],int arr2[rows][cols]){
    int result[rows][cols];

    printf("Pengurangan Array\n");
    for(int a=0;a<rows;a++){
        for(int b=0;b<cols;b++){
            result[a][b]=arr1[a][b]-arr2[a][b];
            printf("%d ",result[a][b]);
        }
        printf("\n");
    }

}

void multiplyArr(int arr1[rows][cols],int arr2[rows][cols]){
    int result[rows][cols];

    printf("Perkalian Array\n");
    for(int a=0;a<rows;a++){
        for(int b=0;b<cols;b++){
            result[a][b]=arr1[a][b]*arr2[a][b];
            printf("%d ",result[a][b]);
        }
        printf("\n");
    }

}

void divideArr(int arr1[rows][cols],int arr2[rows][cols]){
    float result[rows][cols];

    printf("Pembagian Array\n");
    for(int a=0;a<rows;a++){
        for(int b=0;b<cols;b++){
            result[a][b]=(float)arr1[a][b]/(float)arr2[a][b];
            printf("%.2f  ",result[a][b]);
        }
        printf("\n");
    }

}

int main(){
    
    int arr1[rows][cols] ={{1,2}, {2,3}, {3,4}};
    int arr2[rows][cols] = {{1,2},{3,4}, {5,6}};
    int hasil[rows][cols];
    int choose,operasiArr;
    char more;
    
    do{
        printArr(arr1,arr2);
        printf("\n");
        
        start : 
        printf("======PROGRAM ARRAY======\n");
        printf("1. Ubah Nilai Array\n");
        printf("2. Operasi Nilai Array\n");
        printf("Masukkan pilihan <1/2> : ");
        scanf("%d",&choose);

        system("CLS");

        switch(choose){
            case 1 : 
                changeArr(arr1,arr2);
                printArr(arr1,arr2);
                break;
            case 2: 
                operasi :
                system("cls");
                printf("1. Penjumlahan\n");
                printf("2. Pengurangan\n");
                printf("3. Perkalian\n");
                printf("4. Pembagian\n");
                printf("Pilih operasi array <1-4> :");
                scanf("%d",&operasiArr);

                if(operasiArr==1){
                    addArr(arr1,arr2);
                }else if(operasiArr==2){
                    subtractArr(arr1,arr2);
                }else if(operasiArr==3){
                    multiplyArr(arr1,arr2);
                }else if(operasiArr==4){
                    divideArr(arr1,arr2);
                }else{
                    goto operasi;
                }
                break;
            default :
                goto start;
                break;
        }
        printf("Ulangi program <y/n> : ");
        scanf("%s",&more);
        system("cls");
    }while(more == 'y');
    system("cls");
    printf("======PROGRAM SELESAI======");
    return 0;
}
