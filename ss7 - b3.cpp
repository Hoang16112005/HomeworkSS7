#include <stdio.h>
int main(){
    int evenNumber = 0;
	int a[5]={24,36,30,37,98};
    for(int i=0;i<5;i++){
        if(a[i] % 2 == 0){
        printf("n[%d] = %d \n", i, a[i]);
        evenNumber = 1;
		}
    }
    if (! evenNumber){
    	printf("No even number");
	}
    return 0;
}

