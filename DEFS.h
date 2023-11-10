#ifndef DEFS_H
#define DEFS_H

#include "CMUgraphicsLib\CMUgraphics.h"

//This file contains some global constants and definitions to be used in the project.
enum ActionType //The actions supported (you can add more if needed)
{
	TO_ShapesToolBar,
	DRAW_RECT,		//Draw Rectangle
	DRAW_SQUARE,	//Draw Rectangle		
	DRAW_CIRCLE,	//Draw Circle
	DRAW_TRIANGLE,	//Draw Triangle
	DRAW_HEXAGON,	//Draw Hexagon
	EXIT,			//Exit
	TO_DRAW,		//Switch interface to Draw mode
	TO_PLAY,		//Switch interface to Play mode
	TO_COLOR,
	TO_FILL,
	UNDO,
	REDO,
	DEL,
	CLEAR,
	RECVID,
	ENDVID,
	PLYVID,
	SAVE,
	LOAD,
	PLAYCOLOR,
	PLAYSHAPE,
	PLAYBOTH,
	SWITCH,
	EMPTY,			//A click on empty place in the toolbar
	DRAWING_AREA,	//A click on the drawing area
	STATUS,		//A click on the status bar
	SELECT_BLACK,
	SELECT_BLUE,
	SELECT_GREEN,
	SELECT_ORANGE,
	SELECT_RED,
	SELECT_YELLOW,
	SELECT_BLACK_FILL,
	SELECT_BLUE_FILL,
	SELECT_GREEN_FILL,
	SELECT_ORANGE_FILL,
	SELECT_RED_FILL,
	SELECT_YELLOW_FILL,
	SELECT_NO_FILL

	///TODO: Add the other action types of the two modes
};

struct Point	//To be used for figures points
{ int x,y; };

struct GfxInfo	//Graphical info of each figure (you may add more members)
{
	color DrawClr;	//Draw color of the figure
	color FillClr;	//Fill color of the figure
	bool isFilled;	//Figure Filled or not
	int BorderWdth;	//Width of figure borders

};

#endif