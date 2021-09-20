// 最大公约数

int gcd(int a, int b)
{
    if (a > b)                                 // 从b向下找
    {
        int i = b;
        for (i = b; i >= 0; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                return i;
            }
        }

    }
    else if (a < b)                           // 从a向下找
    {
        int i = a;
        for (i = a; i >= 0; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                return i;
            }
        }

    }
    else                                      // 从a 或 b 向下找
    {
        int i = a;
        while (a % i != 0)
        {
            i--;
        }
        return i;
    }
    return 1;
}