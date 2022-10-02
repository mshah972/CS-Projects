#include "Node.h"

Node::Node()
{
    next = null;
    pre = null;
    data = 0;
}

Node::Node(int data)
{
    next = null;
    pre = null;
    data = data;
}
