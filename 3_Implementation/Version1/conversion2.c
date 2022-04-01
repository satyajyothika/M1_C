#include <stdio.h>
#include "unity.h"
#include "conversion.h"

float squareyards_squarefeets(char c, float n)
{
    if(c=='y')
    {
        float feet;
        feet = n*9;
        return feet;
    }
    if(c=='f')
    {
        float yard;
        yard = n/9;
        return yard;
    }
}

float inches_centimeters(char c, float n)
{
    if(c=='i')
    {
        float centi;
        centi = n*2.54;
        return centi;
    }
    if(c=='c')
    {
        float inch;
        inch = n/2.54;
        return inch;
    }
}

float celsius_farenheit(char c, float t)
{
    if(c=='c')
    {
        float faren;
        faren = (t*1.8)+32;
        return faren;
    }
    if(c=='f')
    {
        float cel;
        cel = (t-32)/1.8;
        return cel;
    }
}

void automated_test_squareyards_squarefeets()
{
    TEST_ASSERT_EQUAL(1026, squareyards_squarefeets('y', 114));
    TEST_ASSERT_EQUAL(150, squareyards_squarefeets('f', 1350));        
}

void automated_test_inches_centimeters()
{
    TEST_ASSERT_EQUAL(127, inches_centimeters('i', 50));
    TEST_ASSERT_EQUAL(23, inches_centimeters('c', 58.42));      
}

void automated_test_celsius_farenheit()
{
    TEST_ASSERT_EQUAL(-22.0, celsius_farenheit('c', -30));
    TEST_ASSERT_EQUAL(-50.0, celsius_farenheit('f', -58));        
}

#if 0
int main()
{
    automated_test_squareyards_squarefeets();
    automated_test_inches_centimeters();
    automated_test_celsius_farenheit();
}
#endif
