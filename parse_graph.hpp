#ifndef PARSE_GRAPH_HPP
#define PARSE_GRAPH_HPP

#include <fstream>
#include <vector>

#include "graph.h"

namespace parse_graph {
	uint parse(
		std::ifstream& inFile,
		std::vector<edge>& edge_list,
		const long long arbparam,
		const bool nondirected );
}

#endif	//	PARSE_GRAPH_HPP
