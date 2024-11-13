#include<bits/stdc++.h>
using namespace std;

int is_polygon(int a) {
    /*  https://codeforces.com/contest/270/problem/A 
        For an angle a to be reg-polygon the sum of polygon's exterior angle has to be 360deg n*(180-a) = 360
        So, 360%(180-a)=0 [the condition for an angle a to be a reg-polygon] 
    */
    if(360%(180-a)==0)
        return 1;
    else
        return 0;

}

int main() {
    int t, a;
    cin >>t;

    while(t--){
        cin >>a;
        int res;
        res = is_polygon(a);

        if(res)
            cout <<"YES\n";
        else
            cout <<"NO\n";
    }

    return 0;
}