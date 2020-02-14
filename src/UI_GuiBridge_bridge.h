/*----------------------------------------------------------------------------
 * File:  UI_GuiBridge_bridge.h
 *
 * Description:
 * Methods for bridging to an external entity.
 *
 * External Entity:  Graphical_User_Interface (GuiBridge)
 * 
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef UI_GUIBRIDGE_BRIDGE_H
#define UI_GUIBRIDGE_BRIDGE_H
#ifdef	__cplusplus
extern	"C"	{
#endif

#include "GPS_Watch_sys_types.h"
void UI_GuiBridge_setData( const i_t, const r_t );
void UI_GuiBridge_setTime( const i_t );
i_t UI_GuiBridge_connect( void );
void UI_GuiBridge_setIndicator( const i_t );
i_t UI_GuiBridge_poll( void );

#ifdef	__cplusplus
}
#endif
#endif   /* UI_GUIBRIDGE_BRIDGE_H */
