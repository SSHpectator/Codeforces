#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int i;
    int ris[num]; // I KNOW IT'S BAD CODE

    for(i = 0; i < num; i++){
        cin >> ris[i];
    }

    int flag = 1;

    for(i = 0; i < num; i++){
        if(ris[i] == 1){
            flag = 0;
        }
    }

    if(flag){
        cout << "EASY" << endl;
    }else{
        cout << "HARD" << endl;
    }

    return 0;
}
