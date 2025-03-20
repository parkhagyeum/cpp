     #include <stdio.h>
     #include "p147_2-5h.cpp"

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
         printf("Reversed: %d\n", result);
         return 0;
     }              