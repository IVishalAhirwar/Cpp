/*Copyright© Vishal Ahirwar. All rights reserved.*/
//Happy Coding!  

.

#include<stdio.h>
#include<iostream>
int main()
{	
std::cout<<"\nWelcome to Your Bank of Varora\n";

try
{
	FILE*file;
	file =fopen("password.vi99","r");
	std::string name,pwd,dname,dpwd;
	fscanf(file,"%s",&dname);
	fscanf(file,"%s",&dpwd);
	
	std::cout<<"Please Enter Your Username : ";
	getline(std::cin, name);
	std::cout<<"Please Enter Your Password : ";
	getline(std::cin, pwd);
	
	if(name==dname&&dpwd==pwd)
	{
		std::cout<<"Access Granted!";
		
	}else
	{
		FILE* file =fopen("password.vi99","w");
		
	};
	
	
	
}catch (int&e)
{
	std::cout<<"Please First Create Your Account : ";
	FILE* file;
	file =fopen("password.vi99","r");
	
};
}