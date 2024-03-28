#include <iostream>
#include <cmath>

int main() {
    int userInput;
    std::cout << "Nhập một số nguyên dương: ";
    std::cin >> userInput;

    // Tính toán số chữ số của userInput
    int size = log10(userInput) + 1;
    int *ptr = new int[size + 1]; // Thêm 1 để chứa ký tự kết thúc chuỗi

    // Lưu các chữ số vào mảng
    for (int i = 0; i < size; i++) {
        int digit = userInput % 10;
        ptr[i] = digit;
        userInput /= 10;
    
    // Tạo số đảo ngược
    int reverseNum = 0;
    for (int i = 0; i < size; i++) {
        reverseNum += ptr[i] * std::pow(10, size - i - 1);
    }

    std::cout << "Số đảo ngược: " << reverseNum;

    delete[] ptr; // Giải phóng bộ nhớ đã cấp phát
    return 0;
}