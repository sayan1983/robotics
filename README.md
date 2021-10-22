# How to build the solution
After checkout the git repository, cd to robotics folder.

$ cd robotics

After that please run the cmake 

$ cmake .

After cmake is completed then run the make command

$ make

Now the executable is generated in same folder named "robotics".



# How to run the solution
After successful build the project we can run the solution by running the executable,

$ ./robotics --story 1 --scenario 1

The --story is which story scenario want to exercise and --scenario is under that which scenario we want to run.
There is pre-defined input data is supplied through main which we can choose by selecting --scnario.


# How to build and run google test
After checkout the git repository, cd to build folder under googletest folder.

$ cd robotics/googletest/build

Then run the cmake command

$ cmake ..

After that please do the make 

$ make

After that it will generate a executable (robo-test) under the build folder then run that executable and that will run all the unit test,

$ ./robo-test

# Reflection/Analysis
Analysis Story 1:
This solution works for obvious cases like in story 4 it mentioned that it has only 1 path available. I kind of make a generic approach so that it also move to dead end. So for story 3 if there open spaces 
it will try to cover all possible cells. 
Another point here is I always there is only one vacant space in first row.

Analysis Story 2:
May be as I mentioned earlier that if extra open spaces available in story 4 it will try to roam through vacent spaces, so to cover that we can take the top down approach to always goes for down first.
and for the 2nd point we can run the same logic and each time start different first row empty space. The time complexity for this solution will still be n^2 as we run the same logic for for whole row because worst case we have all empty cell
in first row.

Analysis Story 3:
Decomposition of story, 
Story 1:
Find 3 consecutive empty cells from a single row.

Story2:
Find a ship can rotate in a given position.

Story 3:
Find a path to move a 1*3 grid ship from top to bottom.
