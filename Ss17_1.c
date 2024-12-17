#include<stdio.h>

void nhapMang(int a[], int n){
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++){
        printf("Moi ban nhap vap phan tu thu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void inMang(int a[],int n){
	for(int i = 0;i < n;i++){
		printf("%d",a[i]);
	}
}

void doDai(int a[], int *n){
	for(int i = 0;i < *n;i++){
		printf("%d",a[i]);
	}
	printf("\n");
}

void tinhTong(int a[],int n, int *sum ){
	*sum = 0;
	for(int i = 0; i < n;i++){
		*sum += a[i];
	}
}

void timMax(int a[], int n, int *max){
	*max = a[0];
	for(int i = 1;i< n;i++){
		if(a[i] > *max){
			*max = a[i];
		}
	}
}

int main(){
	int a[100];
	int chose,n,i;
	printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
	int size = sizeof(a)/sizeof(a[0]);
	int tong = 0;;
	int max;
	

	do {
		printf("\n--------MENU--------\n");
		printf("1. Nhap vao so phan tu va tung phan tu\n");
		printf("2. Hien thi cac phan tu trong mang\n");
		printf("3. Tinh do dai mang\n");
		printf("4. Tinh tong cac phan tu trong mang\n");
		printf("5. Hien thi phan tu lon nhat\n");
		printf("6. Thoat\n");
		printf(" Lua chon cua ban: ");
		scanf("%d",&chose);
		switch(chose){
			case 1:
				nhapMang(a,n);
				break;
			case 2:
				printf(" Mang vua nhap: ");
				inMang(a,n);
				break;
			case 3:
				printf(" Do dai cua mang: ");
				doDai(a,&n);
				break;
			case 4:
				tinhTong(a,n,&tong);
				printf(" Tong cua mang: %d\n",tong);
				break;
			case 5:
				timMax(a,n,&max);
				printf(" Gia tri lon nhat: %d",max);
				break;
			case 6:
				break;
		}
} while(chose != 6);
	return 0;
}
