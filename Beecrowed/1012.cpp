#include <bits/stdc++.h>
using namespace std;
int main(){
    double a, b, c, tri, cri, tra, qua, ret;
    cin>>a >>b >>c;
    tri = a*c/2;
    cri =3.14159*(c*c);
    tra=(a+b)/2*c;
    qua=b*b;
    ret=a*b;
    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<tri<<endl;
    cout<<fixed<<setprecision(3)<<"CIRCULO: "<<cri<<endl; 
    cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<tra<<endl;
    cout<<fixed<<setprecision(3)<<"QUADRADO: "<<qua<<endl;
    cout<<fixed<<setprecision(3)<<"RETANGULO: "<<ret<<endl;
    return 0;
}