#ifndef listKer_h
#define listKer_h

class KernelSem;

struct NodeKer
{

  KernelSem *data;
  NodeKer *next;

  NodeKer (KernelSem *k, NodeKer *n=0):data(k), next(n){}
 ~NodeKer(){}

};

class ListKernel
{
private:
	NodeKer *head;
	NodeKer *last;

public:
	ListKernel()
	{
		head=last=0;
	}
	void put(KernelSem *t);
	NodeKer* getHead();
	void removeAll();
	int isEmpty();
	void checkSemaphores();
	~ListKernel();
};
#endif
