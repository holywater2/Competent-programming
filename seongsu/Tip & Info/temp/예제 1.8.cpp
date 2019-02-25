#include <iostream>
#include <string>
#define For(i,a,b) for(int i = a; i < b; i++)
#define sf1(a) cin >> a
#define sf2(a,b) cin >> a >> b
#define pf1(a) cout << a << '\n'
#define pf2(a,b) cout << a << " " << b << '\n'

using namespace std;

class Point{
    int x;
    int y;
public:
    Point(int _x =0, int _y = 0):x(_x),y(_y){ }
    void Print() const {
        cout << x << ',' << y << endl;
    }

    const Point& operator++() {
        ++x;
        ++y;
        return *this;
    }

    const Point operator++(int) {
        //Point p(x,y);
        this->x += 1;
        y++;
        Point p(x,y);
        return p;
    }
}; // P�� ���� �����ϴ°Ŷ� ���߿� �����ϴ� �Ŷ� �ٸ���?
// ���� �����ϴ� ���� ��������, �Լ� ������ ++ �׷��� ���ϰ��� ������ ��ü ���� �ٸ�

int main() {
    Point p1(3,4);
    Point result;

    result = ++p1;
    p1.Print();
    result.Print();

    result = p1++;
    p1.Print();
    result.Print();

    return 0;
}

