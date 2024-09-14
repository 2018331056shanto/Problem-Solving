
bool subTree(root,sub)
{

	
	if(root==NULL)
	{
		return false;
	}
	
	if isSame(root,sub)
		return true;

	else
		subTree(root->left)
	subTree(root->right)


}

bool isSame(root,sub)
{
	if(root==NULL &&sub==NULL)
	{
		return true;
	}
	if(root==NULL||sub==NULL)
	{
		return false;
	}

	isSame(roo->left,sub->left);
	isSame(root->right,sub->right);

}


