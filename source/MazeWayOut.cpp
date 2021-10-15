//
//  MazeWayOut.cpp
//  robo
//
//  Created by Sayan Ghosh on 10/14/21.
//

#include "MazeWayOut.hpp"


vector<pair<int,int>> MazeWayOut::CheckWayOut(vector<vector<int>> input) {
    vector<pair<int,int>> result;
    int rows = input.size();
    int cols = 0;
    if (rows > 0) {
        cols = input[0].size();
    }
    bool bFound = true;
    int currentRow = 0;
    
    for (int i = 0; i < input.size() && bFound; ++i) {
        if (currentRow != i) {
            bFound = false;
            break;
        }
        vector<int> temp = CheckEmptySpace(input[i]);
        if (temp.size() == 0) {
            bFound = false;
            break;
        }
        
        int prev_space = temp[0] - 1;
        
        for (auto space : temp) {
            if ((prev_space + 1) == space) {
                result.push_back(make_pair(i,space));
            } else {
                bFound = false;
                break;
            }
            
            if ((i+1) < rows && input[i+1][space] == 0) {
                currentRow++;
                break;
            }
            prev_space = space;
        }
    }
    if (bFound ==  false) {
        result.clear();
    }
    
    return result;
}

vector<pair<int,int>> MazeWayOut::CheckInOutPoint(vector<vector<int>> input) {
    vector<pair<int,int>> data = CheckWayOut(input);
    
    vector<pair<int,int>> result;
    int size = data.size();
    if (size > 0) {
        result.push_back(data[0]);
    }
    
    if (size > 1) {
        result.push_back(data[size-1]);
    }
    
    return result;
}
