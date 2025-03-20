     #include <stdio.h>

    int reverse(int n);

    int reverse(int n) {
        int rev = 0;
        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        return rev;
    }

    int main() {
        int X = 12345;
        int result = reverse(X);
        printf("Reserved: %d\n", result);
        return 0;
    }            
