#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(VectorEleSumTest1, VectorEleSumTest1) {
  Solution solution;

  vector<int> input1 = {3,7,11,15};
  int Sum1 = 10;


  vector<vector<int>> result1= {{0,1}};
 
  EXPECT_EQ(solution.VectorEleSum(input1, Sum1), result1);
}

TEST(VectorEleSumTest2, VectorEleSumTest2){
  Solution solution;

  vector<int> input2 = {3,7,11,15};
  int Sum2 = 180;

  vector<vector<int>> result2= {};
 
  EXPECT_EQ(solution.VectorEleSum(input2, Sum2), result2);
}

TEST(VectorEleSumTest3, VectorEleSumTest3){
  Solution solution;

  vector<int> input3 = {1,4,3,2};
  int Sum3 = 5;

  vector<vector<int>> result3= {{0,1},{3,2}};
 
  EXPECT_EQ(solution.VectorEleSum(input3, Sum3), result3);
}

TEST(VectorEleSumTest4, VectorEleSumTest4){
  Solution solution;

  vector<int> input4 = {1,6,3,4,2,5,-1,8};
  int Sum4 = 7;

  vector<vector<int>> result4= {{ 6, 7 }, { 0, 1 }, { 4, 5 }, { 2, 3 }};
 
  EXPECT_EQ(solution.VectorEleSum(input4, Sum4), result4);
}