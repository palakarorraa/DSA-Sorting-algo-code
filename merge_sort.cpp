#include <iostream>
using namespace std;

void merge(int A[], int l, int mid, int h) {
    int i = l, j = mid + 1, k = l;
    int B[100];

    while (i <= mid && j <= h) {
        if (A[i] < A[j]) {
            B[k] = A[i];
            i++;
        } else {
            B[k] = A[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        B[k] = A[i];
        i++;
        k++;
    }

    while (j <= h) {
        B[k] = A[j];
        j++;
        k++;
    }

    for (int p = l; p <= h; p++)
        A[p] = B[p];
}

void mergesort(int A[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;
        mergesort(A, l, mid);
        mergesort(A, mid + 1, h);
        merge(A, l, mid, h);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int A[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> A[i];

    mergesort(A, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}
