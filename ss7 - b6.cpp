#include <stdio.h>
int main(){
    int n[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(n[i]%2==0){
        n[i]=n[i]+3;
        printf("n[%d]=%d\n",i,n[i]);
        }
        else{
            n[i]=n[i]+2;
        printf("n[%d]=%d\n",i,n[i]);
        }
    }
}
