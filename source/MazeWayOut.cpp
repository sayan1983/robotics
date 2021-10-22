//
//  MazeWayOut.cpp
//  robo
//
//  Created by Sayan Ghosh on 10/14/21.
//

#include "MazeWayOut.hpp"

bool MazeWayOut::DoOperation(int x,
                             int y,
                             vector<vector<bool>>& visited,
                             vector<vector<bool>>& path) {
    // If you reached the end
    if (x == m_endx && y == m_endy) {
        return true;
    }
    
    if (m_input[x][y] || visited[x][y]) {
        return false;
    }
    
    // If you are on a wall or already were here
    visited[x][y] = true;
    
    // Checks if not on left edge
    if (x != 0) {
        // Recalls method one to the left
        if (DoOperation(x-1, y, visited, path)) {
            path[x][y] = true; // Sets that path value to true;
            return true;
        }
    }
    
    // Checks if not on right edge
    if (x != m_endx) {
        // Recalls method one to the right
        if (DoOperation(x+1, y, visited, path)) {
            path[x][y] = true;
            return true;
        }
    }
    
    // Checks if not on top edge
    if (y != 0)  {
        // Recalls method one up
        if (DoOperation(x, (y-1), visited, path)) {
            path[x][y] = true;
            return true;
        }
    }
    
    // Checks if not on bottom edge
    if (y != m_endy) {
        // Recalls method one down
        if (DoOperation(x, (y+1), visited, path)) {
            path[x][y] = true;
            return true;
        }
    }
    
    return false;
}

vector<pair<int,int>> MazeWayOut::CheckWayOut(vector<vector<int>> input) {
    vector<pair<int,int>> result;
    
    int rows = input.size();
    int cols = 0;
    if (rows > 0) {
        cols = input[0].size();
    }
    m_input = input;
    m_endx = rows - 1;
    m_endy = cols - 1;
    
    //List for visited node
    vector<vector<bool>> visited( rows , vector<bool> (cols, false));
    //marking the valid path
    vector<vector<bool>> path( rows , vector<bool> (cols, false));
    
    //checking for first empty cell.
    vector<int> temp = CheckEmptySpace(input[0]);
    int startX = 0;
    int startY = 0;
    
    //if empty list mean no empty cell
    if (temp.size() == 0) {
        return result;
    } else {
        //Start from first location of empty location
        startX = 0;
        startY = temp[startX];
    }
    
    bool isValid = DoOperation(startX, startY, visited, path);
    
    //checking if we have valid path
    if (isValid) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (path[i][j]) {
                    result.push_back(make_pair(i,j));
                }
            }
        }
    } else {
        cout << "No Valid path found" << endl;
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
