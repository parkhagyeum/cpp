     #include "p147_6-h.cpp"
     #include "p147_6-s.cpp"
     #include <iostream>

     int main() {
        srand((unsigned)time(NULL));

        int choice;
        printf("=== 수학 게임 ===\n");
        printf("1: 구구단 문제\n");
        printf("2: 두 자리 수 곱셈 문제\n");
        printf("3~9: 해당 숫자로 덧셈 문제\n");
        printf("선택: ");
        scanf("%d", &choice);

        if (choice == 1) {
            playSpeedGugu(10);

        } else if (choice == 2) {
            playTwoDigitMultiplication();
        } else if (choice >= 3 && choice <=
    9) {
            playAdditionGame(choice);
        } else {
            printf("잘못된 입력입니다.\n");
        }

        return 0;
    }        
