#include <check.h>
#include <stdlib.h>
#include "../src/main.h"

START_TEST(test_is_negative)
{
    ck_assert_int_eq(is_negative(2), 0);    
    ck_assert_int_eq(is_negative(-1), 1);    
}
END_TEST

Suite *is_negative_suite() {
    Suite *s;
    TCase *tc_core;

    s = suite_create("Is negative");

    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_is_negative);
    suite_add_tcase(s, tc_core);

    return s;
}

int main() {
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = is_negative_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
