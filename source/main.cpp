//
//  main.cpp
//  Robo
//
//  Created by Sayan Ghosh on 10/13/21.
//

#include <stdio.h>
#include "MazeSingleSearch.hpp"
#include "MazeHallway.hpp"

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 4) {
        std::cerr << "Usage: " << argv[0] << "--story <number> --scenario <number>" << std::endl;
        return 1;
    }
    std::string story;
    std::string scenario;
    for (int i = 1; i < argc; ++i) {
        if (std::string(argv[i]) == "--story") {
            if (i + 1 < argc) { // Make sure we aren't at the end of argv!
                story = argv[++i]; // Increment 'i' so we don't get the argument as the next argv[i].
            } else { // Uh-oh, there was no argument to the story option.
                std::cerr << "--story option requires one argument." << std::endl;
                return 1;
            }
        } else if (std::string(argv[i]) == "--scenario") {
            if (i + 1 < argc) { // Make sure we aren't at the end of argv!
                scenario = argv[++i]; // Increment 'i' so we don't get the argument as the next argv[i].
            } else { // Uh-oh, there was no argument to the scenario option.
                std::cerr << "--scenario option requires one argument." << std::endl;
                return 1;
            }
        }
    }
    
    if (story == "1") {
        MazeSingleSearch obj;
        vector<int> input{1,0,1,1,1,1,1};
        vector<int> output;
        output = obj.CheckEmptySpace(input);
        for (int pos : output) {
            cout << "Blank positions " << pos << " " <<endl;
        }
    } else if (story == "2") {
        MazeHallway obj;
        bool isHallway = false;
        vector<vector<int>> input1 {{1,1,1,0,1}, {1,1,1,0,1}, {1,1,1,0,1}, {1,1,1,0,1}, {1,1,1,0,1}};
        vector<vector<int>> input2 {{1,1,1,0,1}, {1,1,1,0,1}, {1,0,1,1,1}, {1,1,1,1,0}, {1,1,1,0,1}};
        vector<vector<int>> input3 {{1,0,1,0,1}, {1,0,1,0,1}, {1,0,1,0,1}, {1,0,1,0,0}, {1,0,1,0,1}};
        
        vector<int> output;
        
        if ( scenario == "1" ) {
            output = obj.CheckHallway(input1);
        } else if ( scenario == "2" ) {
            output = obj.CheckHallway(input2);
        } else if ( scenario == "3" ) {
            output = obj.CheckHallway(input3);
        }
        
        for (int i = 0; i < output.size(); ++i) {
            if (output[i] == 0) {
                cout << "Hallway positions is/are = " << i << " " <<endl;
                isHallway = true;
            }
        }
        if (isHallway == false) {
            cout << "No Hallway positions available " <<endl;
        }
    }
    
    return 0;
}
