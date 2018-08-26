#include<stdio.h>
#include<math.h>
#include<string.h>
main()
{
	int n,i,j,p1,p2,choice,r,c,count=0;
	char arr[3][3],player1[50],player2[20];
	printf("This is the basic structure of tic tac toe\n\n");
	printf("\n\t00 | 01 | 02 \t");
	printf("\n\t-------------\t");
	printf("\n\t10 | 11 | 12 \t");
	printf("\n\t-------------\t");
	printf("\n\t20 | 21 | 22\t");
	printf("\n\n\n");
	printf("Select your player:");
	printf("\nEnter name of player one:");
	gets(player1);
	printf("Enter name of player two:");
	gets(player2);
	printf("\nWelcome\n");
	printf("\n");
	puts(player1);
	puts(player2);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr[i][j]='-';
		}
	}
	while(1)
	{
		printf("\nChoose Turn");
		printf("\n1. Player 1 will play");
		printf("\n2. Player 2 will play");
		printf("\n3.Exit from game");
		printf("\nEnter your choice:");
		scanf("%d", &choice);
		count=count+1;
		switch(choice)
		{
			case 1: printf("\nEnter the row and column number of your choice:");
					scanf("%d %d", &r, &c);
					arr[r][c]='X';
					for(i=0;i<3;i++)
					{
						for(j=0;j<3;j++)
						{
							printf("%c ", arr[i][j]);
						}
						printf("\n");
					}
					if((arr[0][0]=='X' && arr[0][1]=='X' && arr[0][2]=='X')||(arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='X')||(arr[1][0]=='X' && arr[1][1]=='X' && arr[1][2]=='X')||(arr[2][0]=='X' && arr[2][1]=='X' && arr[2][2]=='X')||(arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='X')||(arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='X')||(arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X')||(arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X'))
					{
						printf("\n");
						printf("\nThe winner is: ");
						puts(player1);
						exit(1);
					}
					if(count==9)
					{
						printf("\nGame Over\n");
						exit(1);
					}
					break;
					
			case 2: printf("\nEnter the row and column number of your choice:");
					scanf("%d %d", &r, &c);
					arr[r][c]='O';
					for(i=0;i<3;i++)
					{
						for(j=0;j<3;j++)
						{
							printf("%c ", arr[i][j]);
						}
						printf("\n");
					}
					if((arr[0][0]=='O' && arr[0][1]=='O' && arr[0][2]=='O')||(arr[0][0]=='O' && arr[1][0]=='O' && arr[2][0]=='O')||(arr[1][0]=='O' && arr[1][1]=='O' && arr[1][2]=='O')||(arr[2][0]=='O' && arr[2][1]=='O' && arr[2][2]=='O')||(arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='O')||(arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='O')||(arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O')||(arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O'))
					{
						printf("\n");
						printf("\nThe winner is: ");
						puts(player2);
						exit(1);
					}
					if(count==9)
					{
						printf("\nGame Over\n");
						exit(1);
					}
					break;
			
			case 3: exit(1);
			
			default: printf("\nEnter correct choice!!!");
					 break;
					 	
		}
	}
	return 0;
}
