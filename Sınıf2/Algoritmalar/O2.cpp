/* labirent.txt dosyasının içeriği

0 1 0 0 0 0 0 0 0
1 0 1 0 0 0 0 0 0
0 1 0 0 0 1 0 0 0
0 0 0 0 0 0 1 0 0
0 0 0 0 0 1 0 1 0
0 0 1 0 1 0 0 0 0
0 0 0 1 0 0 0 1 0
0 0 0 0 1 0 1 0 1
0 0 0 0 0 0 0 1 0

*/

#include <cmath>
#include <fstream>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int sizeofmatris(fstream &fd) {
    int size = 0;
    char cbuffer;

    while (!fd.eof()) {
        fd >> cbuffer;
        size++;
    }

    fd.clear();
    fd.seekg(0);

    return pow(size - 1, 0.5);
}

class Graph {
    int size;
    list<int> *adj;

   public:
    Graph(int size);
    void add_edge(int v, int w);
    void BFS(int s);
    void print_graph();
};

Graph::Graph(int size) {
    this->size = size;
    adj = new list<int>[size];
}

void Graph::add_edge(int v, int w) {
    adj[v].push_back(w);
}

void Graph::BFS(int s) {
    bool *visited = new bool[size];

    for (int i = 0; i < size; i++)
        visited[size] = false;

    list<int> que;

    visited[s] = true;
    que.push_back(s);

    list<int>::iterator i;

    while (!que.empty()) {
        s = que.front();
        cout << s << " ";
        que.pop_front();

        for (i = adj[s].begin(); i != adj[s].end(); i++) {
            if (!visited[*i]) {
                visited[*i] = true;
                que.push_back(*i);
            }
        }
    }
}

void Graph::print_graph() {
    for (int i = 0; i < this->size; i++) {
        cout << "(" << i << "): ";
        for (int a : this->adj[i]) {
            cout << "<--> (" << a << ") ";
        }
        cout << endl;
    }
}

int main() {
    fstream fd("labirent.txt");
    int size = sizeofmatris(fd);
    int buf;

    Graph graph(size);

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++) {
            fd >> buf;

            if (buf)
                graph.add_edge(i, j);
        }

    graph.print_graph();

    cout << endl;

    graph.BFS(8);

    return 0;
}
