#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
//    int N1;
//    cin >> N1;
//    int N2 = N1;
    for(int N1 = 0; N1 < 100; N1++) {
            int N2 = N1;
    int i = 0;
    while(true) {
        i++;
        int M =  (N2/10 + N2%10)%10;
        M += (N2 % 10)*10;
//        cout << i << " " << N2 << " " << M << '\n';
        if(M == N1)
            break;
        if(i > 100)
            break;
        N2 = M;
    }
    cout << N1 << " " << i << endl;
    }
}
// ������ 60�ȿ� ������ 60�� ����� �ϳ��� ���� ���´�?
