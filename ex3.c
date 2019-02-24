#include <stdio.h>
#include <string.h>

char animals[20][15];
char lyrics[20][60];
int  number;

void nurseryrhyme(int current) {
printf("%*s",current,"");
if(current==0){
printf("There was an old lady who swallowed a ");
printf("%s",animals[0]);
printf(";\n");
}
else{
printf("She swallowed the ");
printf("%s",animals[current-1]);
printf(" to catch the");
printf(" %s;\n",animals[current]);
}                                                // print "current" number of spaces

                                                // print something before the recursive call
                                                // you need to check if the current level is 0
                                                //   if so, print "There was an old lady..."
                                                //   or if it is > 0, print "She swallowed ..."

  if(current < number-1)                        // if we are not at the last animal, make the recursive call
    nurseryrhyme(current+1);
 printf("%*s",current,"");
printf("I don't know why she swallowed a %s - %s\n",animals[current],lyrics[current]);                                               // print something after the recursive call
}


int main() {
  int i=0;

  while (1) {
    fgets(animals[i],15,stdin);                                       // read the next animal name
    if (strcmp(animals[i], "END\n") == 0)       // if it is "END\n", we are done reading
      break;
    int length=strlen(animals[i])-1;
    animals[i][length]='\0';
    fgets(lyrics[i],60,stdin);                                          // determine the length of the string read
    int length2=strlen(lyrics[i])-1;
    lyrics[i][length2]='\0';                                            // strip the newline at the end
                                                // read the lyric corresponding to the animal
    i++;
  }

  number = i;

  nurseryrhyme(0);
}
