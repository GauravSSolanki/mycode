// #include <iostream>
// #include <vector>

// void merge(std::vector<int>& arr, int left, int middle, int right) {
//     int n1 = middle - left + 1;
//     int n2 = right - middle;

//     std::vector<int> leftArr(n1);
//     std::vector<int> rightArr(n2);

//     for (int i = 0; i < n1; i++) {
//         leftArr[i] = arr[left + i];
//     }
//     for (int i = 0; i < n2; i++) {
//         rightArr[i] = arr[middle + 1 + i];
//     }

//     int i = 0, j = 0, k = left;
//     while (i < n1 && j < n2) {
//         if (leftArr[i] <= rightArr[j]) {
//             arr[k] = leftArr[i];
//             i++;
//         } else {
//             arr[k] = rightArr[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < n1) {
//         arr[k] = leftArr[i];
//         i++;
//         k++;
//     }

//     while (j < n2) {
//         arr[k] = rightArr[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(std::vector<int>& arr, int left, int right) {
//     if (left < right) {
//         int middle = left + (right - left) / 2;

//         mergeSort(arr, left, middle);
//         mergeSort(arr, middle + 1, right);

//         merge(arr, left, middle, right);
//     }
// }

// int main() {
//     std::vector<int> arr = {12, 11, 13, 5, 6, 7};

//     int n = arr.size();

//     mergeSort(arr, 0, n - 1);

//     std::cout << "Sorted array: ";
//     for (int num : arr) {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>


using namespace std;
void merge(int &arr, int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    int L[n1];
    int R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = arr[middle + 1 + i];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int &arr, int L, int R)
{
    if (L < R)
    {
        int mid = L + (L + R) / 2;
        mergeSort( arr, L, mid);
        mergeSort( arr, mid + 1, R);
        merge( arr, L, mid, R);
    }
}
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    int L = 0;
    int R = n - 1;
    mergeSort(arr, L, R);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
