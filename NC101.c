//È±Ê§Êý×Ö

int solve(int* a, int aLen ) 
{
    int left = 0;
    int right = aLen - 1;
    
    while (left <= right)
    {
        int mid = (left + right)/2;
        
        if (mid == a[mid])           // ËÑË÷·¶Î§¿Ï¶¨ÔÚmid ÓÒ±ß
        {
            left = mid + 1;
        }
        else if (mid < a[mid])
        {
            right = mid -1 ;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}