#include "Node.h"

Node::Node(int num)
{
    num = value;
    //ctor
}

void Node::append(Node* number){
    children.push_back(number);
}

int Node::count(){
    int cont = 0;
    for(auto a:children){
        if( !a->children.empty() )
            for(auto b:  a->children)
                cont += b->value;
        else
                cont += a -> value;
    }
    return cont;
}

Node::~Node()
{
    //dtor
}
