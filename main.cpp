#include <iostream>

using namespace std;

int multiplyBy7(int n) {
    //mutiply by 8 by multiplying by 2 three times
    int x = (n<<3);
    //subtract by n to change to multiply by 7
    return x - n;
}

int main() {
    int n = 10;
    int result = multiplyBy7(n);
    cout << result << endl;

}