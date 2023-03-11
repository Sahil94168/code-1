
#include<stdio.h>
#include<limits.h>

int main(){
int n;
printf("Enter the size of array: ");
scanf("%d",&n);
int arr [n];
int i;
int x = 0; 
int y = 0;
int max = INT_MIN;
int min = INT_MAX;
for(i = 0; i < n; i++){
scanf("%d",&arr[i]);
if(arr [i] > max){
max = arr [i];
x = i;	
}
if(arr [i] < min){
max = arr [i];
y = i;	
}	 
}

 /* int temp = arr [x];
arr [x] = arr [y];
arr [y] = temp;
printf("%d %d",arr [x], arr [y]); */

// for(i = 0; i < n; i++){
//	printf("%d ",arr [i]);
// } 
	return 0;
	
}
