#include <stdio.h>
#include "unity.h"
#include "conversion.h"

float kilograms_grams(char c, float n)
{
    if(c=='k')
    {
       float gram;
       gram = n*1000;
       return gram;
    }
    if(c=='g')
    {
        float kilo;
        kilo = n*0.001;
        return kilo;
    }
    
}

float litres_millilitres(char c, float n)
{
    if(c=='l')
    {
        float milli;
        milli = n*1000;
        return milli;
    }
    if(c=='m')
    {
        float lit;
        lit = n/1000;
        return lit;
    }
}

float kilometers_meters(char c, float n)
{
    if(c=='k')
    {
        float meter;
        meter = n*1000;
        return meter;
    }
    if(c=='m')
    {
        float kilo;
        kilo = n/1000;
        return kilo;
    }
}

float meters_centimeters(char c, float n)
{
    if(c=='m')
    {
        float centi;
        centi = n*100;
        return centi;
    }
    if(c=='c')
    {
        float meter;
        meter = n/100;
        return meter;
    }
}

void automated_test_kilograms_grams()
{
    TEST_ASSERT_EQUAL(600, kilograms_grams('k', 0.6));
    TEST_ASSERT_EQUAL(80, kilograms_grams('g', 80000));
    TEST_ASSERT_EQUAL(700, kilograms_grams('k', 0.7));
    TEST_ASSERT_EQUAL(20, kilograms_grams('k', 0.02));
    TEST_ASSERT_EQUAL(5, kilograms_grams('g', 5000));
}

void automated_test_litres_millilitres()
{
    TEST_ASSERT_EQUAL(500, litres_millilitres('l', 0.5));
    TEST_ASSERT_EQUAL(2, litres_millilitres('m', 2000)); 
    TEST_ASSERT_EQUAL(40, litres_millilitres('l',0.04));
    TEST_ASSERT_EQUAL(30, litres_millilitres('m', 30000));
    TEST_ASSERT_EQUAL(8000, litres_millilitres('l',8));     
}

void automated_test_kilometers_meters()
{
    TEST_ASSERT_EQUAL(3000, kilometers_meters('k', 3));
    TEST_ASSERT_EQUAL(60, kilometers_meters('m', 60000));  
    TEST_ASSERT_EQUAL(900, kilometers_meters('k',0.9));
    TEST_ASSERT_EQUAL(7, kilometers_meters('m', 7000));
    TEST_ASSERT_EQUAL(5, kilometers_meters('k', 0.005));   
}

void automated_test_meters_centimeters()
{
    TEST_ASSERT_EQUAL(400, meters_centimeters('m', 4));
    TEST_ASSERT_EQUAL(90, meters_centimeters('c', 9000));       
    TEST_ASSERT_EQUAL(50, meters_centimeters('m', 0.5));
    TEST_ASSERT_EQUAL(2, meters_centimeters('c', 200));
    TEST_ASSERT_EQUAL(8000, meters_centimeters('m', 80));

}

#if 0
int main()
{
    automated_test_kilograms_grams();
    automated_test_litres_millilitres();
    automated_test_kilometers_meters();
    automated_test_meters_centimeters();
    return 0;
}
#endif
