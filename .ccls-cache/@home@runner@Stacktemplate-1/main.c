#include <stdio.h>
#include <string.h>

#include "Stack.h"

int main(int argc, char **argv) {
   int i,j,value,empty = 1;
   STACK s;
    s.top=NULL;
    s.size=0;

   for(i=1;i<argc;i++){
   
   for(j=0;j<strlen(argv[i]);j++){
     
     switch(argv[i][j]){
       case '{': 
       case '[': push_s(&s,argv[i][j]);
       //printf("push %c\n",argv[i][j]); 
       break;

       case '}': 
       if(s.size==0)
         {
           empty = 0;
           break;
         }
       if('{'== s.top->data)
       {
           //printf("poping %c\n",pop_s(&s));
           pop_s(&s);
       }
       break ;
       
       case ']': 
       if(s.size==0)
         {
           empty = 0;
           break;
         }
       if('['== s.top->data)
       {
           //printf("poping %c\n",pop_s(&s));
           pop_s(&s);
       }
       break;
     }
    /* if(strcmp(argv[i],"x")==0) {
      value= pop_s(&s);
        if(s.size!=0) printf("pop %d\n",value);
        else printf("The stack is empty\n");
     }
     else{
     value=atoi(argv[i]);
     push_s(&s, value);
     printf("push %d\n",value);
     }
   }
*/
   }
     if(s.size!=0 || empty==0){
         printf("The parentheses do not match for ");
         for(j=0;j<strlen(argv[i]);j++)
         {
           printf("%c",argv[i][j]);
         }
         printf("\n");
         while(s.size!=0)
         {
           printf("poping %c\n",pop_s(&s));
         }
     }
     else 
     {
       printf("The parentheses match successfully for ");
       for(j=0;j<strlen(argv[i]);j++)
         {
           printf("%c",argv[i][j]);
         }
         printf("\n");
     }
   }
}