#include<stdio.h>
#include<stdlib.h>

// Create a node
struct Node {
  int item;
  struct Node* next;
};

void insertAtBeginning(struct Node** ref, int data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

//ref is first
//new node is the node to insert
  new_node->item = data;
  new_node->next = (*ref);


  (*ref) = new_node;
}




void deleteNode(struct Node** ref, int key) {
  struct Node *temp = *ref, *prev;

  if (temp != NULL && temp->item == key) {
    *ref = temp->next;
    free(temp);
    return;
  }

  while (temp != NULL && temp->item != key) {
    prev = temp;
    temp = temp->next;
  }


  if (temp == NULL) return;


  prev->next = temp->next;

  free(temp);
}

// Print the linked list
void printList(struct Node* node) {
  while (node != NULL) {
    printf(" %d ", node->item);
    node = node->next;
  }
}

//  program
int main() {
  struct Node* head = NULL;
 printf("Insert the nodes/n");
  insertAtBeginning(&head, 4);
  insertAtBeginning(&head, 5);
  insertAtBeginning(&head, 2);
   insertAtBeginning(&head, 3);


  printf("Linked list: ");
  printList(head);

  printf("\ndeleting an element: ");
  deleteNode(&head, 4);
  printList(head);
}
