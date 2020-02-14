/*----------------------------------------------------------------------------
 * File:  UI_UIConstants_class.c
 *
 * Class:       UIConstants  (UIConstants)
 * Component:   UI
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "GPS_Watch_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "UI_GuiBridge_bridge.h"
#include "UI_classes.h"

/*
 * class operation:  initialize
 */
void
UI_UIConstants_op_initialize()
{
  UI_UIConstants * uiconst=0;
  /* SELECT any uiconst FROM INSTANCES OF UIConstants */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any uiconst FROM INSTANCES OF UIConstants" );
  uiconst = (UI_UIConstants *) Escher_SetGetAny( &pG_UI_UIConstants_extent.active );
  /* IF ( empty uiconst ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( empty uiconst )" );
  if ( ( 0 == uiconst ) ) {
    /* CREATE OBJECT INSTANCE uiconst OF UIConstants */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE uiconst OF UIConstants" );
    uiconst = (UI_UIConstants *) Escher_CreateInstance( UI_DOMAIN_ID, UI_UIConstants_CLASS_NUMBER );
    /* ASSIGN uiconst.id = 1 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN uiconst.id = 1" );
    ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.id" ))->id = 1;
    /* ASSIGN uiconst.SIGNAL_NO_NULL_SIGNAL = 0 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN uiconst.SIGNAL_NO_NULL_SIGNAL = 0" );
    ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.SIGNAL_NO_NULL_SIGNAL" ))->SIGNAL_NO_NULL_SIGNAL = 0;
    /* ASSIGN uiconst.SIGNAL_NO_START_STOP_PRESSED = 1 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN uiconst.SIGNAL_NO_START_STOP_PRESSED = 1" );
    ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.SIGNAL_NO_START_STOP_PRESSED" ))->SIGNAL_NO_START_STOP_PRESSED = 1;
    /* ASSIGN uiconst.SIGNAL_NO_TARGET_PRESSED = 2 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN uiconst.SIGNAL_NO_TARGET_PRESSED = 2" );
    ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.SIGNAL_NO_TARGET_PRESSED" ))->SIGNAL_NO_TARGET_PRESSED = 2;
    /* ASSIGN uiconst.SIGNAL_NO_LAP_RESET_PRESSED = 3 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN uiconst.SIGNAL_NO_LAP_RESET_PRESSED = 3" );
    ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.SIGNAL_NO_LAP_RESET_PRESSED" ))->SIGNAL_NO_LAP_RESET_PRESSED = 3;
    /* ASSIGN uiconst.SIGNAL_NO_LIGHT_PRESSED = 4 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN uiconst.SIGNAL_NO_LIGHT_PRESSED = 4" );
    ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.SIGNAL_NO_LIGHT_PRESSED" ))->SIGNAL_NO_LIGHT_PRESSED = 4;
    /* ASSIGN uiconst.SIGNAL_NO_MODE_PRESSED = 5 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN uiconst.SIGNAL_NO_MODE_PRESSED = 5" );
    ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.SIGNAL_NO_MODE_PRESSED" ))->SIGNAL_NO_MODE_PRESSED = 5;
    /* ASSIGN uiconst.SOCKET_ERROR = - 1 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN uiconst.SOCKET_ERROR = - 1" );
    ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.SOCKET_ERROR" ))->SOCKET_ERROR = -1;
    /* ASSIGN uiconst.tick_period = 100000 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN uiconst.tick_period = 100000" );
    ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.tick_period" ))->tick_period = 100000;
  }
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      UIConstants  (UIConstants)
 * Component:  UI
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s UI_UIConstants_container[ UI_UIConstants_MAX_EXTENT_SIZE ];
static UI_UIConstants UI_UIConstants_instances[ UI_UIConstants_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_UI_UIConstants_extent = {
  {0}, {0}, &UI_UIConstants_container[ 0 ],
  (Escher_iHandle_t) &UI_UIConstants_instances,
  sizeof( UI_UIConstants ), 0, UI_UIConstants_MAX_EXTENT_SIZE
  };

