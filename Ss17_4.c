#include <stdio.h>

void nhapMang(int arr[],int size){
    for (int i = 0;i < size;i++){
        printf("Nhap phan tu cho mang array[%d]: ",i);
        scanf("%d",&arr[i]);
    }
}

void soChan(int arr[],int size){
    printf("Cac so chan trong mang:\n");
    for (int i = 0;i < size;i++){
        if (arr[i] % 2 == 0) {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
}

int num1(int num){
    if (num < 2){
    	return 0;
	}
    for (int i = 2;i <= sqrt(num);i++){
        if (num % i == 0){
        	return 0;
		}
    }
    return 1;
}

void soNguyenTo(int arr[],int size){
    printf("Cac so nguyen to trong mang:\n");
    for (int i = 0; i < size; i++){
        if (num1(arr[i])) {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
}

void mangDaoNguoc(int arr[], int size){
    for (int i = 0;i < size / 2;i++){
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    printf("Mang sau khi dao nguoc:\n");
    for (int i = 0; i < size;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }
}

void sapXep(int arr[], int size){
    for (int i = 0;i < size - 1;i++){
        for (int j = 0;j < size - i - 1;j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0;i < size;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }
}

void sapXep1(int arr[],int size){
    for (int i = 0;i < size - 1;i++){
        for (int j = 0;j < size - i - 1;j++){
            if (arr[j] < arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep giam dan:\n");
    for (int i = 0;i < size;i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

void timKiem(int arr[],int size){
	int n1;
	int found = 0;
    printf("Nhap phan tu can tim: ");
    scanf("%d",&n1);
    for (int i = 0;i < size;i++){
        if (arr[i] == n1) {
            printf("Phan tu %d o vi tri %d\n",n1, i);
            found = 1;
        }
    }
    if (found == 0){
        printf("Khong tim thay phan tu %d trong mang\n",n1);
    }
}


int main(){
    int arr[100];
    int chose;
	int size;
	int  count = 0;
    do{
        printf("\n--------MENU--------\n");
        printf("1. Nhap vao so phan tu va tung phan tu trong mang\n");
        printf("2. Hien thi ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Tim kiem phan tu trong mang\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d",&chose);

        switch (chose){
            case 1:
                printf("Nhap vao so phan tu: ");
                scanf("%d",&size);
                nhapMang(arr,size);
                count = 1; 
                break;
            case 2:
                if (count == 0){
                    printf("Ban chua nhap mang!\n");
                } else{
                    soChan(arr,size);
                }
                break;
            case 3:
                if (count == 0){
                    printf("Ban chua nhap mang\n");
                } else {
                    soNguyenTo(arr,size);
                }
                break;
            case 4:
                if (count == 0){
                    printf("Ban chua nhap mang\n");
                } else {
                    mangDaoNguoc(arr,size);
                }
                break;
            case 5:
                if (count == 0){
                    printf("Ban chua nhap mang\n");
                } else{
                    int choose;
                    printf("1. Sap xep tang dan\n");
                    printf("2. Sap xep giam dan\n");
                    printf(" Lua chon cua ban: ");
                    scanf("%d", &choose);
                    if (choose == 1){
                        sapXep(arr,size);
                    } else{
                        sapXep1(arr,size);
                    }
                }
                break;
            case 6:
                if (count == 0){
                    printf("Ban chua nhap mang\n");
                } else{
                    timKiem(arr,size);
                }
                break;
            case 7:
                break;
        }
    } while (chose != 7);

    return 0;
}
