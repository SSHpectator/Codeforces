#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    int i;
    string target = "hello";
    int k = 0;

    for(i = 0; i < s.size(); i++){
        if(s[i] == target[k]){
            k++;
        }
    }

    if(k == target.size()){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }



    return 0;
}
