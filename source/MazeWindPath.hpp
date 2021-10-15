//
//  MazeWindPath.hpp
//  robo
//
//  Created by Sayan Ghosh on 10/14/21.
//

#ifndef MazeWindPath_hpp
#define MazeWindPath_hpp

#include "MazeWayOut.hpp"

#include <vector>
#include <iostream>

using namespace std;

class MazeWindPath : public MazeWayOut {
public:
    MazeWindPath() {}
    
    ~MazeWindPath() {}
    
    vector<pair<int,int>> CheckWindPath(vector<vector<int>>);
};

#endif /* MazeWindPath_hpp */
