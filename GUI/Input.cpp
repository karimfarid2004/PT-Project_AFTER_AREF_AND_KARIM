#include "Input.h"
#include "Output.h"


Input::Input(window* pW) 
{
	pWind = pW; //point to the passed window
}

void Input::GetPointClicked(int &x, int &y) const
{
	pWind->WaitMouseClick(x, y);	//Wait for mouse click
}

string Input::GetSrting(Output *pO) const 
{
	string Label;
	char Key;
	while(1)
	{
		pWind->WaitKeyPress(Key);
		if(Key == 27 )	//ESCAPE key is pressed
			return "";	//returns nothing as user has cancelled label
		if(Key == 13 )	//ENTER key is pressed
			return Label;
		if((Key == 8) && (Label.size() >= 1))	//BackSpace is pressed
			Label.resize(Label.size() -1 );			
		else
			Label += Key;
		if (pO)
			pO->PrintMessage(Label);
	}
}

//This function reads the position where the user clicks to determine the desired action
ActionType Input::GetUserAction() const
{
	int x, y;
	pWind->WaitMouseClick(x, y);	//Get the coordinates of the user click

	if (UI.InterfaceMode == MODE_DRAW)	//GUI in the DRAW mode
	{
		//[1] If user clicks on the Toolbar
		if (y >= 0 && y < UI.ToolBarHeight)
		{
			//Check whick Menu item was clicked
			//==> This assumes that menu items are lined up horizontally <==
			int ClickedItemOrder = (x / UI.MenuItemWidth);
			//Divide x coord of the point clicked by the menu item width (int division)
			//if division result is 0 ==> first item is clicked, if 1 ==> 2nd item and so on

			switch (ClickedItemOrder)
			{
				//case ITM_RECT: return DRAW_RECT;
			case ITM_PLYMOD: return TO_PLAY; /////////////////////////////////////WAITING FOR SAMEH

			default: return EMPTY;	//A click on empty place in desgin toolbar
			}
		}

		//[2] User clicks on the drawing area
		if (y >= UI.ToolBarHeight && y < UI.height - UI.StatusBarHeight)
		{
			return DRAWING_AREA;
		}

		//[3] User clicks on the status bar
		return STATUS;
	}
	else if (UI.InterfaceMode == MODE_PLAY)	//GUI is in PLAY mode
	{
		///TODO:
		//perform checks similar to Draw mode checks above
		//and return the correspoding action
		if (y >= 0 && y < UI.ToolBarHeight)
		{
			//Check whick Menu item was clicked
			//==> This assumes that menu items are lined up horizontally <==
			int ClickedItemOrder = (x / UI.MenuItemWidth);
			//Divide x coord of the point clicked by the menu item width (int division)
			//if division result is 0 ==> first item is clicked, if 1 ==> 2nd item and so on

			switch (ClickedItemOrder) {

			case ITM_SWITCH:return TO_DRAW; ////////////////WAINTING FOR SAMEH

			}

			//return TO_PLAY;	//just for now. This should be updated
		}
	}
	else if (UI.InterfaceMode == COLOR_SELECTION)
	{
		if (y >= 0 && y < UI.ToolBarHeight)
		{
			int ClickedItemOrder = (x / UI.MenuItemWidth);

			switch (ClickedItemOrder) {

			case ITM_BLACK:return SELECT_BLACK;
			case ITM_BLUE:return SELECT_BLUE;
			case ITM_GREEN:return SELECT_GREEN;
			case ITM_ORANGE:return SELECT_ORANGE;
			case ITM_RED:return SELECT_RED;
			case ITM_YELLOW:return SELECT_YELLOW;

			}
		}

	}
	else if (UI.InterfaceMode == FILL_COLOR_SELECTION)
	{
		if (y >= 0 && y < UI.ToolBarHeight)
		{
			int ClickedItemOrder = (x / UI.MenuItemWidth);

			switch (ClickedItemOrder) {

				switch (ClickedItemOrder) {

				case ITM_BLACK:return SELECT_BLACK_FILL;
				case ITM_BLUE:return SELECT_BLUE_FILL;
				case ITM_GREEN:return SELECT_GREEN_FILL;
				case ITM_ORANGE:return SELECT_ORANGE_FILL;
				case ITM_RED:return SELECT_RED_FILL;
				case ITM_YELLOW:return SELECT_YELLOW_FILL;
				case ITM_NO_FILL:return SELECT_NO_FILL;

				}
			}
		}
		else if (UI.InterfaceMode == SHAPES_SELECTION)
		{
			if (y >= 0 && y < UI.ToolBarHeight)
			{
				int ClickedItemOrder = (x / UI.MenuItemWidth);

				switch (ClickedItemOrder) {
				 //////////WAITING FOR SAMEH

				}
			}
		}
	}
}
/////////////////////////////////
	
Input::~Input()
{
}
