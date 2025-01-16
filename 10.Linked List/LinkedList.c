#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

/*
    Hàm thêm 1 node vào phía trước danh sách.
*/
void push_front(Node **array, int value) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = *array;
    *array = new_node;
}

/*
    Hàm xóa node cuối cùng của danh sách.
*/
void pop_back(Node **array) {
    if (*array == NULL) return; // Danh sách rỗng

    if ((*array)->next == NULL) { // Chỉ có 1 node
        free(*array);
        *array = NULL;
        return;
    }

    Node *current = *array;
    while (current->next->next != NULL) { // Tìm node áp chót
        current = current->next;
    }

    free(current->next); // Xóa node cuối cùng
    current->next = NULL;
}

/*
    Hàm xóa node đầu tiên của danh sách.
*/
void pop_front(Node **array) {
    if (*array == NULL) return; // Danh sách rỗng

    Node *temp = *array;
    *array = (*array)->next;
    free(temp);
}

/*
    Hàm lấy giá trị của node đầu tiên.
*/
int front(Node *array) {
    if (array == NULL) {
        printf("Danh sách rỗng.\n");
        exit(1);
    }
    return array->data;
}

/*
    Hàm lấy giá trị của node cuối cùng.
*/
int back(Node *array) {
    if (array == NULL) {
        printf("Danh sách rỗng.\n");
        exit(1);
    }

    Node *current = array;
    while (current->next != NULL) {
        current = current->next;
    }
    return current->data;
}

/*
    Hàm thêm 1 node vào vị trí bất kỳ.
*/
void insert(Node **array, int value, int pos) {
    if (pos == 0) {
        push_front(array, value);
        return;
    }

    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = NULL;

    Node *current = *array;
    for (int i = 0; i < pos - 1 && current != NULL; i++) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Vị trí không hợp lệ.\n");
        free(new_node);
        return;
    }

    new_node->next = current->next;
    current->next = new_node;
}

/*
    Hàm xóa node tại một vị trí bất kỳ.
*/
void delete_list(Node **array, int pos) {
    if (*array == NULL) return; // Danh sách rỗng

    if (pos == 0) {
        pop_front(array);
        return;
    }

    Node *current = *array;
    for (int i = 0; i < pos - 1 && current->next != NULL; i++) {
        current = current->next;
    }

    if (current->next == NULL) {
        printf("Vị trí không hợp lệ.\n");
        return;
    }

    Node *temp = current->next;
    current->next = temp->next;
    free(temp);
}

/*
    Hàm lấy kích thước của danh sách.
*/
int size(Node *array) {
    int count = 0;
    while (array != NULL) {
        count++;
        array = array->next;
    }
    return count;
}

/*
    Hàm lấy giá trị tại vị trí bất kỳ.
*/
int get(Node *array, int pos) {
    for (int i = 0; i < pos && array != NULL; i++) {
        array = array->next;
    }

    if (array == NULL) {
        printf("Vị trí không hợp lệ.\n");
        exit(1);
    }

    return array->data;
}

/*
    Hàm kiểm tra danh sách có rỗng hay không.
*/
bool empty(Node *array) {
    return array == NULL;
}

/*
    Hàm hiển thị danh sách.
*/
void display(Node *array) {
    int i = 0;
    while (array != NULL) {
        printf("Node %d: data = %d\n", i, array->data);
        array = array->next;
        i++;
    }
}

int main()
{
    return 0;
}