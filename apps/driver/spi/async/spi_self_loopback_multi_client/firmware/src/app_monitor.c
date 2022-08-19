/*******************************************************************************
  MPLAB Harmony Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    app_monitor.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It
    implements the logic of the application's state machine and it may call
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "app_monitor.h"
#include "app_client1.h"
#include "app_client2.h"
#include "user.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    This structure should be initialized by the APP_MONITOR_Initialize function.

    Application strings and buffers are be defined outside this structure.
*/

APP_MONITOR_DATA app_monitorData;

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary callback functions.
*/

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************


/* TODO:  Add any necessary local functions.
*/


// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_MONITOR_Initialize ( void )

  Remarks:
    See prototype in app_monitor.h.
 */

void APP_MONITOR_Initialize ( void )
{
    LED_OFF();
}


/******************************************************************************
  Function:
    void APP_MONITOR_Tasks ( void )

  Remarks:
    See prototype in app_monitor.h.
 */

void APP_MONITOR_Tasks ( void )
{
    if((APP_CLIENT1_TransferSuccessStatus() == true) && (APP_CLIENT2_TransferSuccessStatus() == true))
    {
        LED_ON();
    }
    else
    {
        LED_OFF();
    }
}


/*******************************************************************************
 End of File
 */
