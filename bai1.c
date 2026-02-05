#include <stdio.h>
#define SIZE 10
typedef struct MA_TRAN{
	float a[SIZE][SIZE];
	int d,c;
}MT;

void nhap(MT *a);
void xuat(MT a);

int main(void){
	MT a;
	nhap(&a);
	printf("\n");
	xuat(a);
	return 0;
}

void nhap(MT *a){
	int i, j;
	printf("nhap so dong: ");
	scanf("%d", &a->d);
	
	printf("\nnhap so cot: ");
	scanf("%d", &a->c);
	
	//nhap gia tri
	for(i = 0; i < a->d; i++){ //dem dong
	printf("\nnhap gia tri cho dong %d: ", i + 1);
		for(j = 0; j < a->c;j++){
			printf("\nnhap gia tri cho cot %d: ", j + 1);
			scanf("%f", &a->a[i][j]);
		}
	}
}
void xuat(MT a){
	int i, j;
	for(i = 0; i < a.d;i++){
		for(j = 0; j < a.c; j++){
			printf("%.2f\t", a.a[i][j]);
		}
			printf("\n");
	}
}

