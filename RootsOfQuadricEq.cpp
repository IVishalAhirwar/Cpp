/*Copyright© Vishal Ahirwar. All rights reserved.*/
//Happy Coding!  


#include<iostream>
#include<cmath>
int main()
{
	int a, b, c, result1,result2;
	std::cout<<"Please Enter a, b, c -";
	std::cin>>a>>b>>c;
	
	result1 =
	(
		-b+
		std::sqrt(((b*b)-(4*a*c)))
	)
	/
	(2*a);
	
	result2 =
	(
		-b-std::sqrt((b*b)-(4*a*c))
	)
	/
	(2*a);
	
	
	
	std::cout<<"Root is for + : "<<result1;
	std::cout<<"\nRoot is for - : "<<result2;
	
	
	return 0;
	
};
