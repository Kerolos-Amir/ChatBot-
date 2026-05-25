#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int smallest = i;          // نفترض أن الأب هو الأصغر
    int left = 2 * i + 1;     // الابن الشمال
    int right = 2 * i + 2;    // الابن اليمين

    // نقارن مع الابن الشمال
    if (left < n && arr[left] < arr[smallest])
        smallest = left;

    // نقارن مع الابن اليمين
    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    // لو في تغيير → نبدل ونكمل heapify
    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        heapify(arr, n, smallest);
    }
}

void buildHeap(int arr[], int n)
{
    // نبدأ من آخر parent
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

void heapSort(int arr[], int n)
{
    buildHeap(arr, n);

    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);   // أصغر عنصر يطلع لآخر المصفوفة
        heapify(arr, i, 0);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = { 9, 2, 7, 5, 1, 4, 3, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    display(arr, n);

    return 0;
}