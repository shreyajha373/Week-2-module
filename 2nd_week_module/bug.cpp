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

    for(int i = 0; i < N - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < N; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}