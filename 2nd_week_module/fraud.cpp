#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"enter the value of N:";
    cin >> N;

    int arr[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int target;
    cout<<"enter the value of target: ";
    cin >> target;

    bool found = false;

    for(int i = 0; i < N; i++) {
        if(arr[i] == target) {
            found = true;
            break;
        }
    }

    if(found)
        cout << "Fraud Transaction Found";
    else
        cout << "Transaction Not Found";

    return 0;
}