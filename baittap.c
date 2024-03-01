#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stream.h>
struct nhanvien{
    char manv[50];
    char hoten[50];
    float hsluong;
    int namct;
}
struct Node
{
    nhanvien data;
    struct node*next;
};
typedef struct node node;
void khoitao(list)
