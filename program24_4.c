/* accept character from user and check whether it is special symbol or not(!,@,#,$,%,^,&,*).

Input : %
Output ; TRUE

Input : d
Output : FALSE;

*/
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSpecial(char ch)
{
  char chr[8]={'!','@','#','$','%','^','&','*'};
  int icnt=0;
  for(int i=0;i<=8;i++)
  {
     if(chr[i]==ch)
     {
       icnt++;
       break;
     }
  }
  if(icnt!=0)
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }

}

int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE;
  
  printf("Enter the character \n");
  scanf("%c",&cValue);
  
  bRet = ChkSpecial(cValue);
  
  if(bRet == TRUE)
  {
     printf("It is Special character\n");
  }
  else
  {
    printf("It is not a special character\n");
  }
  
  return 0;
}
