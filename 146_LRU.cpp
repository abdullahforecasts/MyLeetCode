
class LRUCache {
public:
    struct Node {
        int key;
        int val;
        Node* next;
        Node* prev;
        Node(int k, int v) : key(k), val(v), next(nullptr), prev(nullptr) {}
    };

    LRUCache(int capacity) {
        cap = capacity;
        size = 0;
        head = tail = nullptr;
    }

    int get(int key) {
        if (cache.find(key) == cache.end()) return -1;
        Node* i = cache[key];
        moveToHead(i);
        return i->val;
    }

    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {
            Node* i = cache[key];
            i->val = value;
            moveToHead(i);
            return;
        }

        if (size == cap) {
            if (tail) {
                cache.erase(tail->key);
                Node* oldTail = tail;
                detach(oldTail);
                delete oldTail;
                size--;
            }
        }

        Node* i = new Node(key, value);
        cache[key] = i;
        addToHead(i);
        size++;
    }

private:
    unordered_map<int, Node*> cache;
    Node* head;
    Node* tail;
    int size;
    int cap;

    void detach(Node* i) {
        if (!i) return;
        if (i->prev) i->prev->next = i->next;
        if (i->next) i->next->prev = i->prev;
        if (i == head) head = i->next;
        if (i == tail) tail = i->prev;
        i->prev = i->next = nullptr;
    }

    void addToHead(Node* i) {
        if (!i) return;
        i->next = head;
        i->prev = nullptr;
        if (head) head->prev = i;
        head = i;
        if (!tail) tail = i;
    }

    void moveToHead(Node* i) {
        detach(i);
        addToHead(i);
    }
};
