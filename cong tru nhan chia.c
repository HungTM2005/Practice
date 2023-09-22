# include <stdio.h>

int cong(int num1, int num2); 	
int tru(int num1, int num2); 	
int nhan(int num1, int num2);
int chia(int num1, int num2);

int cong(int num1, int num2) {
	return num1 + num2;
}

int tru(int num1, int num2){
	return num1 - num2;
}
int nhan(int num1, int num2){
	return num1 * num2;
}
int chia(int num1, int num2){
	return num1 / num2;
}



int main (){
	int num1, num2, PhepCong, PhepTru, PhepChia, PhepNhan;  
	
	printf("\n Nhap gia tri 1 : "); 
	scanf("%d",&num1);	
	printf("\n Nhap gia tri 2 : ");
	scanf("%d",&num2); 
	
	PhepCong = cong(num1,num2);  
	printf("\n Ket qua phep cong : %d", PhepCong);
	
	PhepTru = tru(num1,num2);	
	printf("\n Ket qua phep tru : %d", PhepTru);
	
	PhepNhan = nhan(num1,num2);	  
	printf("\n Ket qua phep nhan : %d", PhepNhan);
	
	PhepChia = chia(num1,num2);	  
	printf("\n Ket qua phep chia : %d", PhepChia);
}
