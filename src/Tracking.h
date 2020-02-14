/*----------------------------------------------------------------------------
 * File:  Tracking.h
 *
 * UML Component (Module) Declaration (Operations and Signals)
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef TRACKING_H
#define TRACKING_H
#ifdef	__cplusplus
extern	"C"	{
#endif
/*
The Tracking component encapsulates the entire application software. This is the 
only component in the system from which code will be generated for the final 
product.
*/

#include "GPS_Watch_sys_types.h"
void Tracking_Tracking_heartRateChanged( const i_t );
void Tracking_Tracking_lapResetPressed( void );
void Tracking_Tracking_lightPressed( void );
void Tracking_Tracking_modePressed( void );
void Tracking_Tracking_newGoalSpec( const GPS_Watch_GoalCriteria_t, const r_t, const r_t, const i_t, const r_t, const GPS_Watch_GoalSpan_t );
void Tracking_Tracking_setTargetPressed( void );
void Tracking_Tracking_startStopPressed( void );
void Tracking_HR_registerListener( void );
void Tracking_HR_unregisterListener( void );
void Tracking_LOC_getDistance( const r_t, const r_t, r_t *, const r_t, const r_t );
void Tracking_LOC_getLocation( r_t *, r_t * );
void Tracking_LOC_registerListener( void );
void Tracking_LOC_unregisterListener( void );
void Tracking_UI_setData( const GPS_Watch_Unit_t, const r_t );
void Tracking_UI_setIndicator( const GPS_Watch_Indicator_t );
void Tracking_UI_setTime( const i_t );

#ifdef	__cplusplus
}
#endif
#endif  /* TRACKING_H */
