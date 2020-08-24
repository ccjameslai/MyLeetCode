#include <iostream>
using namespace std;

class ForwardList {
public:
    ForwardList();
    void Print();
    void PushFront(int);
private:
    struct ListNode {
        int val;
        ListNode* next;
        ListNode(int x) {val = x; next = nullptr;}
        ListNode(int x, ListNode* p) {val = x; next = p;}
    };

    ListNode* head_;
};

int main() {
    ForwardList l;
    l.Print();
    l.PushFront(10);
    l.Print();
}

ForwardList::ForwardList() {
    head_ = nullptr;
}

void ForwardList::Print() {
    for (ListNode* c = head_; c != nullptr; c = c->next) {
        cout << c->val << " ";
    }
}

void ForwardList::PushFront(int x) {
    ListNode* temp = head_;
    head_ = ListNode(x);
    head_->next = temp;
}