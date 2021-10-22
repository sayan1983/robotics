//
//  MazeWindPathWithDeadEnd.cpp
//  robo
//
//  Created by Sayan Ghosh on 10/14/21.
//

#include "MazeWindPathWithDeadEnd.hpp"

vector<pair<int,int>> MazeWindPathWithDeadEnd::CheckWindPathWithDeadEnds(vector<vector<int>>& input) {
    
    vector<pair<int,int>> result = CheckWayOut(input);
    
    return result;
}
