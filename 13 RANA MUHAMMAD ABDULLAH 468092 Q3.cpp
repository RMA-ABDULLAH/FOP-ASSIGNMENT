{// project question 3, complete
	
	int variable;
	cout<<"How many elements in the array would you like to add : ";
	cin>>variable;
	
	int array[variable]={1,2,3,4,5};
	
	for ( int i=5 ; i<variable; i++)
	{
		array[i]=i+1;
	}
	
	cout<<"{ ";
	
	for( int j=0; j<variable ; j++ )
	{
		cout<<array[j]<<" ";
	}
	cout<<"}";
}
