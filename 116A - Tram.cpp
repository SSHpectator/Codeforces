#include <iostream>
#include <cmath> // MATH Library

using namespace std;

int main(){
    int n;
    cin >> n;

    int ai, bi;
    int tot = 0;
    int capacity = 0;

    for(int i = 0; i < n; i++){
        cin >> ai;
        cin >> bi;
        tot = tot - ai + bi;

        capacity = max(capacity, tot);
    }

    cout << capacity << endl;
}
