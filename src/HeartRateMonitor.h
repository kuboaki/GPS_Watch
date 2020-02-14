/*----------------------------------------------------------------------------
 * File:  HeartRateMonitor.h
 *
 * UML Component (Module) Declaration (Operations and Signals)
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HEARTRATEMONITOR_H
#define HEARTRATEMONITOR_H
#ifdef	__cplusplus
extern	"C"	{
#endif
/*
Simulates a pulse monitor hardware/firmware. This component is only behavioral and included for testing purposes.
*/

#include "GPS_Watch_sys_types.h"
void HeartRateMonitor_HeartRateMonitor_registerListener( void );
void HeartRateMonitor_HeartRateMonitor_unregisterListener( void );
void HeartRateMonitor_HRChange_heartRateChanged( const i_t );

#ifdef	__cplusplus
}
#endif
#endif  /* HEARTRATEMONITOR_H */
