//
//  MazeHallway.hpp
//  Robo
//
//  Created by Sayan Ghosh on 10/13/21.
//

#ifndef MazeHallway_hpp
#define MazeHallway_hpp

#include "MazeSingleSearch.hpp"
#include <vector>

using namespace std;

class MazeHallway : public MazeSingleSearch {
public:
    MazeHallway() {}
    
    ~MazeHallway() {}
    
    vector<int> CheckHallway(vector<vector<int>>);
};

#endif /* MazeHallway_hpp */
