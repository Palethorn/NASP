#include "element.h"
#ifndef TREE_H
#define TREE_H
class tree{
		private:
			element *root;
			int lvlsNo;
			int leavesNo;
			
		public:
			int addElement();
			int removeElement();
			void balance();	
	}
#endif
