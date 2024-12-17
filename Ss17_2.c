#include<stdio.h>

void nhapChuoi(char str[]){
	fflush(stdin);
	printf("Moi ban nhap vao chuoi: ");
	fgets(str,100,stdin);
}

void inChuoi(char str[]){
	printf("Chuoi vua nhap: %s",str);
}

void inSoChuCai(char str[],int size,int demSoChuCai){
	for(int i = 0;i < size;i++){
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i]>= 'A' && str[i]<='Z')){
			demSoChuCai++;
		}
	}
	printf(" so ky tu trong chuoi la chu cai trong chuoi: %d\n",demSoChuCai);
}

void inSoChuSo(char str[], int size, int demSoChuSo){
	for (int i = 0; i < size; i++) {
        if (str[i] >= '0' && str[i] < '9') {
            demSoChuSo++;
        }
    }
    printf(" so luong ky tu trong chuoi la chu so co trong chuoi: %d\n",demSoChuSo);
}

void inKyTuDacBiet(char str[],int size, int demKyTuDacBiet){
	for (int i = 0; i < size; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))){
            demKyTuDacBiet++;
        }
    }
    printf(" so luong ky tu trong chuoi la chu cai dac biet co trong chuoi: %d\n", demKyTuDacBiet);
}

int main(){
	char str[100]= "";
	int size = sizeof(str)/sizeof(char);
	int chose;
	int demSoChuCai = 0;
	int demSoChuSo = 0;
	int demKyTuDacBiet = 0;

	do {
		printf("\n--------MENU--------\n");
		printf("1. Nhap vao chuoi\n");
		printf("2. In ra chuoi\n");
		printf("3. Dem so luong chu cai trong chuoi va in ra\n");
		printf("4. Dem so luong chu so trong chuoi va in ra\n");
		printf("5. Dem so luong ki tu dac biet trong chuoi va in ra\n");
		printf("6. Thoat\n");
		printf(" Lua chon cua ban: ");
		scanf("%d",&chose);
		switch(chose){
			case 1:
				nhapChuoi(str);
				break;
			case 2:
				inChuoi(str);
				break;
			case 3:
				inSoChuCai(str,size,demSoChuCai);
				break;
			case 4:
				inSoChuSo(str,size,demSoChuSo);
				break;
			case 5:
				inKyTuDacBiet(str,size,demKyTuDacBiet);
				break;
			case 6:
				break;
		}
} while(chose != 6);

	return 0;
}
