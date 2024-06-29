#include <stdio.h>
#include <string.h>
void removeSpaces(char* str)
{
  int i, j;
  for (i=j=0;str[i]!='\0';i++)
  {
    if (str[i]!= ' ')
    {
      str[j++]=str[i];
    }
  }
  str[j]='\0';
}
void removeDuplicates(char* str)
{
  int i, j, k;
  for (i=0;str[i]!='\0';i++)
  {
    for (j=i+1;str[j]!='\0';j++)
    {
      if (str[i]==str[j])
      {
        for (k=j; str[k]!='\0';k++)
        {
          str[k]=str[k+1];
        }
        j--;
      }
    }
  }
}
void Capitalize(char* str)
{
    int i;
    for (i=0;str[i]!='\0';i++)
    {
      str[i]=str[i]-32;
    }
}
void removeLetters(char *str1, const char *str2)
{
  int i, j;
  for (i=j=0;str1[i]!='\0';i++)
  {
    if (!strchr(str2, str1[i]))
    {
      str1[j++] = str1[i];
    }
  }
  str1[j] = '\0';
}
void Segment(char* str, int x)
{
  int n=x, d, p=0, i=0, j, s=0, a[10];
  char temp;
  while (n>0)
  {
    d=n%10;
    i=10*i+d;
    n=n/10;
  }
  while (i>0)
  {
    d=i%10;
    n=n+d;
    i=i/10;
    a[p]=d;
    p++;
  }
  s=(strlen(str)/n);
  n=0;
  for (d=0;d<s;d++)
  {
    for (i=0;i<p;i++)
    {
      for (j=0;j<a[i]/2;j++)
     {
        temp=str[n+a[i]-j-1];
        str[n+a[i]-j-1]=str[n+j];
        str[n+j]=temp;
      }
      n+=a[i];
    }
  }
}
int main()
{
  int key, i, j, l, k=0, m=0, choice;
  char str[100], sx[100], sk[100], grid1[5][5], grid2[5][5], alpha[26];
  for (i=0;i<26;i++)
  {
    alpha[i]=65+i;
  }
  printf("Enter sentence: ");
  fgets(str, 100, stdin);
  printf("Enter key in word form: ");
  fgets(sk, 100, stdin);
  removeSpaces(sk);
  removeDuplicates(sk);
  Capitalize(sk);
  l=strlen(sk);
  sk[l-1] = '\0';
  l--;
  printf("Enter key in number form: ");
  scanf("%d",&key);
  removeSpaces(str);
  Capitalize(str);
  Segment(str,key);
  for (i=0;i<5;i++)
  {
    for (j=0;j<5;j++)
    {
      if (alpha[k]=='J')
      k++;
      grid1[j][i]=alpha[k];
      k++;
    }
  }
  for (i=0;i<5;i++)
  {
    for (j=0;j<5;j++)
    {
      printf("%c ",grid1[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  k=0;
  removeLetters(alpha,sk);
  for (i=0;i<5;i++)
  {
    for (j=0;j<5;j++)
    {
      if(k<l)
      {
        grid2[i][j]=sk[k];
        k++;
      }
      else
      {
        if (alpha[m]=='J')
        m++;
        grid2[i][j]=alpha[m];
        m++;
      }
    }
  }
  for (i=0;i<5;i++)
  {
    for (j=0;j<5;j++)
    {
      printf("%c ",grid2[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("Enter 1 for encryption. Enter 2 for decryption: ");
  scanf("%d",&choice);
  switch (choice)
  {
    case 1:
    for (i=0;i<5;i++)
    {
      for (j=0;j<5;j++)
      {
        for (k=0;k<l-1;k++)
        {
          if (grid1[i][j]==str[k])
          {
            sx[k]=grid2[i][j];
          }
        }
      }
    }
    break;
    case 2:
    for (i=0;i<5;i++)
    {
      for (j=0;j<5;j++)
      {
        for (k=0;k<l-1;k++)
        {
          if (grid2[i][j]==str[k])
          {
            sx[k]=grid1[i][j];
          }
        }
      }
    }
    break;
  }
  puts(sx);
  printf("\n");
  return 0;
}
