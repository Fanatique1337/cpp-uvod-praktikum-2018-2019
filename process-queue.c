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

struct process generate_process(int len)
{
    struct process proc;

    proc.pid = assign_pid();
    proc.length = len;

    return proc;
}

void print_info()
{
    printf("Queue for processor 1: %d process(es), Total time: %d\n", q1_process_count, q1_total_time);
    printf("Queue for processor 2: %d process(es), Total time: %d\n", q2_process_count, q2_total_time);
    printf("Queue for processor 3: %d process(es), Total time: %d\n", q3_process_count, q3_total_time);
    printf("Queue for processor 4: %d process(es), Total time: %d\n", q4_process_count, q4_total_time);
}

int get_lowest_queue()
{
    int total_times[4] = {q1_total_time, q2_total_time, q3_total_time, q4_total_time};

    int min = q1_total_time;


    for(int counter = 0; counter < 4; counter++)
    {
        if(total_times[counter] < min)
            min = total_times[counter];
    }

    for(int counter = 0; counter < 4; counter++)
    {
        if(total_times[counter] == min)
            return counter + 1;
    }
}

void insert_process(struct process proc, int q)
{
    switch(q) {
        case 1: {
            // resize_queue(q, 2);
            queue_1[q1_process_count-1] = proc;
        }
        case 2: {
            // resize_queue(q, 2);
            queue_2[q2_process_count-1] = proc;
        }
        case 3: {
            // resize_queue(q, 2);
            queue_3[q3_process_count-1] = proc;
        }
        case 4: {
            // resize_queue(q, 2);
            queue_4[q4_process_count-1] = proc;
        }
    }
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
        int lowest = get_lowest_queue();
        switch(lowest) {
            case 1: {
                q1_total_time += ptime;
                q1_process_count++;
                break;
            }
            case 2: {
                q2_total_time += ptime;
                q2_process_count++;
                break;
            }
            case 3: {
                q3_total_time += ptime;
                q3_process_count++;
                break;
            }
            case 4: {
                q4_total_time += ptime;
                q4_process_count++;
                break;
            }
        }

        insert_process(generate_process(ptime), lowest);

        if(counter % 5 == 0)
            print_info();
    }

    if(strcmp(input, exit_str) == 0)
        exit(EXIT_SUCCESS);
}

int main() 
{
    srand(time(0));

    queue_1 = malloc(60 * sizeof(int));
    queue_2 = malloc(60 * sizeof(int));
    queue_3 = malloc(60 * sizeof(int));
    queue_4 = malloc(60 * sizeof(int));

    interface();

    free(queue_1);
    free(queue_2);
    free(queue_3);
    free(queue_4);
    return 0;
}
