#include <stdio.h>
#include "global.h"

/* Task #24 */

int main(void){

    int graph[V][V] = {{0, 7, 9, INF, INF, 14},
                       {5, 0, 10, 15, INF, INF},
                       {9, 10, 0, 11, INF, 2},
                       {INF, 15, 11, 0, 6, INF},
                       {INF, INF, INF, 6, 0, 9},
                       {14, INF, 2, INF, 9, 0}};

    printGraph(graph);
    algo(graph);

    return 0;
}