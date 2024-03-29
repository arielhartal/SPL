#pragma once
#include <vector>
#include "Party.h"


using std::vector;


class Graph
{
public:
    Graph(vector<Party> vertices, vector<vector<int>> edges);
    Graph(const Graph& other);
    int getMandates(int partyId) const;
    int getEdgeWeight(int v1, int v2) const;
    int getNumVertices() const;
    const Party &getParty(int partyId) const;
    Party &getParty(int partyId);
    const vector<Party> getParties() const;
    vector<Party> &getParties();

private:
    vector<Party> mVertices;
    vector<vector<int>> mEdges;
};
