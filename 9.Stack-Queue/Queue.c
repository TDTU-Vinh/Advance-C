#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    int *item; // mảng lưu trữ
    int size;  // số lượng phần tử tối đa có thể đưa vào
    int front; // chỉ số của phần tử đầu hàng đợi
    int rear;  // chỉ số của phần tử cuối hàng đợi
} Queue;

// Hàm khởi tạo
void initialize(Queue *queue, int size)
{
    queue->size = size;
    queue->item = (int *)malloc(size * sizeof(int));
    queue->front = -1;
    queue->rear = -1;
}

// Hàm kiểm tra hàng đợi đầy
bool isFull(Queue queue)
{
    return (queue.rear == queue.size - 1) ? true : false;
}

// Hàm kiểm tra hang đợi trống
bool isEmpty(Queue queue)
{
    return (queue.front == -1 || queue.front == queue.rear + 1) ? true : false;
}

// Thêm phần tử vào cuối hàng đợi
void enqueue(Queue *queue, int data)
{
    if (isFull(*queue))
    {
        printf("Hàng đợi đầy!\n");
    }
    else
    {
        if (queue->front == -1 && queue->rear == -1)
        {
            queue->front = queue->rear = 0;
        }
        else
        {
            queue->rear++;
        }
        queue->item[queue->rear] = data;
        printf("Enqueue data %d\n", data);
    }
}

// Xóa phần tử ở đâu hàng đợi
int dequeue(Queue *queue)
{
    if (isEmpty(*queue))
    {
        printf("Hàng đợi rỗng!\n");
        return -1;
    }
    else
    {
        int dequeueValue = queue->item[queue->front];

        queue->item[queue->front] = 0;

        if (queue->front == queue->rear && queue->rear == queue->size - 1)
        {
            queue->front = queue->rear = -1;
        }
        else
        {
            queue->front = (queue->front + 1) % queue->size;
        }
        return dequeueValue;
    }
}

// Hàm đọc thông tin
void display(Queue queue)
{
    if (isEmpty(queue))
    {
        printf("Hàng đợi rỗng!\n");
    }
    else
    {
        printf("Queue: ");
        for (int i = queue.front; i <= queue.rear; i++)
        {
            printf("%d ", queue.item[i]);
        }
        printf("\n");
    }
}

// Đọc giá trị phần tử đầu tiên
int front(Queue queue)
{
    if (isEmpty(queue))
    {
        printf("Hàng đợi rỗng!\n");
        return -1;
    }
    else
    {
        return queue.item[queue.front];
    }
}

// Đọc giá trị phần tử cuối cùng
int rear(Queue queue)
{
    if (isEmpty(queue))
    {
        printf("Hàng đợi rỗng!\n");
        return -1;
    }
    else
    {
        return queue.item[queue.rear];
    }
}

int main()
{
    Queue linearQueue;
    int size = 5;
    initialize(&linearQueue, size);
    enqueue(&linearQueue, 5);
    enqueue(&linearQueue, 4);
    enqueue(&linearQueue, 1);
    enqueue(&linearQueue, 3);
    enqueue(&linearQueue, 2);

    display(linearQueue);

    dequeue(&linearQueue);
    display(linearQueue);

    enqueue(&linearQueue, 2);

    return 0;
}