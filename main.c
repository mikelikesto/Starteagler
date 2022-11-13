#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char command[150];

   strcpy( command, "tmux new  -d -s world && tmux new -d -s other && tmux send -t world.0 'cd /home/$USER/1.18.2 && java -jar spigot-1.18.1.jar' ENTER && tmux send -t other.0 'cd /home/$USER/1.18.2/ayungee/target/ && java -jar ayungee-1.0-SNAPSHOT-jar-with-dependencies.jar' ENTER" );
   system(command);

   return(0);
} 
