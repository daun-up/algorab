// #include <iostream>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         int size;
//         int length;
//         int x1,y1,x2,y2;
//         int x3,y3,x4,y4;

//         cin >> x1 >> y1 >> x2 >> y2;
//         cin >> x3 >> y3 >> x4 >> y4;

//         if (x2 <= x3 || x1 >= x4 || y2 <= y3 || y4 <= y1) {
//             size = ((x2-x1)*(y2-y1)) + ((x4-x3)*(y4-y3));
//             length = (2*((x2-x1)+(y2-y1))) + (2*((x4-x3)+(y4-y3)));
//             cout << size << " " << length << endl;
//         } else {
//             int overlap_width = overlap(x1, x2, x3, x4);
//             int overlap_height = overlap(y1, y2, y3, y4);
//             size = ((x2-x1)*(y2-y1)) + ((x4-x3)*(y4-y3)) - (overlap_width * overlap_height);
//             length = (2*((x2-x1)+(y2-y1))) + (2*((x4-x3)+(y4-y3))) - (2*overlap_width) - (2*overlap_height);
//             cout << size << " " << length << endl;
//         }

//     }
//     return 0;
// }

// int overlap(int a1, int a2, int b1, int b2) {
//     if (a1 >= b2 || b1 >= a2) {
//         return 0;
//     }
//     return min(a2, b2) - max(a1, b1);
// }



#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int size;
        int length;
        int x1,y1,x2,y2;
        int x3,y3,x4,y4;

        cin >> x1 >> y1 >> x2 >> y2;
        cin >> x3 >> y3 >> x4 >> y4;

        if (x2 <= x3 || x1 >= x4 || y2 <= y3 || y1 >= y4) {
            // 겹치는 부분이 없는 경우
            size = ((x2-x1)*(y2-y1)) + ((x4-x3)*(y4-y3));
            length = (2*((x2-x1)+(y2-y1))) + (2*((x4-x3)+(y4-y3)));
            cout << size << " " << length << endl;
        } else {
            // 겹치는 부분이 있는 경우
            int overlap_width = overlap(x1, x2, x3, x4);
            int overlap_height = overlap(y1, y2, y3, y4);
            size = ((x2-x1)*(y2-y1)) + ((x4-x3)*(y4-y3)) - (overlap_width * overlap_height);
            length = (2*((x2-x1)+(y2-y1))) + (2*((x4-x3)+(y4-y3))) - (2*overlap_width) - (2*overlap_height);
            cout << size << " " << length << endl;
        }
    }
    return 0;
}

int overlap(int a1, int a2, int b1, int b2) {
    if (a1 >= b2 || b1 >= a2) {
        return 0;
    }
    return min(a2, b2) - max(a1, b1);
}
