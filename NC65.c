// 斐波那契数列 (非递归)

int Fibonacci(int n)
{
    int b = 0;
    int a = 1;
    if (0 == n)
        return b;
    if (1 == n)
        return a;
    int c = 1;
    int i = 2;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        b = a;
        a = c;
    }
    return c;
}