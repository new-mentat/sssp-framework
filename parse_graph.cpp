#include <string>
#include <cstring>
#include <cstdlib>
#include <stdio.h>
#include <iostream>

#include "graph.h"
#include "parse_graph.hpp"

#define SSSP_INF 1073741824

// Parse the an input file into a vector of edges 
uint parse_graph::parse(
		std::ifstream& inFile,
		std::vector<edge>& edge_list,
		const long long arbparam,
		const bool nondirected ) {

	const bool firstColumnSourceIndex = true;

	std::string line;
	char delim[3] = " \t";	//In most benchmarks, the delimiter is usually the space character or the tab character.
	char* pch;
	uint nEdges = 0;

	unsigned int Additionalargc=0;
	char* Additionalargv[ 61 ];

    uint num_vertices=0;

	// Read the input graph line-by-line.
	while( std::getline( inFile, line ) ) {
		if( line[0] < '0' || line[0] > '9' )	// Skipping any line blank or starting with a character rather than a number.
			continue;
		char cstrLine[256];
		std::strcpy( cstrLine, line.c_str() );
		uint firstIndex, secondIndex, weight;

		pch = strtok(cstrLine, delim);
		if( pch != NULL )
			firstIndex = atoi( pch );
		else
			continue;
		pch = strtok( NULL, delim );
		if( pch != NULL )
			secondIndex = atoi( pch );
		else
			continue;
        pch = strtok(NULL, "\n");
        if(pch != NULL){
          weight = atoi(pch);
        }
        else{
          weight = 1;
        }

		uint temp_max = std::max( firstIndex, secondIndex );
        num_vertices = std::max(temp_max, num_vertices);
		uint src = firstColumnSourceIndex ? firstIndex : secondIndex;
		uint dest = firstColumnSourceIndex ? secondIndex : firstIndex;

        edge new_edge;
        new_edge.src = src;
        new_edge.dest = dest;
        new_edge.weight = weight;
        edge_list.push_back(new_edge);

        if(nondirected){
           new_edge.src = dest;
           new_edge.dest = src;
           new_edge.weight = weight;
        }
	}

	return num_vertices;

}
