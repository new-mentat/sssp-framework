## Overview
 This skeleton framework provides a command line interface according to
the project specifications. It also contains an executable which should
produce the proper output for SSSP, which you can test against.

## Graph Parser

The graph parser parses an input graph text file, into a vector of edges.

An edge is defined in `graph.h`, and is equivalent to the following.

```
struct edge{
  unsigned int weight;
  unsigned int src;
  unsigned int dest;
}
```

For your implementations, you may want to store the graph in different
formats (i.e an adjacency linked list). You can edit the code in
`parse_graph.cpp` and `entry_point.cpp` to change the way the graph is
parsed.


## Executing the program

I've included two files, `run.sh` and `test_run.sh` which will execute your
program and the test program, respectively. In order to use test over
graphs, you will have to change the arguments in the .sh files.

`sh run.sh` - runs your executable.
`sh run_test.sh` - runs the test. 

Alternatively, you can run the following commands yourself, and adjust the
parameters, if you don't want to use my scripts.

### To run your code, assuming your executable is named sssp
`./sssp --input test_graphs/sample_graph.txt --bsize 512 --bcount 4 --output output.txt --method bmf --usemem no --sync incore`

### To run the test script
`./sssp_truth --input test_int.txt --bsize 512 --bcount 4 --output output.txt --method bmf --usemem no --sync incore`
