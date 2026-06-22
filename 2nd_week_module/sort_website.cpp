#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"enter the value of N: ";
    cin >> N;

    int arr[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for(int i = 1; i < N; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}