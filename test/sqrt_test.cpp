#include "sqrt.cpp"
#include <gtest/gtest.h>
#include <vector>

TEST(SquareRootTest, PositiveNos)
{
    ASSERT_EQ(6, squareRoot(36.0));
    ASSERT_EQ(18.0, squareRoot(324.0));
    ASSERT_EQ(25.4, squareRoot(645.16));
    ASSERT_EQ(0, squareRoot(0.0));
}

TEST(SquareRootTest, NegativeNos)
{
    ASSERT_EQ(-1.0, squareRoot(-15.0));
    ASSERT_EQ(-1.0, squareRoot(-0.2));
}

//Failing test
TEST(LengthTest, LengthEqual) 
{   
    std::vector<int> x = {1, 2, 3};
    std::vector<int> y = {2, 4, 6, 8, 10};
    ASSERT_EQ(x.size(), y.size()) << "unequal length"; 
}

//FizzBuzzTests
std::string fizzBuzz(int value){
    if ( ((value % 3) == 0 )&&(value % 5 == 0))
        return "FizzBuzz";
    if ( (value % 3) == 0)
        return "Fizz";
    if ( value % 5 == 0)
        return "Buzz";
    return std::to_string(value);
}

void checkFizzBuzz( int value, std::string expectedResult ){
    std::string result = fizzBuzz(value);
    ASSERT_STREQ(expectedResult.c_str(), result.c_str());
}

TEST(FizzBuzzTests, returns1With1PassedIn){
    checkFizzBuzz(1, "1");
}

TEST(FizzBuzzTests, returns2With2PassedIn){
    checkFizzBuzz(2, "2");
}

TEST(FizzBuzzTests, returnsFizzWith3PassedIn){
    checkFizzBuzz(3, "Fizz");
}

TEST(FizzBuzzTests, returnsBuzzWith5PassedIn){
    checkFizzBuzz(5, "Buzz");
}

TEST(FizzBuzzTests, returnsFizzWith6PassedIn){
    checkFizzBuzz(6, "Fizz");
}

TEST(FizzBuzzTests, returnsBuzzWith10PassedIn){
    checkFizzBuzz(10, "Buzz");
}

TEST(FizzBuzzTests, returnsFizzBuzzWith15PassedIn){
    checkFizzBuzz(15, "FizzBuzz");
}


int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
} 


