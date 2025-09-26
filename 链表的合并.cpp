#include <iostream>
using namespace std;
struct node{
	int data;
	node*next;
	node(int d=0,node*nex=NULL):data(d),next(nex){};
};

class linklist
{
	private:
	
	node*head;
	
	public:
	linklist()
	{
		head=new node;
	
	}
	node* myinput(int x)
	{
		
		node*tail=head;
		for(int i=0;i<x;i++)
		{
			int y;
			cin>>y;
			tail->next=new node(y);
			tail=tail->next;
		}
		
		return head;
		
	}
	void print(int x)
	{
		node*p=head->next;
			for(int i=0;i<x;i++)
		{
			cout<<p->data<<' ';
			p=p->next;
			
		}
		cout<<'\n';
	}
	
	
};
	void combine(node*h1,node*h2)
	{
		
		node*p=h1->next;
		node*q=h2->next;
		node*pc=h1;//这几个都在动，向后董 
		while(p&&q)
		{
			if(p->data<=q->data)
			{
				pc->next=p;
				pc=p;
				p=p->next;
				
			}
			else
			{
				pc->next=q;
				pc=q;
				q=q->next;
				
			}
			
			
		}
		
		if(p!=NULL)
		{
			pc->next=p;
		}
		else if(q!=NULL)
		{
			pc->next=q;
		}
	}



int main()
{
	int m,n;
	linklist l1;
	linklist l2;
	
	cin>>m;
		node *h1=l1.myinput(m);
	
	cin>>n;
		node *h2=l2.myinput(n);
	
	
	cout<<"合并前链表1为:";
	l1.print(m);
	cout<<"合并前链表2为:";
	l2.print(n);	

	combine(h1,h2);
	cout<<"合并后的单链表为:";
	l1.print(m+n);
    return 0;
}
