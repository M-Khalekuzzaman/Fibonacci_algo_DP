#include<bits/stdc++.h>
using namespace std;

int arr[101] = {0};
int fibo(int n)
{
    if(n <=2) return 1;
    if(arr[n] != 0) return arr[n];
    arr[n] = fibo(n-1) + fibo(n-2);
    return arr[n];


}
int main()
{
    cout<<fibo(3)<<endl;
    cout<<fibo(5)<<endl;
    cout<<fibo(7)<<endl;


    return 0;
}
