// ·´×ª×Ö·û´®

char* solve(char* str)
{
    int len = strlen(str);
    int mid = len / 2;
    int i = 0;
    for (i = 0; i < mid; i++)
    {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    return str;
}