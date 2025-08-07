int atoi2(char *str)
{
    int result;
    int i;

    i = 0;
    result = 0;
    if (str[i] == '\0') 
        return 0;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return result;
}