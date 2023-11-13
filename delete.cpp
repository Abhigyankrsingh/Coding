#include <iostream>

using namespace std;

int deleteEle(int arr[], int n, int x) {
    int i;

    for (i = 0; i < n; i++) {
        if (arr[i] == x)
            break;
    }

    if (i == n)
        return n;

    for (int j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
    }

    return n - 1;
}

int main() {
    int arr[] = {1, 2, 3, 5, 8, 9}, x = 5, n = 6;

    cout << "Before deletion " << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    n = deleteEle(arr, n, x);

    cout << "After deletion" << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
