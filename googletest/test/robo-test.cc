
#include "MazeSingleSearch.hpp"
#include "MazeHallway.hpp"
#include "gtest/gtest.h"
namespace {
// In this example, we test the MyString class (a simple string).

TEST(MazeSingleSearch, InputData) {
    MazeSingleSearch obj;
    
    vector<int> input{1,0,1,1,1,1,1};
    vector<int> output;
    output = obj.CheckEmptySpace(input);
    int out_size = output.size();
    EXPECT_EQ(out_size, 1);
    EXPECT_EQ(output[out_size-1], 1);
    EXPECT_NE(output[out_size-1], 5);
    
    vector<int> input1{1,0,1,0,1,0,1};
    vector<int> output1;
    output1 = obj.CheckEmptySpace(input1);
    out_size = output1.size();
    EXPECT_EQ(out_size, 3);
    EXPECT_EQ(output1[0], 1);
    EXPECT_EQ(output1[1], 3);
    EXPECT_EQ(output1[2], 5);
    EXPECT_NE(output1[out_size-1], 6);
}
    
TEST(MazeSingleSearch, InputData_Zero) {
    MazeSingleSearch obj;
        
    vector<int> input{};
    vector<int> output;
    output = obj.CheckEmptySpace(input);
    int out_size = output.size();
    EXPECT_EQ(out_size, 0);
}
    
TEST(MazeSingleSearch, InputData_NoSpace) {
    MazeSingleSearch obj;
        
    vector<int> input{1,1,1,1,1,1,1,1,1,1};
    vector<int> output;
    output = obj.CheckEmptySpace(input);
    int out_size = output.size();
    EXPECT_EQ(out_size, 0);
}
    
TEST(MazeHallWay, InputData) {
    MazeHallway obj;
    vector<vector<int>> input1 {{1,1,1,0,1}, {1,1,1,0,1}, {1,1,1,0,1}, {1,1,1,0,1}, {1,1,1,0,1}};
    vector<vector<int>> input2 {{1,1,1,0,1}, {1,1,1,0,1}, {1,0,1,1,1}, {1,1,1,1,0}, {1,1,1,0,1}};
    vector<vector<int>> input3 {{1,0,1,0,1}, {1,0,1,0,1}, {1,0,1,0,1}, {1,0,1,0,0}, {1,0,1,0,1}};
    
    vector<int> output;
    output = obj.CheckHallway(input1);
    EXPECT_EQ(output[0], 1);
    EXPECT_EQ(output[1], 1);
    EXPECT_EQ(output[2], 1);
    EXPECT_EQ(output[3], 0);
    EXPECT_EQ(output[4], 1);
    
    output = obj.CheckHallway(input2);
    EXPECT_EQ(output[0], 1);
    EXPECT_EQ(output[1], 1);
    EXPECT_EQ(output[2], 1);
    EXPECT_EQ(output[3], 1);
    EXPECT_EQ(output[4], 1);
    
    output = obj.CheckHallway(input3);
    EXPECT_EQ(output[0], 1);
    EXPECT_EQ(output[1], 0);
    EXPECT_EQ(output[2], 1);
    EXPECT_EQ(output[3], 0);
    EXPECT_EQ(output[4], 1);
}
    
TEST(MazeHallWay, InputData_Zero) {
    MazeHallway obj;
    vector<vector<int>> input1 {{}, {}, {}, {}, {}};
        
    vector<int> output;
    output = obj.CheckHallway(input1);
    EXPECT_EQ(output.size(), 0);
}

}  // namespace
