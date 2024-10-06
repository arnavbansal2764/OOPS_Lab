#include <iostream>
using namespace std;

int main() {
    int a = 5;   
    int b = 3;   

    int bitwise_and = a & b;   
    int bitwise_or = a | b;    
    int bitwise_xor = a ^ b;   

    cout << "Bitwise AND: " << bitwise_and << endl;
    cout << "Bitwise OR: " << bitwise_or << endl;
    cout << "Bitwise XOR: " << bitwise_xor << endl;

    int num = 8;   

    int left_shifted = num << 1;   
    int right_shifted = num >> 1;  

    cout << "Left shift by 1: " << left_shifted << endl;
    cout << "Right shift by 1: " << right_shifted << endl;

    return 0;
}
