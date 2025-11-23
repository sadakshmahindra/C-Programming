#include <stdio.h>
#include <string.h>

typedef struct Pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[20];
} pokemon ;
void change(pokemon *p) {
    // (*p).attack = 50;
    // (*p).hp = 80;
    // (*p).speed = 110;
    // (*p).tier = 'S';
    // strcpy((*p).name, "Richu");

    //========== THE CLEANER WAY ==================
    p->hp = 80;
    p->attack = 50;
    p->speed = 110;
    p->tier = 'S';
    strcpy(p->name, "Raichu");
    return;
}
int main() {
    pokemon pikachu = {60,70,100,'A',"Pikachu"}; // but here always follow the initialization sequence 
    // pikachu.hp = 60;
    // pikachu.speed = 100;
    // pikachu.tier = 'A';
    // pikachu.attack = 120;
    // strcpy(pikachu.name, "Pikachu");
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.speed);
    printf("%d\n", pikachu.attack);
    printf("%c\n", pikachu.tier);
    printf("%s\n\n", pikachu.name);

    change(&pikachu);

    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.speed);
    printf("%d\n", pikachu.attack);
    printf("%c\n", pikachu.tier);
    printf("%s\n", pikachu.name);
    // int *x = address ka integer value;
    // pokemon *x = &pikachu;
    // printf("%p\n", &pikachu.hp);
    // printf("%p\n", &pikachu.attack);
    // printf("%p\n", &pikachu.speed);
    // printf("%p\n", &pikachu.tier);
    // printf("%p\n", pikachu.name); // strings doesnt require & symbobut you can write it without any issues
    
    // (*x).hp = 70; //pikachu.hp = 70;
    // printf("%d", pikachu.hp);
    return 0;
}