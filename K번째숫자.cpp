#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int k = 0;
        string result;
        cin >> k;
        int num = 1;

        while(result.length() <= k){
            
            string str_num = to_string(num);
            result += str_num;
            num ++ ;
        }

        cout << result[k-1] << endl;

    }
    return 0;

}

