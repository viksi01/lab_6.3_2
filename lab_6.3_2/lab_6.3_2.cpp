#include <iostream>
#include <time.h>
using namespace std;

void Show(int* a, const int n, int i)
{
    a[i] = -100 + rand() % (-100 - 100) + 1;
    if (i < n - 1)
        Show(a, n, i + 1);
}

void Print(int* a, const int n, int i)
{
    cout << a[i] << " ";
    if (i < n - 1)
        Print(a, n, i + 1);
    else
        cout << endl;
}
int Number(int* a, const int n, int i, int num)
{
    if (a[i] > 0)
    num += 1;
    if (i < n)
    {
        return Number(a, n, i + 1, num);
    }
    else {
        return num;
    }
}
template <typename T>
void ShowT (T* a, const int n, int i)
{
    a[i] = -100 + rand() % (-100 - 100) + 1;
    if (i < n - 1)
        Show(a, n, i + 1);
}

template <typename T>
void PrintT (T* a, const int n, int i)
{
    cout << a[i] << " ";
    if (i < n - 1)
        Print(a, n, i + 1);
    else
        cout << endl;
}

template <typename T>
int NumberT (T* a, const int n, int i, int num)
{
    if (a[i] > 0)
        num += 1;
    if (i < n)
    {
        return Number(a, n, i + 1, num);
    }
    else {
        return num;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 20;
    int a[n];
    Show(a, n, 0);
    cout << "a {"; Print(a, n, 0); cout << "}" << endl;
    cout << "Number of positive = " << Number(a, n, 0, 0) << endl;

    ShowT(a, n, 0);
    cout << "a {"; PrintT(a, n, 0); cout << "}" << endl;
    cout << "Number of positive T = " << Number(a, n, 0, 0);
}
