# include <stdio.h>

int main () {
	int arr[10];
	int i,j;
	for (i = 0; i < 10; i++){
		printf("\n Nhap gia tri thu %d : ",i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 9, j = 0; i >= 0; ){
		j = arr[i];
		if (j != arr[0]){
			printf("%d, ",j);
		} else if ( j == arr[0] ){
		
			printf("%d",j);	
		}
		i--;
		
	}
}
