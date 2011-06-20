/*
    Adelson-Velskii & Landis Tree implementation
    Copyright (C) 2011  David Ćavar

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/*
* Function that checks balance factors
*/
#include "header.h"
int checkBalance(node* subtree){
	if(subtree -> balanceFactor >= 2 && subtree -> left -> balanceFactor > 0){// If it need single right rotate
		return 1;
	}
	if(subtree -> balanceFactor >= 2 && subtree -> left -> balanceFactor < 0){// If it needs double rotate, first rotate child to the left then root to the right
		return 2;
	}
	if(subtree -> balanceFactor <= -2 && subtree -> right -> balanceFactor < 0){// If it need single left rotate
		return 3;
	}
	if(subtree -> balanceFactor <= -2 && subtree -> right -> balanceFactor > 0){// If it needs double rotate, first rotate child to the right then root to the left
		return 4;
	}
	return 0;// If balancing is not required
}
