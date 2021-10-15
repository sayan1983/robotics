//
//  Maze.cpp
//  Robo
//
//  Created by Sayan Ghosh on 10/13/21.
//

#include "MazeSingleSearch.hpp"
#include <iostream>

using namespace std;

vector<int> MazeSingleSearch::CheckEmptySpace(vector<int> input) {
    vector<int> result;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == 0){
            result.push_back(i);
        }
    }
    return result;
}
