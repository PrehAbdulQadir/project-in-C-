 #include<stdio.h>
void main()
 {
 	int i,j,start,end,counter,num1,num2,choice,option,ture;
 	float feh,cel,kel;
 	char ch;
 	int a,b,Rs,dollor,riyal;
   do
   {
        printf("\n****************************************");
   	   	printf("\n**********THIS IS MAIN MEANU************");
   	   	printf("\n****************************************");
 		printf("\n        1. calculator");
 		printf("\n        2. Age Finder system ");
 		printf("\n        3. Temparture system ");
 		printf("\n        4. Loop sense ");
 	    printf("\n        5.mony convertor ");
	 	printf("\n        6. Exsit");
 		printf("\n        Enter your choice");
 		scanf("%d",&choice);
 		if(choice==1)
 		{ 			
		   do
   			{
   				
   				printf("\n*****************************\n");
 			  	printf("\nWELCOM IN CALCULTOR SYSTEM     ");
 			  	printf("\n*******************************");
 			  	printf("\n  1. Additon ");
 			  	printf("\n  2. subtarction ");
 			  	printf("\n  3. multiplication");
 			  	printf("\n  4. divid ");
 			  	printf("\n  5. Back ");
 			  	printf("\nEnter your option ");
 			  	scanf("%d",&option);
 			  	if(option==1)
 			  	{	
				    printf("\n*********************************");
 			  	    printf("\n     WELCON IN ADDISATION BLOCK ");
 			  	    printf("\n*********************************");
 			  		printf("\nEnter the first value ");
 			  		scanf ("%d",&num1);
 			  		printf("Enter the second value ");
 			  		scanf ("%d",&num2);
 			  		printf("\naddition of %d+%d==%d",num1,num2,num1+num2);
 			  	  	   
				}
				if(option==2)
				{
					printf("\n*********************************");
					printf("\n   WELCOME IN SUBTARCTION ");
					printf("\n*********************************");
					printf("\nEnter the first value ");
					scanf ("%d",&num1);
					printf("Enter the secound value ");
					scanf ("%d",&num2);
					printf("\nSnubtarction of %d-%d==%d",num1,num2,num1-num2);
				}
				if(option==3)
				{
					printf("\n*********************************");
				    printf("\n   WELCOME IN MULTIPLCATION ");
					printf("\n*********************************");					
					printf("\nEnter the first value ");
					scanf ("%d",&num1);
					printf("Enter the secound value ");
					scanf("%d",&num2);
                    printf("multipliction of %d*%d==%d",num1,num2,num1*num2);
				}
				if(option==4)
				{
					printf("\n*************************************");
					printf("\n   WELCOME IN DIVISION BLOCK");
					printf("\n*************************************");
					printf("\nEnter the first value ");
					scanf ("%d",&num1);
					printf("Enter the secound value ");
					scanf ("%d",&num2);
					printf("division of %d/%d==%d",num1,num2,num1/num2);
				}
				 if(option==5)
				{
					break;
				}
			}while(1);
		}// end of calcultor Block //
  

	
		if(choice==2)
		{
			do
			{
				printf("\n******************************************");
				printf("\n******WELCOME IN AGE FINDER SYSTEM********");
				printf("\n******************************************");
				printf("\n  1. Older age ");
				printf("\n  2. younger age");
				printf("\n  3. same age ");
				printf("\n  4. back ");
				printf("\nEnter your option");
				scanf ("%d",&option);
				if(option==1)
				{
					printf("\n*******************************");
					printf("\n WELCOME IN OLDER AGE BLOCK");
					printf("\n*******************************");
					printf("\nEnter the age of preh ");
					scanf ("%d",&num1);
					printf("Enter the age of falak ");
					scanf ("%d",&num2);
					if(num1>num2)
					{
						printf("preh is older than falak ");
					}
					if(num2>num1)
					{
						printf("falak is older than preh ");
					}
				}
				if(option==2)
				{
				    printf("\n*********************************");
					printf("\n  WELCOME IN YOUNGER AGE BLOCK ");
					printf("\n*********************************");
					printf("\nEnter the age of preh");
					scanf ("%d",&num1);
					printf("Enter the age of falak ");
					scanf ("%d",&num2);
					if(num1<num2)
					{
						printf("preh is younger than falak");
					}
					if(num2<num1)
					{
						printf("falak is younger than preh");
					}
				}
				if(option==3)
				{
					printf("\n*********************************");			
					printf("\n   WELCOME IN EQUAL AGE BLOCK ");
					printf("\n*********************************");		
					printf("\nEnter the age of preh ");
					scanf ("%d",&num1);
					printf("Enter the age of falak ");
					scanf ("%d",&num2);
					if(num1==num2)
					{
						printf("preh and falak are same ager");
					}
					if(num1!=num2)
					{
						printf("falak and preh are not same ager");
					}
				}
				if(option==4)
				{
					break;
				}
			}
			while(1);
		}// end of Age finder //
		if(choice==3)
		{
			do
			{
				printf("\n***************************************");
				printf("\n****WELCOME IN THE TEAMPERTURE BLOCK***");
				printf("\n***************************************");
				printf("\n   1. Fehrenhgit to Celcuis ");
				printf("\n   2. Celsius to Fehenhgit  ");
				printf("\n   3. Kelvin to Celsius ");
				printf("\n   4. Celsius to Kelvin ");
				printf("\n   5. Back ");
				printf("\n   Enter your option");
				scanf ("%d",&option);
				if(option==1)
				{
					printf("\n**********************************************");
					printf("\n   WELCOME IN FEHRENGHIT TO CELSIUS CONVERTOR ");
					printf("\n***********************************************");
					printf("\nEnter the fehrenhgit ");
					scanf("%f",&feh);
					cel=feh-32*5/9;
					printf("\nFehrenghit to celsius %f ",cel);
				}
				if(option==2)
				{
					printf("\n********************************************");
					printf("\n  WELCOME IN  CELSIUS TO FEHENGHIT CONVERTOR");
					printf("\n********************************************");
					printf("\nEnter the celcsius ");
					scanf("%f",&cel);
					feh=cel+32*9/5;
					printf("\nCelcsius to fehrenghit %f",feh);
				}
				if(option==3)
				{
					printf("\n*********************************************");
					printf("\n   WELCOME IN THE KELVINE TO CELSIUS CONERTOR");
					printf("\n**********************************************");
					printf("\nEnter the kelvin ");
					scanf("%f",&kel);
					cel=kel-273.15;
					printf("Kelvin to celsius %f",cel);
				}
				if(option==4)
				{
					printf("\n*********************************************");
					printf("\n   WELCOME IN THE CELSIUS TO KELVINE CONERTOR");
					printf("\n**********************************************");
					printf("\nEnter the celsius");
					scanf ("%f",&cel);
					kel=cel+273.15;
					printf("Celsius to kelvin %f",kel);
				}
				if(option==5)
				{
					break;
				}
				
			}
			while(1);
		}// end of teamperature block//
		if(choice==4)
		{
			do
			{
				printf("\n*************************************");
				printf("\n******WELCOME IN THE LOOP SENCE******");
				printf("\n*************************************");
				printf("\n   1. odd ");
				printf("\n   2. even ");
				printf("\n   3. prime ");
				printf("\n   4. tables chart ");
				printf("\n   5.Back       ");
				printf("\n   Enter your opion ");
				scanf("%d",&option);
				if(option==1)
				{
					printf("\n***********************************");
                    printf("\n   WELCOME IN ODD SEARIES ");
                    printf("\n***********************************");
					printf("Enter the start of odd number  ");
					scanf ("%d",&start);
					printf("Enter the end of odd series ");
					scanf ("%d",&end);
					for(i=start;i<=end;i++)
					{
						if(i%2!=0)
						{
							printf("\n%d",i);
						}
					}
				}
				if(option==2)
				{
					printf("\n************************************");
					printf("\n    WELCOM IN THE EVEN SEARIES ");
                    printf("\n************************************");					
					printf("Enter start of Even series number");
					scanf("%d",&start);
					printf("Enter the end of Even series number ");
					scanf("%d",&end);
					for(i=start;i<=end;i++)
					{
						if(i%2==0)
						{
							printf("\n%d",i);
						}
					}
				}
				if(option==3)
				{
					printf("\n**********************************");
					printf("\n  WELCOME IN PRIME NUMER SEARIES  ");
					printf("\n**********************************");
					printf("Enter the prime number ");
					scanf ("%d",&start);
					printf("Enter the end of prime number series");
					scanf ("%d",&end);
					for(i=start;i<=end;i++)
				     {
				     	counter=0;
				     	for(j=i;j>=1;j--)
				     	{
				     		if(i%j==0)
				     		{
				     		   counter =counter+1;	
							}
						}
						if(counter==2)
						{
							printf("\n%d",i);
						}
					}
				}
				if(option==4)
				{
					printf("\n*************************************");
					printf("\n     WELCOME IN THE TABLE CHARTS     ");
					printf("\n*************************************");
					printf("Enter start of a Table chart");
					scanf ("%d",&start);
					printf("Enter end of the Table chart");
					scanf ("%d",&end);
					printf("Enter the counter of table ");
					scanf("%d",&counter);
					for(i=start;i<=end;i++)
					{
						printf("\n****************************\n");
						for(j=1;j<=counter;j++)
						{
							printf("\n%d*%d==%d",i,j,i*j);
						}
					}
				}
				if(option==5)
				{
					break;
				}
			}
			while(1);
		}//end of loop sense//
			if(choice==5)
		{
			do
			{
				printf("\n**********************************");
				printf("\n****WELCOME IN MANOY CONVATOR*****");
				printf("\n**********************************");
				printf("\n    1. Rupees to Dollor");
				printf("\n    2. Dollor to Rupees");
				printf("\n    3. Riyal to Rupees ");
				printf("\n    4. Rupees to Riyal ");
				printf("\n    5. back");
				printf("\n    Enter your optaion ");
				scanf ("%d",&option);
				if(option==1)
				{
					printf("\n*****************************");
					printf("\n Welcome in Rupees to Dollor curency Block");
					printf("\n*****************************");
					printf(" \nEnter the Rupees  ");
					scanf ("%d",&Rs);
					dollor=170/Rs;
					printf(" \nRupees to Dollor %d will be %d ",Rs,dollor);
				}
				if(option==2)
				{
					printf("\n*****************************");
					printf("\nWelcame in Dollor to rupees curency Block ");
					printf("\n*****************************");
					printf("\nEnter the Dollor  ");
					scanf ("%d",&dollor);
					Rs=170*dollor;
					printf("\nDollor to rupees %d will be %d",dollor,Rs);
				}
				if(option==3)
				{
					printf("\n*******************************");
					printf("\nWelcome in conver Riyal to Rupees curncy Block");
                    printf("\n*******************************");
					printf("\nEnter the Riyal  ");
					scanf ("%d",&riyal);
					Rs=riyal*5;
					printf("\nRiyal to Rupees %d will be %d",riyal,Rs);
				}
				if(option==4)
				{
					printf("\n******************************");
					printf("\nwelcome in Rupees to riyal curency Block ");
					printf("\n******************************");
					printf("\nEnter the Rupees  ");
					scanf ("%d",&Rs);
					riyal=Rs/5;
					printf("\nRupees to riyal %d will be %d ",Rs,riyal);
				}
					if(option==5)
				{
				    break;
				}
			}while(1);
		}//end of mony conventr//
		if(choice==6)
		{
			break;
		}
	}
	while(1);
 
 }
