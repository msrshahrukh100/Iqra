vector<int> Solution::primesum(int A) {
    vector<int> primes;
    vector<int> Sol;
    primes.push_back(2);
    int i,j;
    for( i=3; i<=A; i++)
    {
    	int flag = 1;
    	for( j=2; j<=A; j++)
    	{
    		if((i % j) == 0)
    		{
    			flag = 0;
    			break;
    		}
    	}
    	if(flag == 1)
    		primes.push_back(i);
    } 

    // for(int i=0; i<primes.size(); i++)
    // 	cout<<primes[i]<<endl;
    int f = 1;
    for( i=0; i<primes.size(); i++)
    {
    	int temp = A - primes[i];
    	for( j=0; j<primes.size(); j++)
    	{
    		if(primes[j] == temp)
    		{
    			f = 0;
    			break;
    			// cout<<primes[i]<<primes[j];
    			
    		}
    	}
    	if(f == 0)
    		break;
    }

    Sol.push_back(primes[i]);
    Sol.push_back(primes[j]);
    for(int i=0; i<Sol.size(); i++)
    	cout<<Sol[i]<<endl;
   
    return Sol;



}
