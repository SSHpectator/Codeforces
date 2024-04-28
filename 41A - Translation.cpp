#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string t;
    string s;

    cin >> t;
    cin >> s;

    reverse(t.begin(), t.end());

    if(s == t){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
