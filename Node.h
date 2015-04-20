#ifndef NODE_H
#define NODE_H
#include <vector>
using std::vector;
class Node
{
    public:
        Node(int num);
        void append(Node*);
        int count();
        virtual ~Node();
    protected:
    private:
        int value = 0;
        vector<Node*> children;
};

#endif // NODE_H
