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
    
private:
    bool DoOperation(int x,
                     int y,
                     vector<vector<bool>>& visited,
                     vector<vector<bool>>& path);
    vector<vector<int>>  m_input;
    int m_endx;
    int m_endy;
};

#endif /* MazeWayOut_hpp */
