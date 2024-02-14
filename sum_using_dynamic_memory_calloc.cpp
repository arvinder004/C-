//sum of numbers using dynamic memory allocation(calloc function).

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *arr, n, sum = 0;
	
	printf("enter number of values to add:");
	scanf("%d",&n);
	
	arr= (int *)calloc(n, sizeof(int));
	
	if(arr==NULL)
   {
      printf("Memory not allocated.");
      return EXIT_FAILURE;
   }
	
	for(int i=0; i<n; i++){
		printf("enter %d number:",i+1);
		scanf("%d",arr+i);
		
		sum += *(arr+i);
	}
	
	printf("Sum of %d numbers is:%d",n,sum);
	
	free(arr);
	return 0;
}
