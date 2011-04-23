#ifndef NODE_H
#define NODE_H
	class element{
		private:
			int value;
			element *left;
			element *rigt;	
		public:
			int addChild(element *root, int value);
			int removeChild(element *subroot);
			int balance(element *subroot);
	}
#endif
