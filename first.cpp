#include <bits/stdc++.h>

using namespace std;

int main(){

    // improving performance by unsyncing cpp ios and c stdio
    ios::sync_with_stdio(0);

    // and by removing the pause before the cin stream from the cout
    cin.tie(0);


    int a, b;
    string x;

    cout << "hello world" << endl;
    cin >> a >> b;
    // reading a string with spaces in 
    getline(cin, x);
    cout << "Output" << a << b << x << endl;

    return 0;
}