#include<stdio.h>


void insert(int a[], int size);

int main(){
	
	
	
	int a[50];
	int size, i;
	printf("Enter the sioze of array:");
	scanf ("%d", &size);
	printf("Enter the elements of array:");
	for( i =0; i<size; i++){
		
		scanf("%d", &a[i]);
		
	}
	
	printf("elemts in the array are:");
	for (i=0; i<size; i++)
{
	
	printf("%d", a[i]);
	
	}
	
	printf("Enter the position where you want to insert the element:");
	
	insert(a, size);	
	
	printf(" array after insertions are:");
	for (i=0; i<size; i++)
{
	
	printf("%d", a[i]);
	
	}
	
	return 0;
	
	
}


void insert(int a[], int size){
	
	int  i, num, pos;
	
	 printf("Enter data u want to insert:");
	 scanf("%d", &num);
	 printf("Enter position:");
	 scanf("%d", &pos);
	 
	 
	 if(pos<=0 || pos>size+1){
	 	
	 	printf("Invalid position\n");
	 	return;
	 }
	 
	 else
	 
	 for(i=size-1; i>=pos-1; i--){
	 	
	 	a[i+1]=a[i];
	 	
	 }
	 
	 a[pos-1]= num;
	 
	 size++;
	 
	 
	 return size;
	 
	
	
}








