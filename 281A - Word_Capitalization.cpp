#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.size();
    for(int i = 0; i < len; i++){
        s[0] = toupper(s[0]);
    }

    cout << s << endl;

    return 0;
}
