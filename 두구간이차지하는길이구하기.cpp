#include <iostream>
using namespace std;
int main(){
    int t; // 테스트 케이스
    cin >> t;

    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        if (b >= a && d >= c){
            int start = max(a,c);
            int end = min(b,d);
            
            if ((end-start) > 0) {
                cout << end-start << " ";
                cout << (b-a) + (d-c) - (end-start) << endl;
            } else{
                cout << "0" << " ";
                cout << (b-a) + (d-c) << endl;
            }
            
        } 
        
    }
    return 0;
}