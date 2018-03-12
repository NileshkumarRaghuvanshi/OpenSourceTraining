//#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../project/find_three_number_avg.h"
#include "../project/find_two_number_sum.h"

TEST_CASE( "Average 3 numbers", "[find_three_number_average]" ) {
    REQUIRE( find_three_number_average(15,15,15) == 15 );
    REQUIRE( find_three_number_average(15,16,17) == 16 );
}

TEST_CASE( "sum 2 numbers", "[find_two_number_sum]" ) {
    REQUIRE( find_two_number_sum(15,15) == 30 );
    REQUIRE( find_two_number_sum(15,17) == 32 );
}


/*
TEST_CASE( "Average 3 numbers to fail", "[find_three_number_average]" ) {
    REQUIRE( find_three_number_average(15,15,15) == 17 );
    REQUIRE( find_three_number_average(15,16,17) == 18 );
}
*/
