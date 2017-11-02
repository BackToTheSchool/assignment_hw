#include <stdio.h>
#include <stdlib.h>

typedef struct node_list {
	int data;				// ��� ���� ��
	struct node_list *next;	// ��尡 ����Ű�� �ּ�
}node_list;	// ��� ����Ʈ ����ü ����

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
	// ��ũ�� ����Ʈ�� ��带 �޾� ����Ʈ ��ü�� ���
	node_list *next_node = head;
	while (next_node != NULL) {
		printf("-> %d", next_node->data);
		next_node = next_node->next;
	}
	printf("\n");
}

void DeleteNode(node_list *p_head, node_list *prev, node_list *del_node) {
	// ������ ����� �����͸� �Է¹޾� �ش� ��� ����

	if (prev == NULL) {
		p_head->next = del_node->next;
	}
	else
		prev->next = del_node->next;
	free(del_node);
};

void InsertNode(node_list *p_head, node_list *prev, node_list *new_node) {
	// ��� ���, ���� ���, ���ԵǴ� ���ο� ��带 �μ��� �޾�
	// ����Ʈ�� ��带 �����ϴ� �Լ�
	
	if (p_head == NULL) {		// ����Ʈ�� ����ִ°�� �Էµ� �� ��带 ��� ���� ����
		new_node->next = NULL;
		p_head = new_node;
	}
	else if (prev == NULL) {	// ����Ʈ�� ���� ��尡 ���� ��� ���� ��带 ��� ���� ����
		new_node->next = p_head->next;
		p_head->next = new_node;
	}
	else {						// �� �̿��� ��� ���� ��� ������ �� ��� ����
		new_node->next = prev->next;
		prev->next = new_node;
	}

};

node_list *CreateNode(node_list *next, int data) {
	// ��带 �������� �����ϴ� �Լ�

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

	InsertNode(list2, list1, CreateNode(NULL, 12));		// list2�� ��������ͷ� list1 �ڿ� ����Ʈ ����
	InsertNode(list2, list1, CreateNode(NULL, 131));	// list2�� ��������ͷ� list1 �ڿ� ����Ʈ ����
	DisplayNodeList(list2);

	DeleteNode(list2, NULL, list1);						// list1�� ����
	DisplayNodeList(list2);
	printf("%d", CountNodeList(list2));

	system("pause");
	return 0;
}

