// ���Լ��

int gcd(int a, int b)
{
    if (a > b)                                 // ��b������
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
    else if (a < b)                           // ��a������
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
    else                                      // ��a �� b ������
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