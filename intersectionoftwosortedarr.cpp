#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[6] = {1,5,6,8,9,42};
    int b[5] = {2,3,5,7,10};
    int i = 0;
    int j = 0;
    while (i < 6 && j < 5) {
        if (a[i] < b[j]) {
            i++;
        }
        else if (a[i] > b[j]) {
            j++;
        }
        else{
            cout << a[i];
            i++;
            j++;
        }
    }
}