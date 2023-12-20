{// question 4
	int i=1;
	int factors;
	int N;
	int prime;

	cout<<"Please enter a natural number (N) : ";
	cin>>N;
	
	cout<< "The prime number(s) lesser than or eqaul to N are : ";
	
	while (i<=N )
	{
		factors=0;
		int j=1;
		
		while(j<=i)
		{
			if(i%j==0)
			factors++;
			j++;
		}
		if(factors==2)
		{
			prime=i;
			cout<<" "<<prime<<" ";
		}
		i++;
	}
	
	cout<<endl<<"The largest prime number lesser than or eqaul to N is : "<<prime;
}
