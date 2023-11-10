#include "GUI\Input.h"
#include "GUI\Output.h"

//This is a test code to test the Input and Output classes

int main()
{
	int x, y;

	//Create Input and Output objects to test
	Output* pOut = new Output();
	Input* pIn = pOut->CreateInput();

	//Starting the test
	pOut->PrintMessage("This demo is to test input and output classes, Click anywhere to start the test");
	pIn->GetPointClicked(x, y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 1:	
	//			Create The FULL Tool bar, the drawing area and the status bar	
	//			This has already been done through the constrcutor of class Output
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST1: Drawing Tool bar and Status bar, Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 2:	
	//			Drawing all the Figures with all possible states: 
	//			Non-filled, Filled, and highlighted in both cases			
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST2: Now we will show that Output class can draw any figure in any state, Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	GfxInfo gfxInfo;//to be used with draw function of the class Ouput
	Point P1, P2, P3;

	/// =============================2.1- Rectangle Test============================== ///
	/// =================== 
	pOut->PrintMessage("Drawing a Rectangle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	// 2.1.1 - Drawing non-filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> non-filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawRect(P1, P2, gfxInfo, false);

	// 2.1.2 - Drawing highlighted non-filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawRect(P1, P2, gfxInfo, true);


	// 2.1.3 - Drawing a filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GREEN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawRect(P1, P2, gfxInfo, false);


	// 2.1.4 - Drawing a highlighted filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawRect(P1, P2, gfxInfo, true);



	pOut->PrintMessage("Drawing a Rectangle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->ClearDrawArea();

	///======================== 2.2- Square Test ===============================///
	/// ============== 
	pOut->PrintMessage("Drawing a Square, filled / non - filled and Highlighted filled / non - filled, Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	///TODO: Add code to draw Square, Normal and Highlighted

	// 2.2.1 - Drawing non-filled square
	pOut->PrintMessage("Drawing a Square ==> non-filled,  Click one points");
	pIn->GetPointClicked(x, y);	//Wait for any click
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawSqur(P1, gfxInfo, false);

	// 2.2.2 - Drawing highlighted non-filled square
	pOut->PrintMessage("Drawing a Square ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawSqur(P1, gfxInfo, true);


	// 2.2.3 - Drawing a filled square
	pOut->PrintMessage("Drawing a Square ==> filled,  Click one points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GREEN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawSqur(P1, gfxInfo, false);


	// 2.2.4 - Drawing a highlighted filled square
	pOut->PrintMessage("Drawing a Square ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawSqur(P1, gfxInfo, true);


	pOut->PrintMessage("Drawing a Square Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->ClearDrawArea();

	///======================= 2.3- Triangle Test ================================== ///
	/// =================== 
	pOut->PrintMessage("Drawing a Triangle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	///TODO: Add code to draw Triangle in all possible states


	// 2.3.1 - Drawing non-filled triangle
	pOut->PrintMessage("Drawing a Triangle ==> non-filled,  Click Three points");
	pIn->GetPointClicked(P1.x, P1.y);	//Wait for any click
	pIn->GetPointClicked(P2.x, P2.y);	//Wait for any click
	pIn->GetPointClicked(P3.x, P3.y);	//Wait for any click
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawTrig(P1, P2, P3, gfxInfo, false);

	// 2.3.2 - Drawing highlighted non-filled triangle
	pOut->PrintMessage("Drawing a Triangle ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawTrig(P1, P2, P3, gfxInfo, true);


	// 2.3.3 - Drawing a filled triangle
	pOut->PrintMessage("Drawing a Triangle ==> filled,  Click Three points");
	pIn->GetPointClicked(P1.x, P1.y);	//Wait for any click
	pIn->GetPointClicked(P2.x, P2.y);	//Wait for any click
	pIn->GetPointClicked(P3.x, P3.y);	//Wait for any click
	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GREEN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawTrig(P1, P2, P3, gfxInfo, false);


	// 2.3.4 - Drawing a highlighted filled triangle
	pOut->PrintMessage("Drawing a Triangle ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawTrig(P1, P2, P3, gfxInfo, true);

	pOut->PrintMessage("Drawing a Triangle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->ClearDrawArea();

	///======================= 2.4- Hexagon Test==================================== ///
	/// =================== 
	pOut->PrintMessage("Drawing a Hexagon, filled / non - filled and Highlighted filled / non - filled, Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	///TODO: Add code to draw Hexagon, Normal and Highlighted

	// 2.2.1 - Drawing non-filled Hexagon
	pOut->PrintMessage("Drawing a Hexagon ==> non-filled,  Click one points");
	pIn->GetPointClicked(x, y);	//Wait for any click
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawHexa(P1, gfxInfo, false);

	// 2.2.2 - Drawing highlighted non-filled Hexagon
	pOut->PrintMessage("Drawing a Hexagon ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawHexa(P1, gfxInfo, true);


	// 2.2.3 - Drawing a filled Hexagon
	pOut->PrintMessage("Drawing a Hexagon ==> filled,  Click one points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GREEN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawHexa(P1, gfxInfo, false);


	// 2.2.4 - Drawing a highlighted filled Hexagon
	pOut->PrintMessage("Drawing a Hexagon ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawHexa(P1, gfxInfo, true);


	pOut->PrintMessage("Drawing a Hexagon Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->ClearDrawArea();


	/// ========================== 2.5- Circle Test ================================ ///
	/// =================== 
	pOut->PrintMessage("Drawing a Circle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	// 2.1.1 - Drawing non-filled Circle
	pOut->PrintMessage("Drawing a Circle ==> non-filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawCirc(P1, P2, gfxInfo, false);

	// 2.1.2 - Drawing highlighted non-filled Circle
	pOut->PrintMessage("Drawing a Circle ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawCirc(P1, P2, gfxInfo, true);


	// 2.1.3 - Drawing a filled Circle
	pOut->PrintMessage("Drawing a Circle ==> filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GREEN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawCirc(P1, P2, gfxInfo, false);


	// 2.1.4 - Drawing a highlighted filled Circle
	pOut->PrintMessage("Drawing a Circle ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawCirc(P1, P2, gfxInfo, true);



	pOut->PrintMessage("Drawing a Circle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->ClearDrawArea();

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 3: 
	//			Input Class: Read strings from the user
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST3: Now Time to test class Input, Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	pOut->PrintMessage("Testing Input ability to read strings");

	///TODO: Add code here to 
	// 1- Read a string from the user on the status bar
	pOut->PrintMessage("Enter a message :");
	string message;
	message = pIn->GetSrting(pOut);
	pOut->PrintMessage(message);
	// 2- After reading the string clear the status bar
	//pOut->ClearStatusBar();
	pIn->GetPointClicked(x, y);	//Wait for any click
	// 
	// 3- print on the status bar "You Entered" then print the string
	pOut->PrintMessage("You Entered ");
	pOut->PrintMessage(message);
	pOut->ClearDrawArea();
	pIn->GetPointClicked(x, y);	//Wait for any click

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 4: 
	//			Input Class : Check for the user action
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST4: Testing Input ability to detect User Action, click anywhere");

	ActionType ActType;

	
	///TODO:  
	//You must add a case for each action (both Draw mode and Play mode actions)
	//Add cases for the missing actions below
	do
	{
		ActType = pIn->GetUserAction();

		switch (ActType)
		{
		case TO_ShapesToolBar:
			pOut->ClearToolBar();
			pOut->PrintMessage("Action: Switch to shapes tool bar, creating Design tool bar");
			pOut->CreateShapesToolBar();
			break;
		case DRAW_RECT:
			pOut->ClearToolBar();
			pOut->PrintMessage("Action: Draw a Rectangle , Click anywhere");
			pOut->CreateDrawToolBar();
			break;
		case DRAW_CIRCLE:
			pOut->ClearToolBar();
			pOut->PrintMessage("Action: Draw a Circle , Click anywhere");
			pOut->CreateDrawToolBar();
			break;
		case DRAW_TRIANGLE:
			pOut->ClearToolBar();
			pOut->PrintMessage("Action: Draw a Triangle , Click anywhere");
			pOut->CreateDrawToolBar();
			break;
		case DRAW_HEXAGON:
			pOut->ClearToolBar();
			pOut->PrintMessage("Action: Draw a Hexagon , Click anywhere");
			pOut->CreateDrawToolBar();
			break;
		case DRAW_SQUARE:
			pOut->ClearToolBar();
			pOut->PrintMessage("Action: Draw a Square , Click anywhere");
			pOut->CreateDrawToolBar();
			break;
		case STATUS:
			pOut->PrintMessage("Action: a click on the Status Bar, Click anywhere");
			break;
 
		case DRAWING_AREA:
			pOut->PrintMessage("Action: a click on the Drawing Area, Click anywhere");
			break;

		case EMPTY:
			pOut->PrintMessage("Action: a click on empty area in the Design Tool Bar, Click anywhere");
			break;

		case TO_DRAW:
		    pOut->ClearToolBar();
			pOut->PrintMessage("Action: Switch to Draw Mode, creating simualtion tool bar");
			pOut->CreateDrawToolBar();
			break;

		case TO_PLAY:
			pOut->ClearToolBar();
			pOut->PrintMessage("Action: Switch to Play Mode, creating Design tool bar");
			pOut->CreatePlayToolBar();
			break;
		case PLAYBOTH:
			pOut->PrintMessage("You have selected play color and shape");
			break; 
		case PLAYCOLOR:
			pOut->PrintMessage("You have selected play color ");
			break;
		case PLAYSHAPE:
			pOut->PrintMessage("You have selected play shape");
			break;
		case SWITCH:
			pOut->ClearToolBar();
			pOut->PrintMessage("Action: Switch to draw mode , creating Design tool bar");
			pOut->CreateDrawToolBar();
			break;
		///TODO: Add more cases for the other action types//////////////////////////////////////KARIM
		case TO_COLOR:
			pOut->ClearToolBar();
			pOut->PrintMessage("Action: Switch to Color toolbar, creating Design tool bar");
			pOut->CreateColorsToolBar();
			break;
		case SELECT_BLACK:
			pOut->ClearToolBar();
			pOut->PrintMessage("You have selected the color black");
			pOut->CreateDrawToolBar();
			break;
		case SELECT_BLUE:
			pOut->ClearToolBar();
			pOut->PrintMessage("You have selected the color blue");
			pOut->CreateDrawToolBar();
			break;
		case SELECT_GREEN:
			pOut->ClearToolBar();
			pOut->PrintMessage("You have selected the color green");
			pOut->CreateDrawToolBar();
			break;
		case SELECT_ORANGE:
			pOut->ClearToolBar();
			pOut->PrintMessage("You have selected the color orange");
			pOut->CreateDrawToolBar();
			break;
		case SELECT_RED:
			pOut->ClearToolBar();
			pOut->PrintMessage("You have selected the color red");
			pOut->CreateDrawToolBar();
			break;
		case SELECT_YELLOW:
			pOut->ClearToolBar();
			pOut->PrintMessage("You have selected the color yellow");
			pOut->CreateDrawToolBar();
			break;
		case TO_FILL:
			pOut->ClearToolBar();
			pOut->PrintMessage("Action: Switch to Fill toolbar, creating Design tool bar");
			pOut->CreateColorsToolBar();
			break;
		case SELECT_BLACK_FILL:
			pOut->ClearToolBar();
			pOut->PrintMessage("You have selected the color black for fill");
			pOut->CreateDrawToolBar();
			break;
		case SELECT_BLUE_FILL:
			pOut->ClearToolBar();
			pOut->PrintMessage("You have selected the color blue for fill");
			pOut->CreateDrawToolBar();
			break;
		case SELECT_GREEN_FILL:
			pOut->ClearToolBar();
			pOut->PrintMessage("You have selected the color green for fill");
			pOut->CreateDrawToolBar();
			break;
		case SELECT_ORANGE_FILL:
			pOut->ClearToolBar();
			pOut->PrintMessage("You have selected the color orange for fill");
			pOut->CreateDrawToolBar();
			break;
		case SELECT_RED_FILL:
			pOut->ClearToolBar();
			pOut->PrintMessage("You have selected the color red for fill");
			pOut->CreateDrawToolBar();
			break;
		case SELECT_YELLOW_FILL:
			pOut->ClearToolBar();
			pOut->PrintMessage("You have selected the color yellow for fill");
			pOut->CreateDrawToolBar();
			break;
		case SELECT_NO_FILL:
			pOut->ClearToolBar();
			pOut->PrintMessage("You have selected no fill");
			pOut->CreateDrawToolBar();
			break;
		case UNDO:
			pOut->PrintMessage("You have selected undo");
			break;
		case REDO:
			pOut->PrintMessage("You have selected redo");
			break;
		case DEL:
			pOut->PrintMessage("You have selected delete a figure");
			break;
		case CLEAR:
			pOut->PrintMessage("You have selected clear all");
			break;
		case RECVID:
			pOut->PrintMessage("You have selected recording video");
			break;
		case ENDVID:
			pOut->PrintMessage("You have selected end recording");
			break;
		case PLYVID:
			pOut->PrintMessage("You have selected play recorded video");
			break; 
		case SAVE:
			pOut->PrintMessage("You have selected save video");
			break; 
		case LOAD:
			pOut->PrintMessage("You have selected load saved video");
			break; 
		

			////////////////////////////////////////////////////////////////////////////////////KARIM
		case EXIT:				
				break;
		}
	}while(ActType != EXIT);


	/// Exiting
	pOut->PrintMessage("Action: EXIT, test is finished, click anywhere to exit");
	pIn->GetPointClicked(x,y);


	delete pIn;
	delete pOut;	
	return 0;
}


