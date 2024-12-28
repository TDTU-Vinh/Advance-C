#include <stdio.h>
#include <stdbool.h>
typedef struct
{
    int *item; // Mảng lưu trữ các phần tử
    int size;  // Số lượng phần tử tối đa
    int top;   // Chỉ số lấy giá trị ở đỉnh
} Stack;

// Hàm khởi tạo các thông số của Stack
void initialize(Stack *stack1, int size1) // con trỏ struct dùng để thao tác trực tiếp lên dữ liệu chính trên hàm main
{
    stack1->size = size1;
    stack1->item = (int *)malloc(size1 * sizeof(int));
    stack1->top = -1;
}

// Thao tác kiểm tra stack đầy
bool isFull(Stack stack) // chỉ để kiểm tra biến thông thường không cần truyền vào con trỏ
{
    return (stack.top == stack.size - 1) ? true : false;
}

// Thao tác kiểm tra stack rỗng
bool isEmpty(Stack stack) // chỉ để kiểm tra biến thông thường không cần truyền vào con trỏ
{
    return (stack.top == -1) ? true : false;
}

// Thao tác thêm phần tử
void push(Stack *stack, int data) // thêm dữ liệu nên là sẽ cần tác động trực tiếp lên dữ liệu ( phải sử dụng con trỏ)
{
    if (isFull(*stack) == false) // muốn đọc dữ liệu bên trong địa chỉ phải sử dụng (*) còn không để dấu (*) thì là đang đọc địa chỉ
    {
        stack->item[++stack->top] = data; // tăng vị trí sau đó mới thêm giá trị  nếu đổi item[++stack->top] thì nó sẽ thêm giá trị trước rồi mới tăng vị trí => không có ý nghĩa
    }
    else
    {
        printf("Stack đầy !\n");
    }
}

// Thao tác xóa phần tử
int pop(Stack *stack)
{
    if(isEmpty(*stack) == false)
    {
        return stack->item[stack -> top --];
    }else{
        printf("Stack rỗng");
        return -1;
    }

}

// Đọc giá trị đỉnh Stack
int top(Stack stack)
{
    if(isEmpty(stack) == false)
    {
        return stack.item[stack.top];
    }else{
        return -1;
    }
}

int main()
{
    Stack stack;
    int size = 5;
    initialize(&stack, size);
    push(&stack,2);
    push(&stack,4);
    push(&stack,6);
    push(&stack,7);
    push(&stack,1);
    push(&stack,9);
    for(int i = 0 ; i < stack.size ; i ++)
    {
        printf("data : %d - addr: %p\n",stack.item[i],&(stack.item[i]));
    }
    pop(&stack);
    pop(&stack);
    printf("top = %d - addr = %p\n",top(stack),&(stack.item[stack.top]));
    return 0;
}