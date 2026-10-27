class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* temp = head;
        int size = 1;

        while (temp->next != nullptr) {
            temp = temp->next;
            size++;
        }

        k = k % size;

        if (k == 0)
            return head;

        temp->next = head;

        int steps = size - k;
        ListNode* newTail = head;

        for (int i = 1; i < steps; i++) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};