#include <cstddef>
#include "DLLNode.h"

using namespace std;

DLLNode::DLLNode(){}

DLLNode::DLLNode(int key, int val){
    this -> key = key;
    this -> val = val;
    this -> prev = NULL;
    this -> next = NULL;
}

void DLLNode::addNode(DLLNode *newNode, DLLNode* &head){
    DLLNode *temp = head -> next;
    head -> next = newNode;
    newNode -> prev = head;
    newNode -> next = temp;
    temp -> prev = newNode;
}

void DLLNode::removeNode(DLLNode *targetNode){
    DLLNode *prevNode = targetNode -> prev;
    DLLNode *nextNode = targetNode -> next;
    prevNode -> next = nextNode;
    nextNode -> prev = prevNode;
}