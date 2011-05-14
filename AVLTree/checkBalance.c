int checkBalance(node* subtree){
	if(subtree -> balanceFactor > 2 && subtree -> left > 0){
		return 1;
	}
	if(subtree -> balanceFactor > 2 && subtree -> left < 0){
		return 2;
	}
	if(subtree -> balanceFactor < -2 && subtree -> right < 0){
		return 3;
	}
	if(subtree -> balanceFactor < -2 && subtree -> right > 0){
		return 4;
	}
	return 0;
}
