#include <iostream>
using namespace std;

// deklarasi struct node
struct Node {
    int data;
    struct Node* next;
};

// deklarasi head
struct Node* head;

// function masukkan
void Insert(Node** head, int x) {
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if (*head != NULL) temp->next = *head;
    *head = temp;
}

// function keluaran
void Print(Node* head) {
    cout << "List is: ";
    while (head != NULL) {
        cout << head->data;
        head = head->next;
    }
}

main() {
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
}