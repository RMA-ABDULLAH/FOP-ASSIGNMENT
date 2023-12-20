{// Project question 1

	string letter1;
	string letter2;
	
	cout<<"Please enter two letters of choice : \n";
	cout<<"1.";
	cin>>letter1;
	cout<<"2.";
	cin>>letter2;
	
	char temp;
	int count=0;
	
	for( int k=0; letter1[k] != '\0' ; k++)
	{
		count++;
	}
	int digit=count;
		
	if(letter1==letter2)
	{
		for( int i=0 ;i<count/2 ; i++  )
		{
			temp=letter1[i];
			letter1[i]=letter1[count-(i+1)];
			letter1[count-(i+1)]=temp;

		}
			
		for( int j=0 ; j<digit ; j++)
		{
			cout<<letter1[j];
		}
	}
	else
	{
		cout<<"The entered letters are not equal.";
	}
	return 0;
}
