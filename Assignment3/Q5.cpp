#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int a, b, result, count = 0;
    char op;
    bool run = true;

    while (run) {
        cout << "Enter operation (a + b, a - b, a * b, a / b) or 'q' to quit: ";
        cin >> a >> op >> b;

        switch (op) {
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                if (b != 0) {
                    result = a / b;
                } else {
                    cout << "Division by zero error!" << endl;
                    continue;
                }
                break;
            case 'q':
                run = false;
                continue;
            default:
                cout << "Invalid operation!" << endl;
                continue;
        }

        count++;
        cout << "Result: " << result << endl;
        cout << "Total operations performed: " << count << endl;
    }

    return 0;
}
