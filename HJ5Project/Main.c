#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_STACK_SIZE 10
/*
typedef int element;
typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} StackType;
// 스택 초기화 함수

void init_stack(StackType* s)
{
    s->top = -1;
}

// 공백 상태 검출 함수

int is_empty(StackType* s)
{
    return (s->top == -1);
}

// 포화 상태 검출 함수
int is_full(StackType* s)
{
    return (s->top == (MAX_STACK_SIZE - 1));
}

// 삽입함수
void push(StackType* s, element item)
{
    if (is_full(s)) {
        fprintf(stderr, "스택 포화 에러\n");
        return;
    }
    else s->data[++(s->top)] = item;
}
// 삭제함수
element pop(StackType* s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else return s->data[(s->top)--];
}
int main(void)
{
    StackType s;
    init_stack(&s);
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);


        int i;
        int size = 30;





        srand(time(NULL));
        printf("-----Using array-----\n");
        for (i = 1; i <= size; i++) {
            if (i % 2 == 0)
                printf("[%d] : push %d\n", i, rand() % 100 + 1);
            else if (i % 2 == 1)
                printf("[%d] : pop %d\n", i, rand() % 100 + 1);



        }
        return 0;

    }

*/
typedef int element;
typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} StackType;
// 스택 초기화 함수

void init_stack(StackType* s)
{
    s->top = -1;
}

// 공백 상태 검출 함수

int is_empty(StackType* s)
{
    return (s->top == -1);
}

// 포화 상태 검출 함수
int is_full(StackType* s)
{
    return (s->top == (MAX_STACK_SIZE - 1));
}

// 삽입함수
void push(StackType* s, element item)
{
    if (is_full(s)) {
        fprintf(stderr, "스택 포화 에러\n");
        return;
    }
    else s->data[++(s->top)] = item;
}
// 삭제함수
element pop(StackType* s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else return s->data[(s->top)--];
}
int main(void)
{
    StackType* s;
    int i;
    int size = 30;
    int* a;
    s = (StackType*)malloc(sizeof(StackType));
    init_stack(s);
    srand(time(NULL));
    printf("-----Using array-----\n");
    for (i = 1; i <= size; i++) {
        if (i % 2 == 0)
            printf("[%d] : push %d\n", i, rand() % 100 + 1);
        else if (i % 2 == 1)
            printf("[%d] : pop %d\n", i, rand() % 100 + 1);

        a = (int*)malloc(size * sizeof(int));




        free(a);

    }
    return 0;
}
