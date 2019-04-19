#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define PID_MAX 32768

struct process *queue_1;
int q1_process_count = 0;
int q1_total_time = 0;

struct process *queue_2;
int q2_process_count = 0;
int q2_total_time = 0;

struct process *queue_3;
int q3_process_count = 0;
int q3_total_time = 0;

struct process *queue_4;
int q4_process_count = 0;
int q4_total_time = 0;

struct process {
    int pid;
    int length;
};

void resize_queue(int q, size_t new_size)
{
    switch(q) {
        case 1: queue_1 = realloc(queue_1, new_size * sizeof *queue_1);
        case 2: queue_2 = realloc(queue_2, new_size * sizeof *queue_2);
        case 3: queue_3 = realloc(queue_3, new_size * sizeof *queue_3);
        case 4: queue_4 = realloc(queue_4, new_size * sizeof *queue_4);
    };
}

int assign_pid()
{
    return (rand() % (PID_MAX + 1));
}

struct process generate_process()
{
    struct process proc;

    printf("Enter the timelength for the process: ");
    scanf("%d", &proc.length);

    proc.pid = assign_pid();

    return proc;
}

void print_info()
{
    printf("Queue for processor 1: %d process(es), Total time: %d\n", q1_process_count, q1_total_time);
    printf("Queue for processor 2: %d process(es), Total time: %d\n", q2_process_count, q2_total_time);
    printf("Queue for processor 3: %d process(es), Total time: %d\n", q3_process_count, q3_total_time);
    printf("Queue for processor 4: %d process(es), Total time: %d\n", q4_process_count, q4_total_time);
}

void interface()
{
    char input[5];
    char exit_str[5] = {'e', 'x', 'i', 't', '\0'};
    int ptime;

    for(int counter = 1; strcmp(input, exit_str) != 0; counter++)
    {
        printf("Enter process %d time: ", counter);
        scanf("%s", input);
        sscanf(input, "%d", &ptime);
        if(counter % 5 == 0)
            print_info();
    }

    if(strcmp(input, exit_str) == 0)
        exit(EXIT_SUCCESS);
}

int main() 
{
    srand(time(0));

    queue_1 = malloc(2 * sizeof(int));
    queue_2 = malloc(2 * sizeof(int));
    queue_3 = malloc(2 * sizeof(int));
    queue_4 = malloc(2 * sizeof(int));

    interface();

    free(queue_1);
    free(queue_2);
    free(queue_3);
    free(queue_4);
    return 0;
}
