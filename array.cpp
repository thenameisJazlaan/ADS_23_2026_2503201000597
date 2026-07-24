#include <iostream>
using namespace std;
int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    for (int i = 0; i < 10; i++) {
        cout<<"The address of the element  "<<arr[i]<<"  is  "<<i<<endl;
    }
}
    