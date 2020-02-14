/*----------------------------------------------------------------------------
 * File:  UI.h
 *
 * UML Component (Module) Declaration (Operations and Signals)
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef UI_H
#define UI_H
#ifdef	__cplusplus
extern	"C"	{
#endif
/*
Simulates the user interface and has the ability to connect an external GUI
representing the physical watch.

Uses the BridgePoint Java API to connect to an animated version of the watch
while the models are executing in Verifier.

There is also hand-written C code that implments parts of this component to 
allow generated code to connect to the exact same animated watch.
*/

#include "GPS_Watch_sys_types.h"
void UI_UI_setData( const GPS_Watch_UIUnit_t, const r_t );
void UI_UI_setIndicator( const GPS_Watch_UIIndicator_t );
void UI_UI_setTime( const i_t );
void UI_UI_startTest( void );
void UI_TRACK_lapResetPressed( void );
void UI_TRACK_lightPressed( void );
void UI_TRACK_modePressed( void );
void UI_TRACK_newGoalSpec( const GPS_Watch_UIGoalCriteria_t, const r_t, const r_t, const i_t, const r_t, const GPS_Watch_UIGoalSpan_t );
void UI_TRACK_setTargetPressed( void );
void UI_TRACK_startStopPressed( void );

#ifdef	__cplusplus
}
#endif
#endif  /* UI_H */
