#include <stdio.h>
#define MAX 100
int i;
char pattern[MAX];
void generatePattern(int n){
pattern[i]='\0';
if(n==i){
     printf("%s\n",pattern);
     return;
}
     pattern[n]='0';
     generatePattern(n+1);
     if(pattern[n-1]!='1'){
     pattern[n]='1';
     generatePattern(n+1);
}

}
int main(){
  scanf("%d",&i);
  generatePattern(0);
}
