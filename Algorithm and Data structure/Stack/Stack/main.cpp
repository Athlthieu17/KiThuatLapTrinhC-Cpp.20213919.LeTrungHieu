#include <iostream>
using namespace std;

const int MaxN = 1e6 + 1;

int n, a[MaxN];

int main() {
    freopen("CTDL.inp", "r", stdin);
    freopen("CTDL.out", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) {
        int pos = -1; // Khởi tạo giá trị kết quả ban đầu
        for (int j = i - 1; j >= 0; --j)
            if (a[j] > a[i]) {
                // Nếu tìm thấy vị trí j thoả mãn thì ghi lại và dừng vòng lặp
                pos = j;
                break;
            }
        // Kiểm tra xem có tồn tại vị trí j không, nếu có thì giá trị pos sẽ nằm trong đoạn [0, n – 1]
        // In ra phải cộng 1 do chỉ số mảng trong C++ bắt đầu từ 0
        if (pos >= 0) cout << pos + 1 << " ";
        else cout << -1 << " ";
    }
    return 0;
}
