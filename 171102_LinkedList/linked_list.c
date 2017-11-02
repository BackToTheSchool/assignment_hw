#include <stdio.h>
#include <stdlib.h>

typedef struct node_list {
	int data;				// 노드 안의 값
	struct node_list *next;	// 노드가 가리키는 주소
}node_list;	// 노드 리스트 구조체 정의

int CountNodeList(node_list *head) {
	int c = 0;
	node_list *next_node = head;
	while (next_node != NULL) {
		c++;
		next_node = next_node->next;
	}
}

void SortNodeList(node_list *head) {
	int i, c, tmp;
	node_list *now_node= head;
	node_list *next_node = head->next;

	c = 0;
	while (c != CountNodeList(head)) {
		c = 0;
		for (i = 0; i < CountNodeList(head); i++) {
			if (now_node->data > next_node->data) {
				tmp = now_node->data;
				now_node->data = next_node->data;
				next_node->data = tmp;
			}
			else {
				c++;
			}
			if (next_node->next == NULL)
				break;
			*now_node = *next_node;
			*next_node = *(next_node->next);

		}
	}

}

void DisplayNodeList(node_list *head) {
	// 링크드 리스트의 헤드를 받아 리스트 전체를 출력
	node_list *next_node = head;
	while (next_node != NULL) {
		printf("-> %d", next_node->data);
		next_node = next_node->next;
	}
	printf("\n");
}

void DeleteNode(node_list *p_head, node_list *prev, node_list *del_node) {
	// 삭제할 노드의 포인터를 입력받아 해당 노드 삭제

	if (prev == NULL) {
		p_head->next = del_node->next;
	}
	else
		prev->next = del_node->next;
	free(del_node);
};

void InsertNode(node_list *p_head, node_list *prev, node_list *new_node) {
	// 헤드 노드, 이전 노드, 삽입되는 새로운 노드를 인수로 받아
	// 리스트에 노드를 삽입하는 함수
	
	if (p_head == NULL) {		// 리스트가 비어있는경우 입력된 새 노드를 헤드 노드로 만듬
		new_node->next = NULL;
		p_head = new_node;
	}
	else if (prev == NULL) {	// 리스트에 이전 노드가 없는 경우 삽입 노드를 헤드 노드로 변경
		new_node->next = p_head->next;
		p_head->next = new_node;
	}
	else {						// 그 이외의 경우 이전 노드 다음에 새 노드 삽입
		new_node->next = prev->next;
		prev->next = new_node;
	}

};

node_list *CreateNode(node_list *next, int data) {
	// 노드를 동적으로 생성하는 함수

	node_list *new_node;
	new_node = malloc(sizeof(node_list));

	if (new_node == NULL)
		puts("memory allocation error!");
	new_node->next = next;
	new_node->data = data;

	return new_node;
}


int main()
{
	node_list *list1, *list2;
	list1 = CreateNode(NULL, 10);
	list2 = CreateNode(list1, NULL);

	InsertNode(list2, list1, CreateNode(NULL, 12));		// list2를 헤드포인터로 list1 뒤에 리스트 삽입
	InsertNode(list2, list1, CreateNode(NULL, 131));	// list2를 헤드포인터로 list1 뒤에 리스트 생성
	DisplayNodeList(list2);

	DeleteNode(list2, NULL, list1);						// list1을 삭제
	DisplayNodeList(list2);
	printf("%d", CountNodeList(list2));

	system("pause");
	return 0;
}

