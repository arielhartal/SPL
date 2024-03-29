#include "../include/Graph.h"
#include "../include/Simulation.h"

Graph::Graph(vector<Party> vertices, vector<vector<int>> edges) : mVertices(vertices), mEdges(edges) 
{
    // You can change the implementation of the constructor, but not the signature!
}


// copy constructor
Graph::Graph(const Graph& other) : mVertices(other.mVertices), mEdges(other.mEdges)
{

}

int Graph::getMandates(int partyId) const
{
    return mVertices[partyId].getMandates();
}

int Graph::getEdgeWeight(int v1, int v2) const
{
    return mEdges[v1][v2];
}

int Graph::getNumVertices() const
{
    return mVertices.size();
}

const Party &Graph::getParty(int partyId) const
{
    return mVertices[partyId];
}

Party &Graph::getParty(int partyId)
{
    return mVertices[partyId];
}


const vector<Party> Graph::getParties() const
{
    return mVertices;
}

vector<Party> &Graph::getParties() 
{
    return mVertices;
}


