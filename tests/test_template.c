#include <stdlib.h>
#include <stdint.h>
#include <check.h>
#include "../src/lib/includes/template.h"


START_TEST(test_template_my_add) {
  ck_assert_int_eq(my_add(5,5), 10);
}
END_TEST

Suite * make_template_creation_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("Template Creation Test Suite");

  /* Creation test case */
  tc_core = tcase_create("Test Cases");

  tcase_add_test(tc_core, test_template_my_add);

  suite_add_tcase(s, tc_core);

  return s;
}

int main(void) {
  int number_failed;
  SRunner *sr;

  sr = srunner_create(make_template_creation_suite());
  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_set_log (sr, "test.log");
  srunner_set_xml (sr, "test.xml");
  srunner_run_all(sr, CK_VERBOSE);

  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);
  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
