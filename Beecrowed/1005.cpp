 #include <bits/stdc++.h>
  using namespace std;
  int main() {
    double num1, num2;
    cin >> num1>>num2;
    double Avg =(num1*3.5+num2*7.5)/(3.5+7.5);
    cout << "MEDIA = " << fixed << setprecision(5) << Avg << endl;
    return 0;
  }