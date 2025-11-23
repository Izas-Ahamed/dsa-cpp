#include <iostream>
#include <vector>
using namespace std;

class Heap
{
    vector<int> v;
    string type;
    bool compare(int a, int b)
    {
        return this->type == "min" ? a < b : a > b;
    }
    void heapify(int i)
    {
        int minIndex = i;
        int left = 2 * i;
        int right = 2 * i + 1;
        if (left < v.size() and compare(v[left], v[i]))
        {
            minIndex = left;
        }

        if (right < v.size() and compare(v[right], v[minIndex]))
        {
            minIndex = right;
        }

        if (minIndex != i)
        {
            swap(v[minIndex], v[i]);
            heapify(minIndex);
        }
    }

public:
    Heap(int default_size = 10, string type = "min")
    {
        this->type = type;
        v.reserve(default_size + 1);
        v.push_back(-1);
    }

    void push(int data)
    {
        v.push_back(data);
        int index = v.size() - 1;
        int parent = index / 2;
        while (compare(v[index], v[parent]) and index > 1)
        {
            swap(v[index], v[parent]);
            index = parent;
            parent /= 2;
        }
    }

    int pop()
    {
        swap(v[1], v[v.size() - 1]);
        v.pop_back();
        heapify(1);
    }
    int top()
    {
        return v[1];
    }
    bool empty()
    {
        return v.size() == 1;
    }
};
