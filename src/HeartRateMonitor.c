/*----------------------------------------------------------------------------
 * File:  HeartRateMonitor.c
 *
 * UML Component Port Messages
 * Component/Module Name:  HeartRateMonitor
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/
/*
 Simulates a pulse monitor hardware/firmware. This component is only behavioral and included for testing purposes.
 */

#include "GPS_Watch_sys_types.h"
#include "HeartRateMonitor.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "GPS_Watch.h"
#include "HeartRateMonitor_classes.h"

/*
 * Interface:  HeartRateProvider
 * Provided Port:  HeartRateMonitor
 * To Provider Message:  registerListener
 */
void
HeartRateMonitor_HeartRateMonitor_registerListener()
{
  /* ::registerListener(  ) */
  XTUML_OAL_STMT_TRACE( 1, "::registerListener(  )" );
  HeartRateMonitor_registerListener();
}

/*
 * Interface:  HeartRateProvider
 * Provided Port:  HeartRateMonitor
 * To Provider Message:  unregisterListener
 */
void
HeartRateMonitor_HeartRateMonitor_unregisterListener()
{
  /* ::unregisterListener(  ) */
  XTUML_OAL_STMT_TRACE( 1, "::unregisterListener(  )" );
  HeartRateMonitor_unregisterListener();
}

/*
 * Interface:  HRChange
 * Required Port:  HRChange
 * To Provider Message:  heartRateChanged
 */
void
HeartRateMonitor_HRChange_heartRateChanged( const i_t p_heartRate )
{
  GPS_Watch_HeartRateMonitor__HRChange_heartRateChanged(  p_heartRate );
}
/*
 * UML Domain Functions (Synchronous Services)
 */

/*
 * Domain Function:  registerListener
 */
void
HeartRateMonitor_registerListener()
{
  HeartRateMonitor_HeartRateMonitor * hr=0;
  /* HeartRateMonitor::initialize() */
  XTUML_OAL_STMT_TRACE( 1, "HeartRateMonitor::initialize()" );
  HeartRateMonitor_HeartRateMonitor_op_initialize();
  /* SELECT any hr FROM INSTANCES OF HeartRateMonitor */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any hr FROM INSTANCES OF HeartRateMonitor" );
  hr = (HeartRateMonitor_HeartRateMonitor *) Escher_SetGetAny( &pG_HeartRateMonitor_HeartRateMonitor_extent.active );
  /* GENERATE HeartRateMonitor8:registerListener() TO hr */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE HeartRateMonitor8:registerListener() TO hr" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( hr, &HeartRateMonitor_HeartRateMonitorevent8c );
    Escher_SendEvent( e );
  }
}

/*
 * Domain Function:  unregisterListener
 */
void
HeartRateMonitor_unregisterListener()
{
  HeartRateMonitor_HeartRateMonitor * hr=0;
  /* HeartRateMonitor::initialize() */
  XTUML_OAL_STMT_TRACE( 1, "HeartRateMonitor::initialize()" );
  HeartRateMonitor_HeartRateMonitor_op_initialize();
  /* SELECT any hr FROM INSTANCES OF HeartRateMonitor */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any hr FROM INSTANCES OF HeartRateMonitor" );
  hr = (HeartRateMonitor_HeartRateMonitor *) Escher_SetGetAny( &pG_HeartRateMonitor_HeartRateMonitor_extent.active );
  /* GENERATE HeartRateMonitor9:unregisterListener() TO hr */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE HeartRateMonitor9:unregisterListener() TO hr" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( hr, &HeartRateMonitor_HeartRateMonitorevent9c );
    Escher_SendEvent( e );
  }
}
/* xtUML class info (collections, sizes, etc.) */
Escher_Extent_t * const HeartRateMonitor_class_info[ HeartRateMonitor_MAX_CLASS_NUMBERS ] = {
  &pG_HeartRateMonitor_HeartRateMonitor_extent,
  &pG_HeartRateMonitor_HeartRateConstants_extent
};

/*
 * Array of pointers to the class event dispatcher method.
 * Index is the (model compiler enumerated) number of the state model.
 */
const EventTaker_t HeartRateMonitor_EventDispatcher[ HeartRateMonitor_STATE_MODELS ] = {
  HeartRateMonitor_class_dispatchers
};

void HeartRateMonitor_execute_initialization()
{
}
