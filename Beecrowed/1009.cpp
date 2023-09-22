#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
   double sal,money,withBonus;
   cin>>name;
   cin>>sal>>money;
   money= 0.15*money;
   //cout<<money<<endl;
   withBonus=money+sal;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<withBonus<<endl;
    return 0;
}