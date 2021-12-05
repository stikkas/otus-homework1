#define BOOST_TEST_MODULE homework1_test_module

#include "lib.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(homework1_test_suite)

BOOST_AUTO_TEST_CASE(test_version)
{
    BOOST_CHECK(version() > 0);
}

BOOST_AUTO_TEST_CASE(test_message)
{
    BOOST_CHECK(message() == "Hello, World!");
}
BOOST_AUTO_TEST_SUITE_END()
