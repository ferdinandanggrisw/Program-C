#include <stdio.h>
#include <time.h>
#define N 10
int A[N][N],B[N][N];
int baris,kolom;
void inputMatriks(int array[N][N]){
    printf("Masukkan Jumlah Baris : ");
    scanf("%d",&baris);
    
    printf("Masukkan Jumlah Kolom : ");
    scanf("%d",&kolom);
    
    printf("Masukkan Nilai Matrik : \n");
    for(int i=0;i<baris;i++){
        for(int j=0;j<kolom;j++){
            printf("Matrik[%d][%d] :",i,j);
            scanf("%d",&array[i][j]);
        }
    }
}
void outputMatriks(int b,int k,int array[N][N]){
    printf("-------------Transpose Matriks-------------\n");
    for(int i=0;i<b;i++){
        for(int j=0;j<k;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}
void tranposeMatriks(int x[N][N],int y[N][N]){
    for(int i=0;i<kolom;i++){
        for(int j=0;j<baris;j++){
            y[i][j]=x[j][i];
        }
    }
}
int main(){
	char jawab;
    
    do{
    printf("--------------Program Matrik Transpose--------------\n");
    inputMatriks(A);
    outputMatriks(baris,kolom,A);
    tranposeMatriks(A,B);
    outputMatriks(kolom,baris,B);
printf("\nUji lagi ? [Y/N] : ");
        scanf(" %c",&jawab);
    }while(jawab == 'Y' || jawab == 'y');
}

