#include <iostream>
using namespace std;
void ShellSort(int a[] , int n) {
    int i,j,low,high,mid;
    for(i = 2 ; i <= n ; i++) { 
        a[0] = a[i];
        low = 1;
        high = i-1;//别忘了初始化low和high的值
        while (low<=high) {
            mid = ( low + high ) / 2;
            if(a[0] >= a[mid]) low = mid + 1;
                else high = mid - 1;
        }
        for(j = i - 1 ; j >= low ; j--) {
            a[j + 1] = a[j];
        }
        a[low] = a[0];
    }
} 
void test(){
    /*
    test data: 
    50 62 54 875 42 36 5 7 8 1 999 
    */
    int i = 1;
    int e = 0;
    int count = 0;
    int a[10];
    cin>>e;
    while (e != 999 && i <= 9)
    {
        a[i] = e;
        count++;
        i++;
        cin>>e;
    }
    ShellSort(a,count);
    i = 1;
    while (i<=9)
    {
        cout<<a[i]<<" ";
        i++;
    }
}
int main(){
    test();
    system("pause");
    return 0;
}