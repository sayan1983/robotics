//
//  MazeHallway.cpp
//  Robo
//
//  Created by Sayan Ghosh on 10/13/21.
//

#include "MazeHallway.hpp"

#include <iostream>

using namespace std;

vector<int> MazeHallway::CheckHallway(vector<vector<int>> input) {
    
    int rows = input.size();
    int cols = input[0].size();
    
    vector<int> result (cols, 0);
    
    vector<int> temp;
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            if (input[row][col] == 1) {
                result[col] = 1;
            }
        }
    }

    return result;
}
