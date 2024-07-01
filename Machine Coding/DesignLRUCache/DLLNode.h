using namespace std;

class DLLNode{
    public:
        int key, val;
        DLLNode *next, *prev;
        
        DLLNode();
        DLLNode(int key, int val);
        void addNode(DLLNode *newNode, DLLNode* &head);
        void removeNode(DLLNode *targetNode);
};