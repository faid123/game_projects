#include "windows.h"
#include "Border.h"
#include "Console/Console.h"

//*********************************************************************************
//								GAME BORDERS
//*********************************************************************************
void Border()
{
	int i;
	// selecting the borders according to ascii table
	char topleft = 201;
	char topright = 187;
	char botleft = 200;
	char botright = 188;
	char topbot = 205;
	char leftright = 186;

	// placing corners of the borders
	Console_Putchar(2, 0, topleft);
	Console_Putchar(80, 0, topright);
	Console_Putchar(2, 50, botleft);
	Console_Putchar(80, 50, botright);
	// placing the top of the border
	for (i = 3; i <= 79; i++)
	{
		Console_Putchar(borderx+i, 0, topbot);
	}
	// placing the left of the border
	for (i = 1; i <= 49; i++)
	{
		Console_Putchar(2, bordery+i, leftright);
	}
	// placing the bottom of the border
	for (i = 3; i <= 79; i++)
	{
		Console_Putchar(borderx+i, 50, topbot);
	}
	// placing the right of the border
	for (i = 1; i <= 49; i++)
	{
		Console_Putchar(80, bordery+i, leftright);
	}
}
