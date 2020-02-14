/*----------------------------------------------------------------------------
 * File:  UI_TestCase_class.c
 *
 * Class:       TestCase  (TestCase)
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
 * class operation:  execute
 */
void
UI_TestCase_op_execute()
{
  UI_TestCase * tc;
  /* CREATE OBJECT INSTANCE tc OF TestCase */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE tc OF TestCase" );
  tc = (UI_TestCase *) Escher_CreateInstance( UI_DOMAIN_ID, UI_TestCase_CLASS_NUMBER );
  /* ASSIGN tc.id = 1 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN tc.id = 1" );
  ((UI_TestCase *)xtUML_detect_empty_handle( tc, "TestCase", "tc.id" ))->id = 1;
  /* GENERATE TestCase5:initialize(iterations:2) TO tc */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE TestCase5:initialize(iterations:2) TO tc" );
  { UI_TestCaseevent5 * e = (UI_TestCaseevent5 *) Escher_NewxtUMLEvent( tc, &UI_TestCaseevent5c );
    e->p_iterations = 2;
    Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
  }
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      TestCase  (TestCase)
 * Component:  UI
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s UI_TestCase_container[ UI_TestCase_MAX_EXTENT_SIZE ];
static UI_TestCase UI_TestCase_instances[ UI_TestCase_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_UI_TestCase_extent = {
  {0}, {0}, &UI_TestCase_container[ 0 ],
  (Escher_iHandle_t) &UI_TestCase_instances,
  sizeof( UI_TestCase ), UI_TestCase_STATE_1, UI_TestCase_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      TestCase  (TestCase)
 * Component:  UI
 *--------------------------------------------------------------------------*/

/*
 * State 2:  [pressStartStop]
 */
static void UI_TestCase_act2( UI_TestCase *, const Escher_xtUMLEvent_t * const );
static void
UI_TestCase_act2( UI_TestCase * self, const Escher_xtUMLEvent_t * const event )
{
  /* IF ( ( self.iterations > 0 ) ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( ( self.iterations > 0 ) )" );
  if ( ( ((UI_TestCase *)xtUML_detect_empty_handle( self, "TestCase", "self.iterations" ))->iterations > 0 ) ) {
    Escher_Timer_t * handle;Escher_xtUMLEvent_t * evt;
    /* ASSIGN self.iterations = ( self.iterations - 1 ) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN self.iterations = ( self.iterations - 1 )" );
    ((UI_TestCase *)xtUML_detect_empty_handle( self, "TestCase", "self.iterations" ))->iterations = ( ((UI_TestCase *)xtUML_detect_empty_handle( self, "TestCase", "self.iterations" ))->iterations - 1 );
    /* CREATE EVENT INSTANCE evt(  ) TO self */
    XTUML_OAL_STMT_TRACE( 2, "CREATE EVENT INSTANCE evt(  ) TO self" );
    evt = Escher_NewxtUMLEvent( (void *) self, &UI_TestCaseevent1c );
    /* ASSIGN handle = TIM::timer_start(event_inst:evt, microseconds:4000000) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN handle = TIM::timer_start(event_inst:evt, microseconds:4000000)" );
    handle = TIM_timer_start( (Escher_xtUMLEvent_t *)evt, 4000000 );
    /* TRACK::startStopPressed() */
    XTUML_OAL_STMT_TRACE( 2, "TRACK::startStopPressed()" );
    UI_TRACK_startStopPressed();
  }
  else {
    /* GENERATE TestCase3:finish() TO self */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE TestCase3:finish() TO self" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &UI_TestCaseevent3c );
      Escher_SendSelfEvent( e );
    }
    /* TRACK::lapResetPressed() */
    XTUML_OAL_STMT_TRACE( 2, "TRACK::lapResetPressed()" );
    UI_TRACK_lapResetPressed();
  }
}

/*
 * State 3:  [testCaseFinished]
 */
static void UI_TestCase_act3( UI_TestCase *, const Escher_xtUMLEvent_t * const );
static void
UI_TestCase_act3( UI_TestCase * self, const Escher_xtUMLEvent_t * const event )
{
  /* LOG::LogInfo( message:End of test case ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:End of test case )" );
  LOG_LogInfo( "End of test case" );
}

/*
 * State 4:  [initialize]
 */
static void UI_TestCase_act4( UI_TestCase *, const Escher_xtUMLEvent_t * const );
static void
UI_TestCase_act4( UI_TestCase * self, const Escher_xtUMLEvent_t * const event )
{
  UI_TestCaseevent5 * rcvd_evt = (UI_TestCaseevent5 *) event;
  /* LOG::LogInfo( message:Start of test case ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Start of test case )" );
  LOG_LogInfo( "Start of test case" );
  /* ASSIGN self.iterations = ( PARAM.iterations * 2 ) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.iterations = ( PARAM.iterations * 2 )" );
  ((UI_TestCase *)xtUML_detect_empty_handle( self, "TestCase", "self.iterations" ))->iterations = ( rcvd_evt->p_iterations * 2 );
  /* GENERATE TestCase4:initializationComplete() TO self */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE TestCase4:initializationComplete() TO self" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &UI_TestCaseevent4c );
    Escher_SendSelfEvent( e );
  }
}

/*
 * State 1:  [Idle]
 */
static void UI_TestCase_act1( UI_TestCase *, const Escher_xtUMLEvent_t * const );
static void
UI_TestCase_act1( UI_TestCase * self, const Escher_xtUMLEvent_t * const event )
{
}

const Escher_xtUMLEventConstant_t UI_TestCaseevent1c = {
  UI_DOMAIN_ID, UI_TestCase_CLASS_NUMBER, UI_TESTCASEEVENT1NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t UI_TestCaseevent3c = {
  UI_DOMAIN_ID, UI_TestCase_CLASS_NUMBER, UI_TESTCASEEVENT3NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t UI_TestCaseevent4c = {
  UI_DOMAIN_ID, UI_TestCase_CLASS_NUMBER, UI_TESTCASEEVENT4NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t UI_TestCaseevent5c = {
  UI_DOMAIN_ID, UI_TestCase_CLASS_NUMBER, UI_TESTCASEEVENT5NUM,
  ESCHER_IS_INSTANCE_EVENT };


/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t UI_TestCase_StateEventMatrix[ 4 + 1 ][ 4 ] = {
  /* row 0:  uninitialized state (for creation events) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 1:  UI_TestCase_STATE_1 (Idle) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, UI_TestCase_STATE_4 },
  /* row 2:  UI_TestCase_STATE_2 (pressStartStop) */
  { UI_TestCase_STATE_2, UI_TestCase_STATE_3, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 3:  UI_TestCase_STATE_3 (testCaseFinished) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 4:  UI_TestCase_STATE_4 (initialize) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, UI_TestCase_STATE_2, EVENT_CANT_HAPPEN }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t UI_TestCase_acts[ 5 ] = {
    (StateAction_t) 0,
    (StateAction_t) UI_TestCase_act1,  /* Idle */
    (StateAction_t) UI_TestCase_act2,  /* pressStartStop */
    (StateAction_t) UI_TestCase_act3,  /* testCaseFinished */
    (StateAction_t) UI_TestCase_act4  /* initialize */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings[ 5 ] = {
    "",
    "Idle",
    "pressStartStop",
    "testCaseFinished",
    "initialize"
  };

/*
 * instance state machine event dispatching
 */
void
UI_TestCase_Dispatch( Escher_xtUMLEvent_t * event )
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
      next_state = UI_TestCase_StateEventMatrix[ current_state ][ event_number ];
      if ( next_state <= 4 ) {
        STATE_TXN_START_TRACE( "TestCase", current_state, state_name_strings[ current_state ] );
        /* Execute the state action and update the current state.  */
        ( *UI_TestCase_acts[ next_state ] )( instance, event );
        STATE_TXN_END_TRACE( "TestCase", next_state, state_name_strings[ next_state ] );

        /* Self deletion state transition? */
        if ( next_state == UI_TestCase_STATE_3 ) {          Escher_DeleteInstance( instance, UI_DOMAIN_ID, UI_TestCase_CLASS_NUMBER );
        } else {
          instance->current_state = next_state;
        }
      } else if ( next_state == EVENT_CANT_HAPPEN ) {
          /* event cant happen */
          UserEventCantHappenCallout( current_state, next_state, event_number );
          STATE_TXN_CH_TRACE( "TestCase", current_state );
      } else {
        /* empty else */
      }
    }
  }
}

