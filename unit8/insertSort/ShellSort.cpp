#include <iostream>
using namespace std;
void ShellSort(int a[], int n)
{
    int i, j, d;
    for (d = n / 2; d >= 1; d /= 2)
    {
        for (i = d + 1; i <= n; i++)
        {
            if (a[i] < a[i - d])
            {
                a[0] = a[i];
                for (j = i - d; j > 0 && a[i] < a[j]; j -= d)
                {
                    a[j + d] = a[j];
                }
                a[j + d] = a[0];
            }
        }
    }
}
void test()
{
    /*
    test data:
    50 62 54 875 42 36 5 7 8 1 999
    */
    int i = 1;
    int e = 0;
    int count = 0;
    int a[10];
    cin >> e;
    while (e != 999 && i <= 9)
    {
        a[i] = e;
        count++;
        i++;
        cin >> e;
    }
    ShellSort(a, count);
    i = 1;
    while (i <= count)
    {
        cout << a[i] << " ";
        i++;
    }
}
int main()
{
    test();
    system("pause");
    return 0;
}