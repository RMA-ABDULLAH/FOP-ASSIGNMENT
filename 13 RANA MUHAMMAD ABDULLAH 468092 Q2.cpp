{// project question 2

	char letter[9]={'a','b','d','u','l','l','a','h'};
	
	char alphabet[1];
	cout<<"The letter to be checked is 'abdullah'"<<endl;

	cout<<"The modified versoin of your letter is : "<<"'";
	
	for( int i=0 ; letter[i]!='\0'; i++)
	{
		
		for( int j=0 ; letter[j]!='\0'; j++)
		{
			if(i==j)
			{
				continue;
			}
			
			if (letter[i]==letter[j] )
			{
				alphabet[0]=letter[j];
				continue;
			}
			
		}	
				
		if (letter[i]==alphabet[0] )
			{
				continue;
			}
			
	cout<<letter[i];
	}
cout<<"'";
}
