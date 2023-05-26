#include <iostream>
using namespace std;
void insertionSort(int a[],int n){
    int i,j;
    for(i = 2 ;i <= n;i++){
            if(a[i]<a[i-1]){
                a[0] = a[i];
                for(j = i-1;a[0]<a[j];j--){ //注意判断条件是啊a[0]<a[j]而不是a[i]<a[j]因为马上i的位置会被挤掉
                    a[j+1] = a[j];
                }
                a[j+1] = a[0];
            }
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
    insertionSort(a,count);
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