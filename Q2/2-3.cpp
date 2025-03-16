     #include <iostream>
     void printKoreanNumber(int num) {
         if (num < 0 || num >= 10000) {
             std::cout << "10000 미만의 정수를 입력해주세요." << std::endl;
             return;
         }    

         int units[] = {10000, 1000, 100, 10, 1}; // 자리수 배열 (만 단위 포함) 
         const char* unitNames[] = {"만", "천", "백", "십", ""}; // 자리수 이름
         bool isFirst = true; // 첫 번째 숫자 여부 체크

         for (int i = 0; i < 5; i++) {
             int digit = num / units[i]; // 해당 자리 숫자 추출
             if (digit > 0) { // 숫자가 0이 아닐 때만 출력
                if (!isFirst) std::cout << " "; // 숫자 사이 공백 추가
                // "만", "천", "백", "십" 단위에서 숫자가 1이면 "1"을 생략
                if (!(digit == 1 && i < 4)) {
                   std::cout << digit;
                }   
                std::cout << unitNames[i]; // 단위 출력
                isFirst = false;
             }    
             num %= units[i]; // 다음 자리수로 이동
         }     
         std::cout << std::endl;
     }   

     int main() {  
         int number;
         std::cout << "10000 미만의 정수를 입력하세요: ";
         std::cin >> number;
         printKoreanNumber(number);
         return 0;
     }     