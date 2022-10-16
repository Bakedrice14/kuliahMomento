#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(Node** head, int x) {
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if (*head != NULL) temp->next = *head;
    *head = temp;
}

void Print(Node* head) {
    cout << "List is: ";
    while (head != NULL) {
        cout << head->data;
        head = head->next;
    }
}

int main() {
    int n, i, x;
    Node* head = NULL;
    cout << "How many numbers? \n";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "Enter the number \n";
        cin >> x;
        Insert(&head, x);
        Print(head);
    }
    return 0;
}