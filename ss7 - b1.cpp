#include <stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
	printf("Length of array: %d\n", length);
	for (int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
