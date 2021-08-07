#include <stdio.h>

int main()
{
  struct scores
  {
    char name[32];
    int score;
  };
  struct scores player[4];
  int x;

  for(x=0; x<4; x++)
  {
    printf("Enter player %d: ", x+1);
    scanf("%s", player[x].name);
    printf("Enter their score: ");
    scanf("%d", &player[x].score);
  }

  puts("Player Info");
  printf("#\tName\tScore\n");

  struct scores temp = player[0];
  /* Bubble sort */
  int outer = 0, inner = 0;
  int size = 4;
  for(outer=0; outer<size-1; outer++)
  {
    for(inner=outer+1; inner<size; inner++)
    {
      if(player[outer].score < player[inner].score)
      {
	temp = player[outer];
	player[outer] = player[inner];
	player[inner] = temp;
      }
    }
  }
  
  for(x=0; x<4; x++)
  {
    printf("%d\t%s\t%5d\n",
	   x+1, player[x].name, player[x].score);
  }
  return(0);
}
