#include<bits/stdc++.h>
#include<vector>
using namespace std;

 int main() {
     int t;
     cin >> t;
     int a=0, b=0, total_a=0, total_b=0, w=0, max_lead=0;
     while(t--) {
        cin >> a >> b;
        total_a+= a;
        total_b+=b;
        if(abs(total_a - total_b) > max_lead) {
            max_lead = abs(total_a - total_b);
            if(total_a > total_b) {
                w = 1;
            }
            else {
                w = 2;
            }

        }

// cout << w << " " << max_lead << endl;

     }
cout << w << " " << max_lead << endl;
 }