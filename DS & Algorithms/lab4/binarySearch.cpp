#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right )/2;
        if (arr[mid] == target)
            return mid; 
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 7, 10, 23, 35, 50};
    int target;
    cout << "Enter number to search: ";
    cin >> target;
    int result = binarySearch(arr, 7, target);
    if (result != -1)
        cout << "Found at index: " << result << endl;
    else
        cout << "Not found" << endl;
    return 0;
}