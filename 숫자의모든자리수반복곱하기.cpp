#include <iostream>
using namespace std;

int main() {
    int t; // 테스트 케이스
    unsigned long int n; // 양의 정수
    
    
    cin >> t;
    
    for (int i=0; i<t; i++){
        cin >> n;
        while(n >= 10){ // 입력값 n 이 10 이상일 경우에 반복
            unsigned int result = 1; // 모든 자리수를 반복적으로 곱하는 과정에서 0 이 하나라도 있으면 안 됨
            while(n > 0){
                unsigned int digit = n % 10; //n 의 마지막 자리수 계산 ex> n = 1234 -> 4
                if (digit != 0){
                    result *= digit;
                }
                n /= 10; // n 의 마지막 자리수 제거
            }
            n = result;
            
        }
        cout << n << endl;
        
        
    }
    return 0;
    
    
}