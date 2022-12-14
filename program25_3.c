/* write  a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

Input : "MarvellouS"
Output : 6 (8-2)

*/

#include<stdio.h>

int Difference(char *str)
{
   int iCnt = 0, iSnt = 0;
   
   while(*str != '\0') 
   {
      if(*str>='a' && *str<='z')
      {
         iSnt++;
      }
      else if(*str>='A' && *str<='Z')
      {
        iCnt++;
      }
      str++;
   
   } 
   return iSnt-iCnt;

}

int main()
{
  char arr[20];
  int iRet = 0;
  
  printf("Enter the String \n");
  scanf("%[^'\n']s",arr);
  
  iRet = Difference(arr);
  printf("%d\n",iRet);
  return 0;
}
