#include <vector>
#include <iostream>

#include "utils.h"
#include "cuda_error_check.cuh"
#include "parse_graph.hpp"
#include "graph.h"

__global__ void pulling_kernel(std::vector<edge> * edges, std::vector<int>
    distances, int * hasChanged){

    //update me based on my neighbors. Toggle anyChange as needed.
    //offset will tell you who I am.
}

void puller(std::vector<edge> * edges, int blockSize, int blockNum){
    setTime();

    /*
     * Do all the things here!
     **/
    
    // sample way to access graph

    std::vector<edge> edges_data = *edges;

    for(int i = 0; i < edges->size(); i++){
      printf("Edge from %d to %d, with weight %d\n", edges_data[i].src,
          edges_data[i].dest, edges_data[i].weight);
    }

    std::cout << "Took " << getTime() << "ms.\n";
}
