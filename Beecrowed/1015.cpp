#include <bits/stdc++.h>
using namespace std;
int main(){
double x1, x2, y1, y2;
cin>>x1 >>y1;
cin>>x2 >>y2;
double distance = pow(x2-x1,2)+pow(y2-y1,2);
//cout<<distance<<endl; Nahid-143
cout<<fixed<<setprecision(4)<<sqrt(distance)<<endl; 
    return 0;
}