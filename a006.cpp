#include<bits/stdc++.h>
using namespace std;
int main(){
    double a, b, c;
    cin >> a >> b >> c;
    double temp = b*b - 4*a*c;
    if (temp < 0){
        cout << "No real root";
    }else{
        sqrt(temp);
        double x1 = 0, x2 = 0;
        x1 = (-b + temp)/2*a;
        x2 = (-b - temp)/2*a;
        if (x1 == x2){
            cout << "Two same roots x=" << x1;
        }else if(x1 > x2){
            cout << "Two different roots x1="<<x1<<" , x2="<<x2; 
        }else if(x1 < x2){
            cout << "Two different roots x1=" << x2 << " , x2=" << x1;
        }
    }
}