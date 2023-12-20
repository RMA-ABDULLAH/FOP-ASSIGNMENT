{// project question 5
	int temp;
	
	int array[6]={21,102,15,677,555,76};
	cout<<"Array before sorting : \n";
	cout<<"{";
	
	for( int y=0;y<=5;y++)
	{
		cout<<" "<<array[y];
	}
	cout<<"}\n";
	
	for( int i=0 ; i<=5 ; i++)
	{
		int min=INT_MAX;

		for( int j=i; j<=5 ; j++)
		{
				if( array[j]<min)
			{
				min=array[j];	
				temp = array[i];
				array[i]=array[j];
				array[j]=temp;
			}		
		}
	}
	cout<<"Array after sorting : \n";
	cout<<"{";
	for( int k=0; k<=5; k++)
	{
		cout<<" "<<array[k];
	}
	cout<<"}";
}
