/*wap to find if a student failed or not if it requires total marks is less than 40
  and subject marks are less 33 . Take any 3 subjects*/
  #include<stdio.h>
  int main()
{
    int physics,chem,maths;
	float total;
	
	printf("Enter Physics marks\n");
	scanf("%d",&physics);
	
	printf("Enter Chemistry marks\n");
	scanf("%d",&chem);
	
	printf("Enter Maths marks\n");
	scanf("%d",&maths);
	
	total =(physics + chem + maths)/3;
	
	if((total<40) || physics < 33 || chem    < 33 || maths < 33)
    {
      printf("your total percentage is %.2f and you failed.\n",total);
	}
	else
    {
      printf("your total percentage is %.2f and you passed.\n",total);
	}

    return 0;
}