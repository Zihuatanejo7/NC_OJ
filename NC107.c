//Ñ°ÕÒ·åÖµ

int solve(int* a, int aLen ) 
{
    int peak = 0;
    
    int i = 0;
    for (i = 0;i<aLen-1;i++)
    {
        if (abs(a[i+1] - a[i]) > peak)
        {
            peak = abs(a[i+1] - a[i]);
        }
    }
    if (abs(a[aLen-1] -a[0]) >peak)
    {
        return abs(a[aLen-1] -a[0]);
    }
    else
        return peak;
}