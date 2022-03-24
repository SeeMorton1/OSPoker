#include <stdio.h>

//The insert function inserts a new element into the FIFO queue.
void insert(int *queue, int *size, int *head, int *tail, int value)
{
    //If the queue is full, the function returns.
    if (*size == 5)
    {
        return;
    }
    //If the queue is empty, the head and tail are set to 0.
    if (*size == 0)
    {
        *head = 0;
        *tail = 0;
    }
    //If the queue is not empty, the tail is incremented.
    else
    {
        *tail = (*tail + 1) % 5;
    }
    //The value is inserted into the queue.
    queue[*tail] = value;
    //The size is incremented.
    (*size)++;
}
//The remove function removes an element from the FIFO queue.
int remove(int *queue, int *size, int *head, int *tail)
{
    //If the queue is empty, the function returns -1.
    if (*size == 0)
    {
        return -1;
    }
    //The head is incremented.
    *head = (*head + 1) % 5;
    //The size is decremented.
    (*size)--;
    //The value is returned.
    return queue[*head];
}
//Print out the FIFO queue.
void print(int *queue, int *size, int *head, int *tail)
{
    //If the queue is empty, the function returns.
    if (*size == 0)
    {
        return;
    }
    //The head is set to 0.
    int i = *head;
    //The size is set to 0.
    int j = 0;
    //The loop prints out the queue.
    while (j < *size)
    {
        printf("%d ", queue[i]);
        i = (i + 1) % 5;
        j++;
    }
    printf("\n");
}


//The main function.  It will take three command line parameters (via argc, argv). The numbers are (in order): N, Q and S.
//N is the number of players, Q is the size of the FIFO queue, and S is the target score to reach.
int main(int argc, char *argv[]) {
    int N = atoi(argv[1]);
    int Q = atoi(argv[2]);
    int S = atoi(argv[3]);
    printf("%d %d %d\n", N, Q, S);
    int *queue = malloc(Q * sizeof(int));
    int *size = malloc(sizeof(int));
    int *head = malloc(sizeof(int));
    int *tail = malloc(sizeof(int));
    *size = 0;
    *head = 0;
    *tail = 0;
    
    /

    return 0;
}