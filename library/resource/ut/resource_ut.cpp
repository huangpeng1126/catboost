#include <library/resource/resource.h>
#include <library/unittest/registar.h>

Y_UNIT_TEST_SUITE(TestResource) {
    Y_UNIT_TEST(Test1) {
        UNIT_ASSERT_VALUES_EQUAL(NResource::Find("/x"), "na gorshke sidel korol\n");
    }
}
