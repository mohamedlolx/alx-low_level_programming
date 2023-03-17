##include <stdio.h>
int main()
{
    for(int x = 'A'; x <= 'z'; x++) // Notice (x <= 'Z') > > (x <= 'z')
    {
        x = tolower(x);
        putchar("%d\n", x);
    }
    return 0;
}
