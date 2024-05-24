#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// Structure for each element in the hash table
struct Node {
    int data;
    struct Node* next;
};

// Structure for the hash table
struct HashTable {
    struct Node* array[SIZE];
};

// Function to create a new Node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to initialize the hash table
void initHashTable(struct HashTable* ht) {
	int i;
    for ( i = 0; i < SIZE; i++) {
        ht->array[i] = NULL;
    }
}

// Function to insert a value into the hash table
void insert(struct HashTable* ht, int value) {
    int index = value % SIZE; // Hash function

    // Create a new node
    struct Node* newNode = createNode(value);

    // Insert into the hash table
    if (ht->array[index] == NULL) {
        // If the slot is empty
        ht->array[index] = newNode;
    } else {
        // If the slot is not empty, insert at the beginning of the linked list
        newNode->next = ht->array[index];
        ht->array[index] = newNode;
    }
}

// Function to print the hash table
void printHashTable(struct HashTable* ht) {
	int i;
    for ( i = 0; i < SIZE; i++) {
        printf("Index %d: ", i);
        struct Node* temp = ht->array[i];
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    struct HashTable ht;
    initHashTable(&ht);

    int value;
    char choice;

    // Insert values into the hash table based on user input
    do {
        printf("Enter a value to insert into the hash table: ");
        scanf("%d", &value);
        insert(&ht, value);

        printf("Do you want to insert another value? (y/n): ");
        scanf(" %c", &choice); // Note the space before %c to consume the newline character

    } while (choice == 'y' || choice == 'Y');

    // Printing the hash table
    printf("Hash Table:\n");
    printHashTable(&ht);

    return 0;
}

