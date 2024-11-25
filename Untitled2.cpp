#include <stdio.h>

int main() {
    int soDuocChoTruoc = 10;
    int soNhap; 

   
    printf("Nhap mot so (so duoc cho truoc la %d): ", soDuocChoTruoc);
    scanf("%d", &soNhap);

   
    while (soNhap != soDuocChoTruoc) {
        printf("So nhap sai. Vui long nhap lai (so duoc cho truoc la %d): ", soDuocChoTruoc);
        scanf("%d", &soNhap);
    }

    printf("Ban da nhap dung so %d. Ket thuc chuong trinh.\n", soDuocChoTruoc);

    return 0;
}

