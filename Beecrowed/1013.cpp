#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int greatest = max(a, max(b, c));
    cout << greatest << " eh o maior" << endl;
    return 0;
}
