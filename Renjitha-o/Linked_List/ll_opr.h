#ifndef LL_OPR_H
#define LL_OPR_H

typedef struct linked_list {
	int data;
	struct linked_list *next;
}ll_opr;

ll_opr *create_ll(int data);
int insert_ll_beg(ll_opr **head,int data);
int insert_ll_pos(ll_opr **head,int data,int pos);
int insert_ll_last(ll_opr **head,int data);
int delete_ll_beg(ll_opr **head);
int delete_ll_pos(ll_opr **head,int pos);
int delete_ll_last(ll_opr **head);
void display_ll(ll_opr *head);
void rotate_ll(ll_opr **head);
#endif

