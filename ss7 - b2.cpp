#include <stdio.h>
int main(){
    int a[5];
	for (int i = 0; i < 5; i++){
		printf("Enter element %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 5; i++){
		printf("a[%d] = %d ", i, a[i]);
	}
	return 0;
}
