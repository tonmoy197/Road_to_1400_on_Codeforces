// Problem: Given two integers a and b, check if they have opposite signs.
#include <bits/stdc++.h>
using namespace std;
#define long long ll

// logic : 
// 1. Positive numbers have the most significant bit (MSB) as 0. 
// 2. Negative numbers have the MSB as 1. 
// 3. XOR (^) will result in a number with MSB 1 if the inputs have opposite signs.

int haveOppositeSign(int a, int b){
    return (a ^ b < 0) ;
}

int main()
{
    int a, b; cin >> a >> b;
    if(haveOppositeSign(a,b)) cout << "True" << endl;
    else cout <<"False"<<endl;
return 0;
}