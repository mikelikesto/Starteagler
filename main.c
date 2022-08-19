#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char command[150];

   strcpy( command, "tmux new  -d -s world && tmux new -d -s other && tmux send -t world.0 'cd /home/$USER/java/bukkit_command && ./run_unix.sh' ENTER && tmux send -t other.0 'cd /home/$USER/java/bungee_command && ./run_unix.sh' ENTER" );
   system(command);

   return(0);
} 
