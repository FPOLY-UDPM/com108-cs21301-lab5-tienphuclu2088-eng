/******************************************************************************
 * Họ và tên: [Lưu Phúc Tiến]
 * MSSV:      [PS48200]
 * Lớp:       [COM108-CS21301]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>
int timMax(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int main() {
    int a, b, c;
    
    // Nhập 3 số từ bàn phím
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);
    
    // Gọi hàm tìm max
    int max = timMax(a, b, c);
    
    // Xuất kết quả
    printf("So lon nhat trong 3 so %d, %d, %d la: %d\n", a, b, c, max);
    
    return 0;
}


    
    