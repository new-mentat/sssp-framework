#include <vector>
#include <iostream>

#include "utils.h"
#include "cuda_error_check.cuh"
#include "parse_graph.hpp"
#include "graph.h"

__global__ void own_kernel(std::vector<edge> * edge, std::vector<int>
    distances, int * hasChanged){

    //update me based on my neighbors. Toggle anyChange as needed.
    //Offset will tell you who I am.
}

void own(std::vector<edge> * edges, int blockSize, int blockNum){
    setTime();

    /*
     * Do all the things here!
     **/

    std::cout << "Took " << getTime() << "ms.\n";
}
