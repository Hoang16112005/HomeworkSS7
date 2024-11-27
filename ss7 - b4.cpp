#include <stdio.h>
int main(){
    int a;
    printf("nhap vao do dai mang: ");
    scanf("%d",&a);
    int n[a];
    for(int i=0;i<a;i++){
        printf("nhap phan tu thu %d trong mang: ",i+1);
        scanf("%d",&n[i]);
    }
}
