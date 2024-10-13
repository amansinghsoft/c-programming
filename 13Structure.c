#include <stdio.h>

typedef struct Date
{
    int dd;
    int mm;
    int yyyy;
}DT;

int compare(DT d1, DT d2);
int main()
{
    DT d1 = {12, 6, 2016};
    DT d2 = {12, 6, 2017};

    printf("%d", compare(d1, d2));

    return 0;
}
int compare(DT d1, DT d2)
{
    if ((d1.dd == d2.dd) && (d1.mm == d2.mm) && (d1.yyyy == d2.yyyy))
    {
        return 0;
    }
    if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}