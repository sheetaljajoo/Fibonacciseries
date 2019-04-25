#Fibonacci Series
int s[10];   	#Signature definition variable
int n ; 		#Varaible n is number of values to be returned in result
int r[50]; 		#Result varaible declaration
int i=0;		#Array varaible indicator for signature
int j=0;		#Array varaible indicator for result
int c=0;		#signature varaible count
int x=0;		#Varaible for intermediate calculation
int temp=0;		#varaible for intermediate calculation

printf("Enter the signature:");
scanf s;
printf("enter the integer value of the number to be returned in the result:");
scanf n;

while s[i]>0	#Getting the count of numbers present in signature 
	{
		c=c+1;
		r[j] = s[i];
		i = i+1;
		j = j+1;
	};

n = n-c ; 		#To get the rest of numbers to get added in the result
while n>0;		#Running the loop for adding last n-c numbers in result
	{
		x=j;
		r[j] =0;
		temp = 0;
		while temp != c				#adding previous c numbers
			{
			r[j] = r[j] + r[x-1];
			x= x-1;
			temp = temp+1;
			}
		j=j+1;
		n=n-1;
	}
printf r[];

		
