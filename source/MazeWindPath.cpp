//
//  MazeWindPath.cpp
//  robo
//
//  Created by Sayan Ghosh on 10/14/21.
//

#include "MazeWindPath.hpp"

vector<pair<int,int>> MazeWindPath::CheckWindPath(vector<vector<int>> input) {
    vector<pair<int,int>> result = CheckWayOut(input);
    
    return result;
}
