/*----------------------------------------------------------------------------
 * File:  HeartRateMonitor_HeartRateMonitor_class.c
 *
 * Class:       HeartRateMonitor  (HeartRateMonitor)
 * Component:   HeartRateMonitor
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "GPS_Watch_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "HeartRateMonitor_classes.h"

/*
 * class operation:  initialize
 */
void
HeartRateMonitor_HeartRateMonitor_op_initialize()
{
  HeartRateMonitor_HeartRateMonitor * monitor=0;
  /* SELECT any monitor FROM INSTANCES OF HeartRateMonitor */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any monitor FROM INSTANCES OF HeartRateMonitor" );
  monitor = (HeartRateMonitor_HeartRateMonitor *) Escher_SetGetAny( &pG_HeartRateMonitor_HeartRateMonitor_extent.active );
  /* IF ( empty monitor ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( empty monitor )" );
  if ( ( 0 == monitor ) ) {
    /* CREATE OBJECT INSTANCE monitor OF HeartRateMonitor */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE monitor OF HeartRateMonitor" );
    monitor = (HeartRateMonitor_HeartRateMonitor *) Escher_CreateInstance( HeartRateMonitor_DOMAIN_ID, HeartRateMonitor_HeartRateMonitor_CLASS_NUMBER );
    /* ASSIGN monitor.id = 1 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN monitor.id = 1" );
    ((HeartRateMonitor_HeartRateMonitor *)xtUML_detect_empty_handle( monitor, "HeartRateMonitor", "monitor.id" ))->id = 1;
  }
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      HeartRateMonitor  (HeartRateMonitor)
 * Component:  HeartRateMonitor
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s HeartRateMonitor_HeartRateMonitor_container[ HeartRateMonitor_HeartRateMonitor_MAX_EXTENT_SIZE ];
static HeartRateMonitor_HeartRateMonitor HeartRateMonitor_HeartRateMonitor_instances[ HeartRateMonitor_HeartRateMonitor_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HeartRateMonitor_HeartRateMonitor_extent = {
  {0}, {0}, &HeartRateMonitor_HeartRateMonitor_container[ 0 ],
  (Escher_iHandle_t) &HeartRateMonitor_HeartRateMonitor_instances,
  sizeof( HeartRateMonitor_HeartRateMonitor ), HeartRateMonitor_HeartRateMonitor_STATE_1, HeartRateMonitor_HeartRateMonitor_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      HeartRateMonitor  (HeartRateMonitor)
 * Component:  HeartRateMonitor
 *--------------------------------------------------------------------------*/

/*
 * State 1:  [idle]
 */
static void HeartRateMonitor_HeartRateMonitor_act1( HeartRateMonitor_HeartRateMonitor *, const Escher_xtUMLEvent_t * const );
static void
HeartRateMonitor_HeartRateMonitor_act1( HeartRateMonitor_HeartRateMonitor * self, const Escher_xtUMLEvent_t * const event )
{
}

/*
 * State 2:  [monitoring]
 */
static void HeartRateMonitor_HeartRateMonitor_act2( HeartRateMonitor_HeartRateMonitor *, const Escher_xtUMLEvent_t * const );
static void
HeartRateMonitor_HeartRateMonitor_act2( HeartRateMonitor_HeartRateMonitor * self, const Escher_xtUMLEvent_t * const event )
{
  /* HRChange::heartRateChanged(heartRate:self.recentHeartRate) */
  XTUML_OAL_STMT_TRACE( 1, "HRChange::heartRateChanged(heartRate:self.recentHeartRate)" );
  HeartRateMonitor_HRChange_heartRateChanged( ((HeartRateMonitor_HeartRateMonitor *)xtUML_detect_empty_handle( self, "HeartRateMonitor", "self.recentHeartRate" ))->recentHeartRate );
  /* ASSIGN self.recentHeartRate = ( self.recentHeartRate + 1 ) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.recentHeartRate = ( self.recentHeartRate + 1 )" );
  ((HeartRateMonitor_HeartRateMonitor *)xtUML_detect_empty_handle( self, "HeartRateMonitor", "self.recentHeartRate" ))->recentHeartRate = ( ((HeartRateMonitor_HeartRateMonitor *)xtUML_detect_empty_handle( self, "HeartRateMonitor", "self.recentHeartRate" ))->recentHeartRate + 1 );
}

/*
 * State 3:  [Registering]
 */
static void HeartRateMonitor_HeartRateMonitor_act3( HeartRateMonitor_HeartRateMonitor *, const Escher_xtUMLEvent_t * const );
static void
HeartRateMonitor_HeartRateMonitor_act3( HeartRateMonitor_HeartRateMonitor * self, const Escher_xtUMLEvent_t * const event )
{
  Escher_xtUMLEvent_t * timeout;HeartRateMonitor_HeartRateConstants * hrc=0;
  /* ASSIGN self.recentHeartRate = 50 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.recentHeartRate = 50" );
  ((HeartRateMonitor_HeartRateMonitor *)xtUML_detect_empty_handle( self, "HeartRateMonitor", "self.recentHeartRate" ))->recentHeartRate = 50;
  /* LOG::LogInfo( message:listener registered ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:listener registered )" );
  LOG_LogInfo( "listener registered" );
  /* HeartRateConstants::initialize() */
  XTUML_OAL_STMT_TRACE( 1, "HeartRateConstants::initialize()" );
  HeartRateMonitor_HeartRateConstants_op_initialize();
  /* SELECT any hrc FROM INSTANCES OF HeartRateConstants */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any hrc FROM INSTANCES OF HeartRateConstants" );
  hrc = (HeartRateMonitor_HeartRateConstants *) Escher_SetGetAny( &pG_HeartRateMonitor_HeartRateConstants_extent.active );
  /* CREATE EVENT INSTANCE timeout(  ) TO self */
  XTUML_OAL_STMT_TRACE( 1, "CREATE EVENT INSTANCE timeout(  ) TO self" );
  timeout = Escher_NewxtUMLEvent( (void *) self, &HeartRateMonitor_HeartRateMonitorevent3c );
  /* ASSIGN self.timer = TIM::timer_start_recurring(event_inst:timeout, microseconds:( hrc.HeartRateSamplingPeriod * 1000000 )) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.timer = TIM::timer_start_recurring(event_inst:timeout, microseconds:( hrc.HeartRateSamplingPeriod * 1000000 ))" );
  ((HeartRateMonitor_HeartRateMonitor *)xtUML_detect_empty_handle( self, "HeartRateMonitor", "self.timer" ))->timer = TIM_timer_start_recurring( (Escher_xtUMLEvent_t *)timeout, ( ((HeartRateMonitor_HeartRateConstants *)xtUML_detect_empty_handle( hrc, "HeartRateConstants", "hrc.HeartRateSamplingPeriod" ))->HeartRateSamplingPeriod * 1000000 ) );
  /* GENERATE HeartRateMonitor5:registerComplete() TO self */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE HeartRateMonitor5:registerComplete() TO self" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &HeartRateMonitor_HeartRateMonitorevent5c );
    Escher_SendSelfEvent( e );
  }
}

/*
 * State 4:  [Unregistering]
 */
static void HeartRateMonitor_HeartRateMonitor_act4( HeartRateMonitor_HeartRateMonitor *, const Escher_xtUMLEvent_t * const );
static void
HeartRateMonitor_HeartRateMonitor_act4( HeartRateMonitor_HeartRateMonitor * self, const Escher_xtUMLEvent_t * const event )
{
  bool res;
  /* ASSIGN res = TIM::timer_cancel(timer_inst_ref:self.timer) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN res = TIM::timer_cancel(timer_inst_ref:self.timer)" );
  res = TIM_timer_cancel( ((HeartRateMonitor_HeartRateMonitor *)xtUML_detect_empty_handle( self, "HeartRateMonitor", "self.timer" ))->timer );
  /* IF ( res ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( res )" );
  if ( res ) {
    /* LOG::LogSuccess( message:Heart Rate Monitor: timer_cancel() succeeded. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogSuccess( message:Heart Rate Monitor: timer_cancel() succeeded. )" );
    LOG_LogSuccess( "Heart Rate Monitor: timer_cancel() succeeded." );
  }
  else {
    /* LOG::LogFailure( message:Heart Rate Monitor: timer_cancel() failed. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogFailure( message:Heart Rate Monitor: timer_cancel() failed. )" );
    LOG_LogFailure( "Heart Rate Monitor: timer_cancel() failed." );
  }
  /* GENERATE HeartRateMonitor7:unregisterComplete() TO self */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE HeartRateMonitor7:unregisterComplete() TO self" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &HeartRateMonitor_HeartRateMonitorevent7c );
    Escher_SendSelfEvent( e );
  }
}

