#include <iostream>

using namespace std;

int maxsubseqsum1(int a[], int n)
{
    int sum, maxsum = 0;
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            sum = 0;
            for (k = i; k <= j; k++)
            {
                sum += a[k];
            }
            if (sum > maxsum)
            {
                maxsum = sum;
            }
        }
    }
    return maxsum;
}

int maxsubseqsum2(int a[], int n)
{
    int sum, maxsum = 0;
    int i, j;
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = i; j < n; j++)
        {
            sum += a[j];
            //如果刚得到的sum大于maxsum则更新结果
            if (sum > maxsum)
            {
                maxsum = sum;
            }
        }
    }
    return maxsum;
}

int maxsubseqsum4(int a[], int n)
{
    int sum = 0, maxsum = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > maxsum)
        {
            maxsum = sum;
        }
        else if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxsum;
}

int main()
{
    //给定N个整数的序列{A1,A2,A3,A4,......AN};
    //求其中某个连续序列的最大值
    int a[]{9, -2, -7, 2, 16, 1};
    int response1 = maxsubseqsum1(a, 6);
    int response2 = maxsubseqsum2(a, 6);
    int response4 = maxsubseqsum4(a, 6);
    cout << response1 << endl;
    cout << response2 << endl;
    cout << response4 << endl;
    cin.get();
    return 0;
}