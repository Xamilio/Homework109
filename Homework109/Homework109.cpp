#include <iostream>
using namespace std;


//1
//void findMinMax(const int arr[], int size, int& minVal, int& minIndex, int& maxVal, int& maxIndex)
//{
//    if (size <= 0) return;
//    minVal = maxVal = arr[0];
//    minIndex = maxIndex = 0;
//
//    for (int i = 1; i < size; i++)
//    {
//        if (arr[i] < minVal)
//        {
//            minVal = arr[i];
//            minIndex = i;
//        }
//        if (arr[i] > maxVal) 
//        {
//            maxVal = arr[i];
//            maxIndex = i;
//        }
//    }
//}
//
//int main()
//{
//    const int size = 5;
//    int arr[size] = { 3, 1, 9, -4, 5 };
//
//    int minVal, minIndex, maxVal, maxIndex;
//    findMinMax(arr, size, minVal, minIndex, maxVal, maxIndex);
//
//    cout << "Мінімум: " << minVal << " (індекс: " << minIndex << ")\n";
//    cout << "Максимум: " << maxVal << " (індекс: " << maxIndex << ")\n";
//
//}


//2
//void reverseArray(int arr[], int size) 
//{
//    for (int i = 0; i < size / 2; i++)
//    {
//        int temp = arr[i];
//        arr[i] = arr[size - 1 - i];
//        arr[size - 1 - i] = temp;
//    }
//}
//
//int main() 
//{
//    const int size = 5;
//    int arr[size] = { 1, 2, 3, 4, 5 };
//
//    reverseArray(arr, size);
//
//    cout << "Реверсований масив: ";
//    for (int i = 0; i < size; i++) 
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//}

//3
bool isPrime(int num) 
{
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0) return false;
    }
    return true;
}

int countPrimes(const int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++) 
    {
        if (isPrime(arr[i]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    const int size = 6;
    int arr[size] = { 3, 4, 5, 6, 7, 8 };

    int primeCount = countPrimes(arr, size);
    cout << "Кількість простих чисел у масиві: " << primeCount << endl;
}
