// ÅĞ¶Ï»ØÎÄ

bool judge(char* str ) 
{
    int i,j;
    for (i = 0,j = strlen(str) - 1;i<=j&&str[i]==str[j];i++,j--);
    
    if (i < j)  // str[i] £¡=str[j]
        return false;
    else
        return true;
}