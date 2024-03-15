#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
	int hp;
	int attack;
	int speed;
	char tier;
	char name[15];
	}pokemon;
void change(pokemon* p){
	p->hp=70;
	p->attack=80;
	p->speed=110;
	p->tier='S';
	strcpy(p->name,"Raichu");
	return;
	}
int main(){
	pokemon pikachu={60,70,100,'A',"pikachu"};
	printf("%d\n",pikachu.hp);
	printf("%d\n",pikachu.attack);
	printf("%d\n",pikachu.speed);
	printf("%c\n",pikachu.tier);
	printf("%s\n",pikachu.name);
	
	
	return 0;
}	
