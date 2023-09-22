 #include <bits/stdc++.h>
  using namespace std;
  int main() {
    double num1, num2,num3;
    cin >> num1>>num2>>num3;
    double Avg =(num1*2+num2*3+num3*5)/(2+3+5);
    cout << "MEDIA = " << fixed << setprecision(1) << Avg << endl;
    return 0;
  }