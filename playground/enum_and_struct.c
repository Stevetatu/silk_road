#include<stdio.h>

// Define the categories
enum ItemType{
    WEAPON,
    ARMOR,
    POTION,
};

// Define the object
struct InventoryType{
    char name[20];
    int value;
    enum ItemType type; //enums becomes a member of the struct


};

void describeItem(struct InventoryType * self){
    printf("Item: %s, Value: %d gold, ", self->name, self->value);

    //Using a switch statement with enum
    switch (self->type)
    {
    case WEAPON: printf("Category: Weapon\n");
        break;
    case ARMOR: printf("Category: Armor\n");
        break;
    case POTION: printf("Category: Potion\n");
        break;      
    }
}

int main(){
    struct InventoryType sword = {"iron sword", 150, WEAPON};
    
    describeItem(&sword);
    
    return 0;
}