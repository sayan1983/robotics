//
//  MazeWayOut.hpp
//  robo
//
//  Created by Sayan Ghosh on 10/14/21.
//

#ifndef MazeWayOut_hpp
#define MazeWayOut_hpp

#include "MazeHallway.hpp"

#include <vector>
#include <iostream>

using namespace std;

class MazeWayOut : public MazeHallway {
public:
    MazeWayOut() {}
    
    ~MazeWayOut() {}
    
    vector<pair<int,int>> CheckInOutPoint(vector<vector<int>>);
    
protected:
    vector<pair<int,int>> CheckWayOut(vector<vector<int>>);
};

#endif /* MazeWayOut_hpp */
