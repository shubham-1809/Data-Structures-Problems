#include <map>
#include "cacheManager.h"

using namespace std;

CacheManager::CacheManager(int size){
    this -> size = size;
    head = new DLLNode(-1, -1);
    tail = new DLLNode(-1, -1);
    head -> next = tail;
    tail -> prev = head;
}

void CacheManager::insertVal(int key, int val){
    if(hashMap.find(key) != hashMap.end()){
        DLLNode *target = hashMap[key];
        hashMap.erase(key);
        obj -> removeNode(target);
    }
    if(hashMap.size() >= size){
        int key = tail -> prev -> key;
        hashMap.erase(key);
        obj -> removeNode(tail -> prev);
    }
    obj -> addNode(new DLLNode(key, val), head);
    hashMap[key] = head -> next;
}

int CacheManager::getVal(int key){
    if(hashMap.find(key) == hashMap.end()) return -1;
    DLLNode *target = hashMap[key];
    int val = target -> val;
    hashMap.erase(key);
    obj -> removeNode(target);
    obj -> addNode(target, head);
    hashMap[key] = head -> next;
    return val;
}