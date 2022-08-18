#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char command[150];

   strcpy( command, "tmux send -t world.0 'stop' ENTER && tmux send -t other.0 'C-c' ENTER" );
   system(command);

   return(0);
} 