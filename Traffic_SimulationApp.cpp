/***************************************************************
 * Name:      Traffic_SimulationApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Adrian A. Muino, Juan Saez, Alexander Perez ()
 * Created:   2021-03-28
 * Copyright: Adrian A. Muino, Juan Saez, Alexander Perez ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "Traffic_SimulationApp.h"

//(*AppHeaders
#include "Traffic_SimulationMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Traffic_SimulationApp);

bool Traffic_SimulationApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Traffic_SimulationFrame* Frame = new Traffic_SimulationFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
