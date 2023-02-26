
#include <iostream>

using namespace std;

// 排序算法接口
int sort(int arr[], int size) {
    // 排序算法
    cout << "paixu" << size << endl;
}

int main() {
    int arr[] = {1, 6, 8, 7, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    return 0;
}

