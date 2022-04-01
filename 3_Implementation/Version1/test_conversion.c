#include "unity.h"

extern void automated_test_kilograms_grams();
extern void automated_test_celsius_farenheit();
extern void automated_test_litres_millilitres();
extern void automated_test_kilometers_meters();
extern void automated_test_meters_centimeters();
extern void automated_test_inches_centimeters();
extern void automated_test_squareyards_squarefeets();
void setUp(void)
{
}

void tearDown(void)
{
}

int main(void)
{
    UnityBegin(NULL);
    RUN_TEST(automated_test_kilograms_grams);
    RUN_TEST(automated_test_celsius_farenheit);
    RUN_TEST(automated_test_litres_millilitres);
    RUN_TEST(automated_test_kilometers_meters);
    RUN_TEST(automated_test_meters_centimeters);
    RUN_TEST(automated_test_inches_centimeters);
    RUN_TEST(automated_test_squareyards_squarefeets);
    return (UnityEnd());
}
