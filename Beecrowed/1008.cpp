#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    double rate;
    cin>>n;
    cin>>h;
    cin>>rate;
    double salary= h*rate;
    cout<<"NUMBER = "<<n<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<salary<<endl;
    return 0;
}