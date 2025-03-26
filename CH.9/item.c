#include "item.h"


char DeathItem[Item_COL][Item_ROW + 1] =
{
	"***"
};


void ItemName(ITEM* itemPtr, int index)
{
	switch (index)
	{
	case 1:
		itemPtr->ITEMNAME = "Á×À½ÀÇ ¹ö¼¸";
		itemPtr->item = DeathItem;
		break;

	}
}