const Escher_xtUMLEventConstant_t HeartRateMonitor_HeartRateMonitorevent3c = {
  HeartRateMonitor_DOMAIN_ID, HeartRateMonitor_HeartRateMonitor_CLASS_NUMBER, HEARTRATEMONITOR_HEARTRATEMONITOREVENT3NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t HeartRateMonitor_HeartRateMonitorevent5c = {
  HeartRateMonitor_DOMAIN_ID, HeartRateMonitor_HeartRateMonitor_CLASS_NUMBER, HEARTRATEMONITOR_HEARTRATEMONITOREVENT5NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t HeartRateMonitor_HeartRateMonitorevent7c = {
  HeartRateMonitor_DOMAIN_ID, HeartRateMonitor_HeartRateMonitor_CLASS_NUMBER, HEARTRATEMONITOR_HEARTRATEMONITOREVENT7NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t HeartRateMonitor_HeartRateMonitorevent8c = {
  HeartRateMonitor_DOMAIN_ID, HeartRateMonitor_HeartRateMonitor_CLASS_NUMBER, HEARTRATEMONITOR_HEARTRATEMONITOREVENT8NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t HeartRateMonitor_HeartRateMonitorevent9c = {
  HeartRateMonitor_DOMAIN_ID, HeartRateMonitor_HeartRateMonitor_CLASS_NUMBER, HEARTRATEMONITOR_HEARTRATEMONITOREVENT9NUM,
  ESCHER_IS_INSTANCE_EVENT };


/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t HeartRateMonitor_HeartRateMonitor_StateEventMatrix[ 4 + 1 ][ 5 ] = {
  /* row 0:  uninitialized state (for creation events) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 1:  HeartRateMonitor_HeartRateMonitor_STATE_1 (idle) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, HeartRateMonitor_HeartRateMonitor_STATE_3, EVENT_CANT_HAPPEN },
  /* row 2:  HeartRateMonitor_HeartRateMonitor_STATE_2 (monitoring) */
  { HeartRateMonitor_HeartRateMonitor_STATE_2, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, HeartRateMonitor_HeartRateMonitor_STATE_4 },
  /* row 3:  HeartRateMonitor_HeartRateMonitor_STATE_3 (Registering) */
  { EVENT_CANT_HAPPEN, HeartRateMonitor_HeartRateMonitor_STATE_2, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 4:  HeartRateMonitor_HeartRateMonitor_STATE_4 (Unregistering) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, HeartRateMonitor_HeartRateMonitor_STATE_1, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t HeartRateMonitor_HeartRateMonitor_acts[ 5 ] = {
    (StateAction_t) 0,
    (StateAction_t) HeartRateMonitor_HeartRateMonitor_act1,  /* idle */
    (StateAction_t) HeartRateMonitor_HeartRateMonitor_act2,  /* monitoring */
    (StateAction_t) HeartRateMonitor_HeartRateMonitor_act3,  /* Registering */
    (StateAction_t) HeartRateMonitor_HeartRateMonitor_act4  /* Unregistering */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings[ 5 ] = {
    "",
    "idle",
    "monitoring",
    "Registering",
    "Unregistering"
  };

/*
 * instance state machine event dispatching
 */
void
HeartRateMonitor_HeartRateMonitor_Dispatch( Escher_xtUMLEvent_t * event )
{
  Escher_iHandle_t instance = GetEventTargetInstance( event );
  Escher_EventNumber_t event_number = GetOoaEventNumber( event );
  Escher_StateNumber_t current_state;
  Escher_StateNumber_t next_state;
  if ( 0 != instance ) {
    current_state = instance->current_state;
    if ( current_state > 4 ) {
      /* instance validation failure (object deleted while event in flight) */
      UserEventNoInstanceCallout( event_number );
    } else {
      next_state = HeartRateMonitor_HeartRateMonitor_StateEventMatrix[ current_state ][ event_number ];
      if ( next_state <= 4 ) {
        STATE_TXN_START_TRACE( "HeartRateMonitor", current_state, state_name_strings[ current_state ] );
        /* Execute the state action and update the current state.  */
        ( *HeartRateMonitor_HeartRateMonitor_acts[ next_state ] )( instance, event );
        STATE_TXN_END_TRACE( "HeartRateMonitor", next_state, state_name_strings[ next_state ] );
        instance->current_state = next_state;
      } else if ( next_state == EVENT_CANT_HAPPEN ) {
          /* event cant happen */
          UserEventCantHappenCallout( current_state, next_state, event_number );
          STATE_TXN_CH_TRACE( "HeartRateMonitor", current_state );
      } else {
        /* empty else */
      }
    }
  }
}

