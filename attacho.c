#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char command[150];

   strcpy( command, "tmux attach -t other" );
   system(command);

   return(0);
} 