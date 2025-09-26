#include <iostream>

using namespace std;
struct node {
	int data;
	node*next;
	node(int d=0,node*n=NULL):data(d),next(n){};//这个位置注意，构造函数好好写 
	
};
class linklist
{
	private:
		node*head;
		int len;
		public:
			
			linklist(){
				head=new node;len=0;
			};
			
	
	void inputlist(int n,int a[])
	{
		
		node*tail=head;
	for (int i = 0; i < n; ++i) {
            tail->next=new node(a[i]);
            tail=tail->next;
            
        }
		len=n;
	}
	void reverse()
	{
		node*p1=head->next;//p1在前。p2在后 
		node*p2=NULL;
		node*nex;
		while(p1)
		{
			nex=p1->next;
			p1->next=p2;
			p2=p1;
			p1=nex;
			
			
			
		}
		head->next=p2;
		
	}
	
	
	
	
	
	
	
	
	void print()
	{
		node*p=head->next;
	
	
	for(int i=0;i<len;i++)
	{
		cout<<' '<<p->data;
			p=p->next;
		
	}
		
		cout<<'\n';
	}
	
	
};

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	linklist l;
	l.inputlist(n,a);
	cout<<"倒置前为：" ;
	l.print();
	cout<<"倒置后为：" ;
	l.reverse();
	l.print();
	
	
	return 0;
}
