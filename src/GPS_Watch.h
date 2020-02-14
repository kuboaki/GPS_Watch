/*----------------------------------------------------------------------------
 * File:  GPS_Watch.h
 *
 * UML Component (Module) Declaration (Operations and Signals)
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef GPS_WATCH_H
#define GPS_WATCH_H
#ifdef	__cplusplus
extern	"C"	{
#endif

#include "GPS_Watch_sys_types.h"
void GPS_Watch_UI_setData( const GPS_Watch_UIUnit_t, const r_t );
void GPS_Watch_UI_setIndicator( const GPS_Watch_UIIndicator_t );
void GPS_Watch_UI_setTime( const i_t );
void GPS_Watch_UI_startTest( void );
void GPS_Watch_Location_getDistance( const r_t, const r_t, r_t *, const r_t, const r_t );
void GPS_Watch_Location_getLocation( r_t *, r_t * );
void GPS_Watch_Location_registerListener( void );
void GPS_Watch_Location_unregisterListener( void );
void GPS_Watch_Tracking_heartRateChanged( const i_t );
void GPS_Watch_Tracking_lapResetPressed( void );
void GPS_Watch_Tracking_lightPressed( void );
void GPS_Watch_Tracking_modePressed( void );
void GPS_Watch_Tracking_newGoalSpec( const GPS_Watch_GoalCriteria_t, const r_t, const r_t, const i_t, const r_t, const GPS_Watch_GoalSpan_t );
void GPS_Watch_Tracking_setTargetPressed( void );
void GPS_Watch_Tracking_startStopPressed( void );
void GPS_Watch_HeartRateMonitor_registerListener( void );
void GPS_Watch_HeartRateMonitor_unregisterListener( void );
void GPS_Watch_UI__TRACK_lapResetPressed( void );
void GPS_Watch_UI__TRACK_lightPressed( void );
void GPS_Watch_UI__TRACK_modePressed( void );
void GPS_Watch_UI__TRACK_newGoalSpec( const GPS_Watch_UIGoalCriteria_t, const r_t, const r_t, const i_t, const r_t, const GPS_Watch_UIGoalSpan_t );
void GPS_Watch_UI__TRACK_setTargetPressed( void );
void GPS_Watch_UI__TRACK_startStopPressed( void );
void GPS_Watch_HeartRateMonitor__HRChange_heartRateChanged( const i_t );
void GPS_Watch_Tracking__UI_setData( const GPS_Watch_Unit_t, const r_t );
void GPS_Watch_Tracking__UI_setIndicator( const GPS_Watch_Indicator_t );
void GPS_Watch_Tracking__UI_setTime( const i_t );
void GPS_Watch_Tracking__LOC_getDistance( const r_t, const r_t, r_t *, const r_t, const r_t );
void GPS_Watch_Tracking__LOC_getLocation( r_t *, r_t * );
void GPS_Watch_Tracking__LOC_registerListener( void );
void GPS_Watch_Tracking__LOC_unregisterListener( void );
void GPS_Watch_Tracking__HR_registerListener( void );
void GPS_Watch_Tracking__HR_unregisterListener( void );

#ifdef	__cplusplus
}
#endif
#endif  /* GPS_WATCH_H */
