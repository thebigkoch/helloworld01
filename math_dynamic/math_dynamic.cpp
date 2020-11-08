#include <math_static.h>

#include "include/math_dynamic.h"

namespace thebigkoch
{
int math_dynamic::sum(int a, int b)
{
    return math_static::sum(a,b);
}

int math_dynamic::difference( int a, int b )
{
    return math_static::difference(a,b);
}

int math_dynamic::product( int a, int b )
{
    return a * b;
}

int math_dynamic::quotient( int a, int b )
{
    return a / b;
}
}
