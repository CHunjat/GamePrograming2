#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>
#define namelength 50
#define _CRT_SECURE_NO_WARNINGS

typedef struct Item
{
    char name[namelength];
    int price;
    int stack;
} Item;

void AddShopData(Item shop[], int* shopcount, const char* name, int price)
{
    strncpy(shop[*shopcount].name, name, namelength);
    shop[*shopcount].price = price;
    shop[*shopcount].stack = 1;
    (*shopcount)++;
}

void ShopTable(Item shoplist[], int shopcount)
{
    printf("================상점 목록================\n");
    printf("=========================================\n");
    printf("|   순번   |     이름      |    가격    |\n");
    for (int i = 0; i < shopcount; i++)
    {
        printf("| %5d    | %10s    | %7d    |\n", i + 1, shoplist[i].name, shoplist[i].price);
    }
    printf("=========================================\n");
    _getch();
}

void Userinventory(Item inven[], int invencount, int Won)
{
    printf("=============유저의 인벤토리=============\n");
    printf("=========================================\n");
    printf("|   순번   |    갯수    |      이름      |\n");
    for (int i = 0; i < invencount; i++)
    {
        printf("| %5d    |  %5d     |  %9s     |\n", i + 1, inven[i].stack, inven[i].name);
    }
    printf("=========================================\n");
    printf("| 보유금액 | : %d원                     | \n", Won);
    printf("=========================================\n");
    printf("상점에 진입하시려면 아무키나 입력해주세요\n");
    _getch();
}

bool BuyItem(Item item, Item inven[], int* invencount, int* Won)
{
    if (*Won >= item.price)
    {
        for (int i = 0; i < *invencount; i++)
        {
            if (strcmp(inven[i].name, item.name) == 0)
            {
                inven[i].stack++;
                *Won -= item.price;
                printf("%s를 추가로 구입했습니다. (총 수량: %d, 남은 금액: %d원)\n", item.name, inven[i].stack, *Won);
                _getch();
                return true;
            }
        }

        inven[*invencount].price = item.price;
        inven[*invencount].stack = 1;
        strncpy(inven[*invencount].name, item.name, namelength);
        (*invencount)++;
        *Won -= item.price;
        printf("%s를 구입했습니다. (남은 금액: %d원)\n", item.name, *Won);
    }
    else
    {
        printf("금액 부족하여 %s를 구입할 수 없습니다. (보유 금액: %d 원)\n", item.name, *Won);
        _getch();
        return false;
    }
    _getch();
    return true;
}

void ShopList(Item shop[], Item inventory[], int shopcount, int* invencount, int* Won)
{
    printf("상점 방문.(현재 보유금액 : %d 원)\n", *Won);
    while (true)
    {
        printf("1_목록확인 2_아이템 구입 3_상점을 떠난다 4_게임종료\n");
        int inputshop = 0;
        scanf_s("%d", &inputshop);
        int buyindex = 0;

        switch (inputshop)
        {
        case 1:
            ShopTable(shop, shopcount);
            break;
        case 2:
            printf("구입할 아이템 번호를 입력 해주십시오.\n");
            scanf_s("%d", &buyindex);
            if (buyindex >= 1 && buyindex <= shopcount)
            {
                BuyItem(shop[buyindex - 1], inventory, invencount, Won);
            }
            else
            {
                printf("잘못된 번호입니다\n");
            }
            break;
        case 3:
            return;
        case 4:
            exit(0);
        }
    }
}

int main()
{
    Item shop[namelength];
    int shopcount = 0;
    Item Inven[namelength];
    int invencount = 0;
    int Won = 800;

    Userinventory(Inven, invencount, Won);

    AddShopData(shop, &shopcount, "냄비뚜껑", 200);
    AddShopData(shop, &shopcount, "숏소드", 260);
    AddShopData(shop, &shopcount, "나무스태프", 180);
    AddShopData(shop, &shopcount, "나무활", 200);
    AddShopData(shop, &shopcount, "나이프", 210);
    AddShopData(shop, &shopcount, "카타나", 240);
    AddShopData(shop, &shopcount, "건틀렛", 280);

    while (1)
    {
        ShopList(shop, Inven, shopcount, &invencount, &Won);
        Userinventory(Inven, invencount, Won);
    }

    return 0;
}
