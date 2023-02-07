def addEdge(adj, u, v):
    adj[u].append(v)

def adjacencylist(adj,V):
    for i in range(0, V):
        print(i, "->", end="")
        
        for j in adj[i]:
            print(j, " ", end="")
        
        print()

def initGraph(v,edges, noOfEdges):
    adj = [0] * 3

    for i in range(0, len(adj)):
        adj[i]= []

    for i in range(0, noOfEdges):
        addEdge(adj, edges[i][0], edges[i][1])

    adjacencylist(adj, V)
V = 3

edges = [[0,1], [1,2], [2,0]]

noOfEdges = 3

initGraph(V,edges, noOfEdges)
