#include <cmath>
#include <fstream>
#include <iostream>
#include <list>
#include <string>
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

void print_graph(list<list<int> > &graph) {
    int iter = 0, iter1 = 0;

    for (list<int> a : graph) {
        cout << "(" << iter++ << ")"
             << ":";

        for (int b : a) {
            if (b == 0) {
                iter1++;
                continue;
            }

            cout << " -" << b << "->"
                 << "(" << iter1++ << ")";
        }

        cout << endl;
        iter1 = 0;
    }
}

int calc_edges(list<list<int> > &graph) {
    int count = 0;

    for (list<int> a : graph) {
        for (int b : a) {
            if (b == 0) continue;

            count++;
        }
    }

    return count;
}

void calc_outputs(list<list<int> > &graph, int node) {
    int iter = 0;

    for (list<int> a : graph) {
        for (int b : a) {
            if (iter == node && b != 0)
                cout << b << ", ";
        }

        iter++;
    }

    cout << " Outputs found." << endl;
}

void calc_inputs(list<list<int> > &graph, int node) {
    int iter = 0;

    for (list<int> a : graph) {
        for (int b : a) {
            if (iter++ == node && b != 0)
                cout << b << ", ";
        }

        iter = 0;
    }

    cout << " Inputs found." << endl;
}

int calc_edge_cost(list<list<int> > &graph) {
    int sum = 0;

    for (list<int> a : graph) {
        for (int b : a) {
            if (b != 0) sum += b;
        }
    }

    return sum;
}

void calc_output_weights(list<list<int> > &graph, int node) {
    int iter = 0, niter = 0;

    for (list<int> a : graph) {
        for (int b : a) {
            if (iter == node && b != 0)
                cout << "-" << niter << "-> "
                     << "(" << b << ")" << endl;
            niter++;
        }

        niter = 0;
        iter++;
    }
}

int control_fully_connected(list<list<int> > &graph) {
    int iter1 = 0, iter2 = 0, iter3 = 0;

    for (list<int> a : graph) {
        for (int b : a) {
            if (iter1 == iter2 && b == 0)
                for (int c : a) {
                    if (iter3 == iter1) continue;

                    if (c == 0) return 1;

                    iter3++;
                }

            iter3 = 0;
            iter1++;
        }

        iter1 = 0;
        iter2++;
    }

    return 0;
}

int control_directional(list<list<int> > &graph) {
    int size = graph.size();
    int arr[size][size];
    int iter1 = 0, iter2 = 0;

    for(list<int> a:graph){
        for(int b:a){
            arr[iter2][iter1] = b;

            iter1++;
        }

        iter1 = 0;
        iter2++;
    }

    for (int i = 0; i < size;i++)
        for (int j = 0; j < size;j++)
            if(arr[i][j] != arr[j][i])
                return 1;

    return 0;
}

int main() {
    fstream fd("matris.txt");
    list<list<int> > graph;
    list<int> temp;
    int size, ibuffer, islem, node;
    char cbuffer;

    size = sizeofmatris(fd);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            fd >> cbuffer;
            ibuffer = atoi(&cbuffer);
            temp.push_back(ibuffer);
        }

        graph.push_back(temp);
        temp.clear();
    }

    cout << "1- List All" << endl
         << "2- Calculate input output values of given node" << endl
         << "3- Calculate total edge count in graph" << endl
         << "4- Calculate total edge cost of given graph" << endl
         << "5- Print neightbor and edge costs of given node" << endl
         << "6- Control is that graph Fully Connected Graph or not" << endl
         << "7- Control is that graph directional" << endl
         << "Select operation > " << endl
         << endl;

    cin >> islem;

    switch (islem) {
        case 1:
            print_graph(graph);
            break;
        case 2:
            cout << "Write a node number> " << endl;
            cin >> node;
            cout << "For node (" << node << "):" << endl;
            calc_inputs(graph, node);
            calc_outputs(graph, node);
            break;
        case 3:
            calc_edges(graph);
            break;
        case 4:
            cout << "Total edge cost of given graph is: " << calc_edge_cost(graph) << endl;
            break;
        case 5:
            cout << "Write a node number> " << endl;
            cin >> node;
            calc_output_weights(graph, node);
            break;
        case 6:
            if (!control_fully_connected(graph)) 
                cout << "Graph is fully connected" << endl;
            else 
                cout << "Graph is not fully connected" << endl;
            break;
        case 7:
            if (!control_directional(graph))
                cout << "Graph is directional" << endl;
            else
                cout << "Graph is not directional" << endl;
            break;
        default:
            cout << "Undefined operation. Quitting..." << endl;
    }

    fd.close();

    return 0;
}
