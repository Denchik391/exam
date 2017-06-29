#include <stdio.h>
#include <stdlib.h>
#include "ctest.h"
#include "quadratic_equation.h"

CTEST(Input_data, test1)
{
    ASSERT_EQUAL(-5,coefficientCB(1, 5));
}

CTEST(Input_data, test2)
{
    ASSERT_EQUAL(3,coefficientCB(2,-6));
}

CTEST(Input_data, test3)
{
    ASSERT_EQUAL(3,coefficientCB(-3,9));
}

CTEST(Input_data, test4)
{
    ASSERT_EQUAL(-2,coefficientCB(6,12));
}

CTEST(Input_data, test5)
{
    ASSERT_EQUAL(5,coefficientCB(5,-25));
}

CTEST(Input_data2, test1)
{
    ASSERT_EQUAL(5,discriminant(1,5,5));
}

CTEST(Input_data2, test2)
{
    ASSERT_EQUAL(-96,discriminant(5,-2,5));
}

CTEST(Input_data2, test3)
{
    ASSERT_EQUAL(52,discriminant(-1,6,4));
}

CTEST(Input_data2, test4)
{
    ASSERT_EQUAL(24,discriminant(5,8,2));
}

CTEST(Input_data2, test5)
{
    ASSERT_EQUAL(-3,discriminant(1,1,1));
}


CTEST(Input_data3, test1)
{
    ASSERT_EQUAL(-1,findX(5,10));
}

CTEST(Input_data3, test2)
{
    ASSERT_EQUAL(2,findX(-2,8));
}

CTEST(Input_data3, test3)
{
    ASSERT_EQUAL(2,findX(3,-12));
}

CTEST(Input_data3, test4)
{
    ASSERT_EQUAL(12,findX(1,-24));
}

CTEST(Input_data3, test5)
{
    ASSERT_EQUAL(-2,findX(6,24));
}

CTEST(Input_data4, test1)
{
    ASSERT_EQUAL(2,findX2(1,-6,4));
}

CTEST(Input_data4, test2)
{
    ASSERT_EQUAL(-3,findX2(1,3,9));
}

CTEST(Input_data4, test3)
{
    ASSERT_EQUAL(1,findX2(5,-14,16));
}

CTEST(Input_data4, test4)
{
    ASSERT_EQUAL(-2,findX2(5,15,25));
}

CTEST(Input_data4, test5)
{
    ASSERT_EQUAL(5,findX2(2,-26,36));
}

