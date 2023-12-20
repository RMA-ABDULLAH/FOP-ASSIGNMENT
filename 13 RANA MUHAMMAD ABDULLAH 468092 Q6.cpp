{ //Question 6
	cout<<"DECIMAL TO BINARY CONVERSION "<<endl<<endl<<endl;
	int long quotient;
	int long decimal[9999];
	int count=0;
	cout<<"Enter a decimal value :";
	cin>>quotient;
	cout<<endl;
	
	for( int i=0 ; quotient>0 ; i++)
	{
		decimal[i]=quotient%2;
		quotient=quotient/2;
		count++;
	}
	
	cout<<"The Equivelant binary value for the given decimal is : ";
	
	for( int j=count-1 ;j>=0 ; j--)
	{
		cout<<decimal[j];
	}
	cout<<endl<<endl<<endl;
}
