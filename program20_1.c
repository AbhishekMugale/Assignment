//Accept Number of rows and number of columns from user and display below patern

//Input : iRow = 4      iCol = 4

//Output  :    A   B   C   D
//             A   B   C   D
//             A   B   C   D
//             A   B   C   D
//             

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
   int i=0,j=0;
   
   for(i=0;i<iRow;i++)
   {  
      char ch = 'A';
      for(j=0;j<iCol;j++)
      {
         printf("%c\t",ch);
         ch++;
      }
    printf("\n");
   }

}

int main()
{
   int iValue1=0,iValue2=0;
   printf("Enter number of rows and columns\n");
   scanf("%d %d",&iValue1,&iValue2);
   Pattern(iValue1,iValue2);

   return 0;
   
}
