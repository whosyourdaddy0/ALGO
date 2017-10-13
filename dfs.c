#include <stdio.h>

#define COUNT 3
#define TRUE 1

int dfs(int graph[][COUNT], 
        int* visited, 
        size_t node, 
        size_t nodeCount)
{
    if(graph == NULL || visited == NULL)
        return -1;

    visited[node] = TRUE;
    printf("%lu ", node);

    for(size_t i = 0; i < nodeCount; i++)
        if(graph[node][i] && !visited[i])
            dfs(graph, visited, i, nodeCount);
    
    return 0;
}


int main()
{
    int graph[COUNT][COUNT] = { {0, 1, 1},
                                {1, 0, 0},
                                {1, 0, 0} };
                                                    

    int visited[COUNT] = {};

    dfs(graph, visited, 0, COUNT);

    return 0;
}
