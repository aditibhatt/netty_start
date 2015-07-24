#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void printDups(char *);
void charCount(char* str, int *count);
int find_max(int *count);
int main()
{
char str[]="geeksforgeeks";
printDups(str);


return 0;
}

void printDups(char * str)
{
int *count=(int*) calloc(256,sizeof(int));
charCount( str, count);
int i;
int max_elem;
max_elem=find_max(count);
printf("the max occuring element is %c \n",max_elem);  
 for(i=0;i<=255;i++)
 {
   if(count[i]>1)
   printf("%c %d \n",i, count[i]);
 }
free(count);

}
void charCount(char *str, int *count)
{
int i;
 for(i=0;i<*(str+i);i++)
 {
  count[*(str+i)]++;

 }
}
int find_max(int *count)
{
int i;
int max=0;
for(i=1;i<256;i++)
 {
 if(count[i]>count[max])
 {
  max=i;
 }
}
return max;

}
