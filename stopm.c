#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char command[150];

   strcpy( command, "tmux send -t world.0 'stop && exit' ENTER && tmux send -t other.0 'C-c' ENTER && tmux send -t other.0 'exit' ENTER" );
   system(command);

   return(0);
} 
