//
//  MazeWindPathWithDeadEnd.hpp
//  robo
//
//  Created by Sayan Ghosh on 10/14/21.
//

#ifndef MazeWindPathWithDeadEnd_hpp
#define MazeWindPathWithDeadEnd_hpp

#include "MazeWindPath.hpp"

#include <vector>
#include <iostream>

using namespace std;

class MazeWindPathWithDeadEnd : public MazeWindPath {
public:
    MazeWindPathWithDeadEnd() {}
    
    ~MazeWindPathWithDeadEnd() {}
    
    vector<pair<int,int>> CheckWindPathWithDeadEnds(vector<vector<int>>& input);
};

#endif /* MazeWindPathWithDeadEnd_hpp */
