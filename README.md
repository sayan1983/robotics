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






