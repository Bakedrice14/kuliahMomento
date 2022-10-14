#include <iostream>
using namespace std;
struct Node {
    int data;
    struct node* next;
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
    cout << "list is: ";
    while (head != NULL) {
        cout << head->data;
        head = head->next;
    }
}
int main(int argc, char const* argv[]) {
    node* head = NULL;
    cout << "How many numbers? \n ";
    int n, i, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Entar the number\n";
        cin >> x;
        Insert(&head, x);
        Print(head);
    }

    return 0;
}
