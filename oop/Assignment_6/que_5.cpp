
/* Q5. WAP to define a class TIME having members
   hour, minute and second. Define a user-defined
   function ADDTIME() which receives two objects
   as arguments and returns an object. ADDTIME()
   will add two different time values. */

#include <iostream>
using namespace std;

class TIME {
    int hour, minute, second;

public:
    TIME(int h = 0, int m = 0, int s = 0) {
        hour = h;
        minute = m;
        second = s;
    }

    TIME ADDTIME(TIME t) {
        TIME temp;

        temp.second = second + t.second;
        temp.minute = minute + t.minute + temp.second / 60;
        temp.second %= 60;

        temp.hour = hour + t.hour + temp.minute / 60;
        temp.minute %= 60;

        return temp;
    }

    void display() {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main() {
    TIME t1(2, 45, 40), t2(1, 30, 30);
    TIME t3 = t1.ADDTIME(t2);

    cout << "Total time = ";
    t3.display();

    return 0;
}
