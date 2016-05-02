#ifndef ABB_H_
#define ABB_H_

class ABB
{
	public:
		struct Node
		{
			int value;
			Node * left;
			Node * right;
			int leftSize;
			int rightSize;
		};

	private:
		Node * root;
};

#endif