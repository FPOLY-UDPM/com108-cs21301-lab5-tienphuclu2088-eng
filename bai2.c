/******************************************************************************
 * Họ và tên: [Lưu Phúc Tiến]
 * MSSV:      [PS48200]
 * Lớp:       [COM108-CS21301]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 #include<stdio.h>
int laNamNhuan(int nam) {
    if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
        return 1;  // Là năm nhuận
    } else {
        return 0;  // Không phải năm nhuận
    }
}

int main() {
    int nam;
    
    // Nhập năm từ bàn phím
    printf("Nhap nam can kiem tra: ");
    scanf("%d", &nam);
    
    // Gọi hàm kiểm tra
    int ketQua = laNamNhuan(nam);
    
    // Xuất kết quả
    if (ketQua == 1) {
        printf("Nam %d la nam nhuan.\n", nam);
    } else {
        printf("Nam %d khong phai la nam nhuan.\n", nam);
    }
    
    return 0;
}

