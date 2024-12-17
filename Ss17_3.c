#include <stdio.h>
#include <string.h>

void nhapChuoi(char *str){
	fflush(stdin);
    printf("Moi ban nhap vao chuoi: ");
    fgets(str, 100, stdin);
}

void inChuoi(char *str) {
    printf("Chuoi vua nhap: %s\n", str);
}

void daoNguocChuoi(char *str){
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++){
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    printf("Chuoi dao nguoc: %s", str);
}

int inSoTu(char *str) {
    int demSoTu = 0, i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' '){
            demSoTu++;
        }
    }
    if (str[0] != ' '){
        demSoTu++;
    }
    printf("So tu trong chuoi: %d\n", demSoTu);
    return demSoTu;
}

void soSanhChuoi(char *str1, char *str2){
    if (strcmp(str1, str2) < 0){
        printf("Chuoi 2 dai hon chuoi 1\n");
    } else if (strcmp(str1, str2) > 0) {
        printf("Chuoi 1 dai hon chuoi 2\n");
    } else {
        printf("Hai chuoi bang nhau\n");
    }
}

void inHoaChuoi(char *str){
    for (int i = 0; str[i] != '\0'; i++){
        str[i] = toupper(str[i]);
    }
    printf("Chuoi vua in hoa: %s", str);
}

void noiChuoi(char *str1, char *str2){
    strcat(str1, str2);
    printf("Chuoi sau khi them: %s", str1);
}

int main(){
    char str[100], str2[100];
    int chose;
    do {
        printf("\n------- MENU -------\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. Nhap vao chuoi khac, so sanh voi chuoi ban dau\n");
        printf("5. In hoa tat ca chu cai trong chuoi\n");
        printf("6. Nhap vao chuoi khac va them vao chuoi ban dau\n");
        printf("7. Thoat\n");
        printf(" Lua chon cua ban: ");
        scanf("%d", &chose);
        switch (chose){
            case 1:
                nhapChuoi(str);
                break;
            case 2:
                if (strlen(str) == 0){
                    printf("Chuoi chua duoc nhap.\n");
                } else{
                    daoNguocChuoi(str);
                }
                break;
            case 3:
                if (strlen(str) == 0){
                    printf("Chuoi chua duoc nhap\n");
                } else{
                    inSoTu(str);
                }
                break;
            case 4:
                if (strlen(str) == 0){
                    printf("Chuoi chua duoc nhap\n");
                } else{
                    nhapChuoi(str2);
                    soSanhChuoi(str, str2);
                }
                break;
            case 5:
                if (strlen(str) == 0){
                    printf("Chuoi chua duoc nhap\n");
                } else{
                    inHoaChuoi(str);
                }
                break;
            case 6:
                if (strlen(str) == 0){
                    printf("Chuoi chua duoc nhap\n");
                } else{
                    nhapChuoi(str2);
                    noiChuoi(str, str2);
                }
                break;
            case 7:
                break;
        }
    } while (chose != 7);

    return 0;
}
