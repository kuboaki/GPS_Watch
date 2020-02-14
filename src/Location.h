/*----------------------------------------------------------------------------
 * File:  Location.h
 *
 * UML Component (Module) Declaration (Operations and Signals)
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef LOCATION_H
#define LOCATION_H
#ifdef	__cplusplus
extern	"C"	{
#endif
/*
Simulates a the GPS hardware/firmware. This component is only behavioral and included for testing purposes.
*/

#include "GPS_Watch_sys_types.h"
void Location_LOC_getDistance( const r_t, const r_t, r_t *, const r_t, const r_t );
void Location_LOC_getLocation( r_t *, r_t * );
void Location_LOC_registerListener( void );
void Location_LOC_unregisterListener( void );

#ifdef	__cplusplus
}
#endif
#endif  /* LOCATION_H */
