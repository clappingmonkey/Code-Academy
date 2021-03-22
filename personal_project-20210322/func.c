#include <stdio.h>
#include "global.h"

void algo(int graph[][V]){
    int path[V][V], i, j, k;

    for(i = 0; i < V; i++){
        for(j = 0; j < V; j++){
            path[i][j] = graph[i][j];
        }
    }

    for(k = 0; k < V; k++){
        for(i = 0; i < V; i++){
            for(j = 0; j < V; j++){
                if(path[i][k] + path[k][j] < path[i][j]){
                    path[i][j] = path[i][k] + path[k][j];
                }
            }
        }
    }
    printSol(path);
}

void printSol(int path[][V]){
    printf("\nThis matrix shows the shortest distances "
    "between every pair of vertices:\n");

    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            if(path[i][j] == INF){
                printf("%5s", "INF");
            }else{
                printf("%5d", path[i][j]);
            }
        }
        printf("\n");
    }
}

void printGraph(int graph[][V]){
    printf("The original matrix is:\n");

    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            if(graph[i][j] == INF){
                printf("%4s", "INF");
            }else{
                printf("%3d ", graph[i][j]);
            }
        }
        printf("\n");
    }
}