# ECMA
ECMA project (MPRO Course)

## Build Requirements

To build this project, the only depedancy that you will need is CMake (3.0). The project is only known for now to compile on MacOs and Linux. If you have any problem to compile on thoses platforms, let us know.

You will need an internet connection to build this project as it will fetch and install inside the project dir other dependancies such as gflags, glog and gtest, that will allow flagging, logging, and testing. If you need informations about thoses library, there are plenty of documentation on the web.

## Build steps

First, you need to clone the repository :
    
    git clone https://github.com/emmanueljay/ECMA.git ecma_project

Then, to build, you have to go inside build and launch cmake :

    cd ecma_project/build
    cmake .. -DCPLEX_ROOT_DIR={Path to your version of CPLEX (without the last "cplex")}

for example, one can launch :

    cmake .. -DCPLEX_ROOT_DIR=/Applications/CPLEX_Studio1261/
    
and then, compile :

    make

and then, to launch a simulation you can for example launch from the build/ dir : 

    ./ecma_launcher --instance=../instances/projet_5_8_8.dat --solver=frontal -v=5

You can also find more help with :

    ./ecma_launcher --help

## Type of solve available



