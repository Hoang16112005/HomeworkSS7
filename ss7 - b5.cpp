#include <stdio.h>
int main(){
    int n[5]={1,7,3,9,5},max,min;
    max=n[0];
    min=n[0];
    for(int i=1;i<5;i++){
        if(n[i]>max){
            max=n[i];
        }
        else if(n[i]<min){
            min=n[i];
        }
    }
    printf("gia tri lon nhat cua mang la: %d\n",max);
    printf("gia tri nho nhat cua mang la: %d",min);
}
