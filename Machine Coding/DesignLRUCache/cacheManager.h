#include <map>
#include "DLLNode.h"

using namespace std;

class CacheManager{
    private:
        int size;
        map<int, DLLNode*> hashMap;
        DLLNode *head, *tail, *obj;
    public:
        CacheManager(int size);
        void insertVal(int key, int val);
        int getVal(int key);
};