#include <vector>
#include <iostream>

#include "utils.h"
#include "cuda_error_check.cuh"
#include "graph.h"
#include "parse_graph.hpp"

__global__ void neighborHandling_kernel(std::vector<edge> * edges,
    std::vector<int> distances, int * hasChanged){

    //update me based on my neighbors. Toggle anyChange as needed.
    //Enqueue and dequeue me as needed.
    //Offset will tell you who I am.
}

void neighborHandler(std::vector<edge> * edges, int blockSize, int blockNum){
    setTime();

    /*
     * Do all the things here!
     **/

    std::cout << "Took " << getTime() << "ms.\n";
}
