/********************************************************************************
 *
 *
 *
 *
 *
 * ****************************************************************************/
#include<stdlib.h>
#include<stdio.h>


int bit_wise()

{
switch ()

	case 1:
	{int8_t input,variable;
	printf("print the number in binary up to 16 bits\n");	
	printf("enter the  number you want \n");
	scanf("%d",&variable);
	printf("enter the no.of bits you want to see binary data\n");
	scanf("%d",&input);
	for(int16_t b,i=input;i>=0,i--)
	{printf("binary of %d  is %d\n"variable,b=((variable>>input)&1));
	}
	}
	break;

	case 2:
	{int8_t input,variable;
	printf("set a particular bit in a variable or register\n");
	printf("enter the  variable or register you want \n");
	scanf("%d",&variable);
	printf("enter the bit you want to set in variable or register\n");	
	scanf("%d",&input);
	printf("output of the set bit program is %d\n",variable|=(1<<input));
	}
	break;

	case 3:
	{int8_t input,variable;
	printf("clear a particular bit in a variable or register\n");	
	printf("enter the  variable or register you want \n");
	scanf("%d",&variable);
	printf("enter the bit you want to clear in variable or register\n");		
	scanf("%d",&input);
	printf("output of the clear bit program is %d\n",variable&=~(1<<input));
	}
	break;

	case 4:
	{int8_t input,variable;
	printf("Toggle a particular bit in a variable or register\n");		
	printf("Enter the  variable or register you want \n");
	scanf("%d",&variable);
	printf("Enter the bit you want to toggle in variable or register\n");		
	scanf("%d",&input);
	printf("output of the toggle bit program is %d\n",variable^=(1<<input));
        }
	break;

	case 5:
	{int8_t input,variable;
	printf("Toggle a particular bit in a variable or register\n");
	printf("Enter the  variable or register you want \n")
	scanf("%d",&variable);
	printf("Enter the bit you want to toggle in variable or register\n");
	scanf("%d",&input);
	printf("output of the toggle bit program is %d\n",variable^=(1<<input));
	}
	break;

	default:
	printf("end of program\n");
