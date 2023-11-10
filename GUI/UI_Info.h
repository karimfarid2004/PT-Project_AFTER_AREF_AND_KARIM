#ifndef UI_INFO_H
#define UI_INFO_H

#include "..\CMUgraphicsLib\CMUgraphics.h"

//User Interface information file.
//This file contains info that is needed by Input and Output classes to
//handle the user interface

enum GUI_MODE	//Graphical user interface mode
{
	MODE_DRAW,	//Drawing mode (startup mode)
	MODE_PLAY,	//Playing mode
	COLOR_SELECTION,
	FILL_COLOR_SELECTION,
	SHAPES_SELECTION
};

enum DrawMenuItem //The items of the Draw menu (you should add more items)
{
	//Note: Items are **(ordered)** here as they appear in menu
	//If you want to change the menu items order, change the order here
	ITM_SLCT,
	ITM_SHAPES,
	ITM_COLOR,
	ITM_FILL,
	ITM_PLYMOD,
	ITM_UNDO,
	ITM_REDO,
	ITM_DLET,
	ITM_CLR,
	ITM_REC,
	ITM_END,
	ITM_PLY,
	ITM_SAVE,
	ITM_LOAD,
	ITM_EXIT_DRAWMODE,		//Exit item
	
	DRAW_ITM_COUNT		//no. of menu items ==> This should be the last line in this enum
	
};

enum PlayMenuItem //The items of the Play menu (you should add more items)
{
	//Note: Items are **(ordered)** here as they appear in menu
	//If you want to change the menu items order, change the order here
	
	//TODO: Add more items names here
	ITM_TYP_COLOR,
	ITM_TYP_SHAPE,
	ITM_TYP_BOTH,
	ITM_SWITCH,
	ITM_EXIT_PLAYMODE,
	PLAY_ITM_COUNT		//no. of menu items ==> This should be the last line in this enum
	
};
enum ShapesItems
{
	ITM_RECT,		//Recangle item in menu
	ITM_CIRC,
	ITM_TRI,
	ITM_SQU,
	ITM_HEX,
	SHAPES_ITM_COUNT
};
enum ColorItems
{
	ITM_BLACK,
	ITM_BLUE,
	ITM_GREEN,
	ITM_ORANGE,
	ITM_RED,
	ITM_YELLOW,
	COLOR_ITM_COUNT
};
enum FillColorItems
{
	ITM_BLACK_FILL,
	ITM_BLUE_FILL,
	ITM_GREEN_FILL,
	ITM_ORANGE_FILL,
	ITM_RED_FILL,
	ITM_YELLOW_FILL,
	ITM_NO_FILL,
	FILL_COLOR_ITM_COUNT
};



__declspec(selectany) //This line to prevent "redefinition error"

struct UI_Info	//User Interface Info.
{
	GUI_MODE InterfaceMode;
	
	int	width, height,	    //Window width and height
		wx , wy,			//Window starting coordinates
		StatusBarHeight,	//Status Bar Height
		ToolBarHeight,		//Tool Bar Height (distance from top of window to bottom line of toolbar)
		MenuItemWidth;		//Width of each item in toolbar menu
	

	color DrawColor;		//Drawing color
	color FillColor;		//Filling color
	color HighlightColor;	//Highlighting color
	color MsgColor;			//Messages color
	color BkGrndColor;		//Background color
	color StatusBarColor;	//Status bar color
	int PenWidth;			//width of the pen that draws shapes

	/// Add more members if needed
	
}UI;	//create a global object UI

#endif