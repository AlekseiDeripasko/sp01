#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_atoi(const char *str)
{
    int result = 0;
    int sign = 1;

    while (mx_isspace(*str))
    {
        str++;
    }

    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if (*str == '+')
    {
        str++;
    }

    while (mx_isdigit(*str))
    {    
        result *= 10;
        result += *str - '0';
        
        str++;
    }

    return result * sign;
}


bool mx_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return true;
    return false;
}

bool mx_isspace(char c)
{
    if (c == ' ' || c == '\t' || c == '\n' || c == '\v' 
                            || c ==  '\f' || c == '\r')
        return true;
    return false;
}



