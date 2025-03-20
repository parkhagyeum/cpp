     #include "p147_6-h.cpp"

     double tElapsed = 0;

     void playAdditionGame(int numDigits) {
         srand(time(NULL));
         int num1 = rand() % (int)pow(10,
     numDigits);
         int num2 = rand() % (int)pow(10,
     numDigits);    
         int answer;

         printf("[문제] %d + %d = ", num1,
     num2);
         scanf("%d", &answer);

         if (answer ==num1 + num2) {
             printf("정답입니다!\n");
         } else {
             printf("틀렸습니다! 정답은 %d 입니다.
    \n", num1 + num2);
         } 
    }           

    void playTwoDigitMultiplication() {
        srand(time(NULL));
        int num1 = rand() % 90 + 10;
        int num2 = rand() % 90 + 10;
        int answer;

        printf("[문제] %d X %d = ", num1,
    num2);
        scanf("%d", &answer); 
        
        if (answer == num1 * num2) {
            printf("정답입니다!\n");
        } else {
          printf("틀렸습니다! 정답은 %d 입니다.
    \n", num1 * num2);
        }
    }    