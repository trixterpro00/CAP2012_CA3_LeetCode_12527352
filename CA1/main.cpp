#include <iostream>
using namespace std;

int main() {
    int n = 6;

    cout << "Enter the total number of elements in your array: " << endl;
    cin >> n;
    int arr[n];
    
    cout << "Enter the elements of your array:  " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current;
    }
    

    int target;
    cout << "Enter the target you want to search" << endl;
    cin >> target;
    int low = 0;
    int high = n - 1;
    int index = - 1;

    cout << "Best case: " << low << endl;
    cout << "Worst case: " << high << endl;



    while (low <= high) {
        int mid = (low + high)/2;

        if (arr[mid] == target) {
            index = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found";

    return 0;
}
