#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode  *next;
    // ListNode() : val(0), next(nullptr) {}
    // ListNode(int x) : val(x), next(nullptr) {}
    // ListNode(int x, ListNode  *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode*  deleteDuplicates(ListNode*  head) {
        if(!head) {
            return head;
        }

        ListNode* temp = head;

        while(temp -> next) {
            if (temp -> val == temp -> next -> val) {
                temp -> next = temp -> next -> next;
            } else {
                temp = temp -> next;
            }
        }
       return head;
    }
};

int main() {
    ListNode *node = new ListNode();
    ListNode *head = node;
    //初始化链表
    for(int i = 1; i < 10; i++) {
        node -> val = 3;
        node -> next = new ListNode();
        node = node -> next;
    }
    node -> next = NULL;
    //删除重复元素
    Solution solution;
    solution.deleteDuplicates(head);
    
    //打印链表
    while(head) {
        cout << head -> val << " ";
        head = head -> next;
    }
}