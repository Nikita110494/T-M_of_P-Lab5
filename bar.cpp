#include "catch.hpp"

int bar(int a,int b){

  return a+b;
}

TEST_CASE("sum","[bar]"){
  REQUIRE( bar(1,2) == 3 );
  REQUIRE( bar(2,3) == 4 );
  
}
