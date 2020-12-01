#include <stdio.h>
int main(){
int brs,kol,n;
printf("------------Program TriangleStar-------------\n");
printf("Masukkan Nilai :");
scanf("%d",&n);
printf("---------------------------------------------\n");
    for(int i=1;i<=n;i++){
        for(brs=i;brs<=n;brs++){
            printf(" ");
        }
        for(kol=1;kol<=i;kol++){
            printf("* ");
        }
        printf("\n");
    }
}

