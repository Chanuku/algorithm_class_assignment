#include <iostream>

using namespace std;

const int number = 15;

typedef struct node *treepointer;
typedef struct node 
{
	int data; //실질값
	treepointer leftChild, rightChild; //노드포인터
}node;


//전위순회
void preorder(treepointer ptr) 
{
	if (ptr)//해당 포인터가 null값이 아니라는 전제
	{
		cout << ptr->data << ' '; //본인 출력
		preorder(ptr->leftChild); // 왼쪽 이동
		preorder(ptr->rightChild); // 오른쪽 이동

	}
}

//증위순회
void inorder(treepointer ptr)
{
	if (ptr)//해당 포인터가 null값이 아니라는 전제
	{
		preorder(ptr->leftChild); // 왼쪽 이동
		cout << ptr->data << ' '; //본인 출력
		preorder(ptr->rightChild); // 오른쪽 이동

	}
}


//후위순회
void postorder(treepointer ptr)
{
	if (ptr)//해당 포인터가 null값이 아니라는 전제
	{
		preorder(ptr->leftChild); // 왼쪽 이동
		preorder(ptr->rightChild); // 오른쪽 이동
		cout << ptr->data << ' '; //본인 출력
	}
}

int main(void) 
{
	node nodes[number + 1];
	for (int i = 1; i <= number; i++) 
	{
		nodes[i].data = i;
		nodes[i].leftChild = NULL;
		nodes[i].rightChild = NULL;
	}
	for (int i = 1; i <= number; i++)
	{
		if(i%2 ==0)
		{
			nodes[i / 2].leftChild = &nodes[i];

		}
		else
		{
			nodes[i / 2].rightChild = &nodes[i];
		}
	}
	preorder(&nodes[1]);
	cout << endl;
	inorder(&nodes[1]);
	cout << endl;
	postorder(&nodes[1]);
}