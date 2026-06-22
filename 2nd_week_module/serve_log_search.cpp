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

    int target;
    cin >> target;

    int low = 0, high = N - 1;
    bool found = false;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == target) {
            found = true;
            break;
        }
        else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found)
        cout << "Log Found";
    else
        cout << "Log Not Found";

    return 0;
}