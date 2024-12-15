#include<stdio.h>
int main(){
	int a[5]={3,1,0,7,6};
	int b=1;
	for(int i=0;i<5;i++){
		if(a[i]%2==0){
			printf("so chan la: %d",a[i]);
			b=0;
		}
	}
	if(b){
		printf("khong co so chan");
	}
	return 0;
}
