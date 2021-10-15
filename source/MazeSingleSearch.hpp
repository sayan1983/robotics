//
//  Maze.hpp
//  Robo
//
//  Created by Sayan Ghosh on 10/13/21.
//

#ifndef MazeSingleSearch_hpp
#define MazeSingleSearch_hpp

#include <stdio.h>
#include "IMaze.hpp"

#include <vector>

using namespace std;

class MazeSingleSearch : public IMaze {
public:
    MazeSingleSearch() {}
    
    ~MazeSingleSearch() {}
    
    vector<int> CheckEmptySpace(vector<int>);
};

#endif /* Maze_hpp */
