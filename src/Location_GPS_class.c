/*----------------------------------------------------------------------------
 * File:  Location_GPS_class.c
 *
 * Class:       GPS  (GPS)
 * Component:   Location
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "GPS_Watch_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "Location_classes.h"

/*
 * class operation:  initialize
 */
void
Location_GPS_op_initialize()
{
  Location_GPS * gps=0;
  /* SELECT any gps FROM INSTANCES OF GPS */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any gps FROM INSTANCES OF GPS" );
  gps = (Location_GPS *) Escher_SetGetAny( &pG_Location_GPS_extent.active );
  /* IF ( empty gps ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( empty gps )" );
  if ( ( 0 == gps ) ) {
    Location_simulatedGPS * simgps=0;
    /* CREATE OBJECT INSTANCE gps OF GPS */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE gps OF GPS" );
    gps = (Location_GPS *) Escher_CreateInstance( Location_DOMAIN_ID, Location_GPS_CLASS_NUMBER );
    /* ASSIGN gps.id = 1 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN gps.id = 1" );
    ((Location_GPS *)xtUML_detect_empty_handle( gps, "GPS", "gps.id" ))->id = 1;
    /* ASSIGN gps.motionSegments = 0 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN gps.motionSegments = 0" );
    ((Location_GPS *)xtUML_detect_empty_handle( gps, "GPS", "gps.motionSegments" ))->motionSegments = 0;
    /* simulatedGPS::initialize() */
    XTUML_OAL_STMT_TRACE( 2, "simulatedGPS::initialize()" );
    Location_simulatedGPS_op_initialize();
    /* SELECT any simgps FROM INSTANCES OF simulatedGPS */
    XTUML_OAL_STMT_TRACE( 2, "SELECT any simgps FROM INSTANCES OF simulatedGPS" );
    simgps = (Location_simulatedGPS *) Escher_SetGetAny( &pG_Location_simulatedGPS_extent.active );
    /* ASSIGN gps.currentLatitude = simgps.initialLatitude */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN gps.currentLatitude = simgps.initialLatitude" );
    ((Location_GPS *)xtUML_detect_empty_handle( gps, "GPS", "gps.currentLatitude" ))->currentLatitude = ((Location_simulatedGPS *)xtUML_detect_empty_handle( simgps, "simulatedGPS", "simgps.initialLatitude" ))->initialLatitude;
    /* ASSIGN gps.currentLongitude = simgps.initialLongitude */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN gps.currentLongitude = simgps.initialLongitude" );
    ((Location_GPS *)xtUML_detect_empty_handle( gps, "GPS", "gps.currentLongitude" ))->currentLongitude = ((Location_simulatedGPS *)xtUML_detect_empty_handle( simgps, "simulatedGPS", "simgps.initialLongitude" ))->initialLongitude;
  }
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      GPS  (GPS)
 * Component:  Location
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s Location_GPS_container[ Location_GPS_MAX_EXTENT_SIZE ];
static Location_GPS Location_GPS_instances[ Location_GPS_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_Location_GPS_extent = {
  {0}, {0}, &Location_GPS_container[ 0 ],
  (Escher_iHandle_t) &Location_GPS_instances,
  sizeof( Location_GPS ), Location_GPS_STATE_1, Location_GPS_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      GPS  (GPS)
 * Component:  Location
 *--------------------------------------------------------------------------*/

/*
 * State 1:  [idle]
 */
static void Location_GPS_act1( Location_GPS *, const Escher_xtUMLEvent_t * const );
static void
Location_GPS_act1( Location_GPS * self, const Escher_xtUMLEvent_t * const event )
{
  /* LOG::LogInfo( message:Locating::GPS::Idle ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Locating::GPS::Idle )" );
  LOG_LogInfo( "Locating::GPS::Idle" );
}

/*
 * State 2:  [locating]
 */
static void Location_GPS_act2( Location_GPS *, const Escher_xtUMLEvent_t * const );
static void
Location_GPS_act2( Location_GPS * self, const Escher_xtUMLEvent_t * const event )
{
  Location_simulatedGPS * simgps=0;
  /* simulatedGPS::initialize() */
  XTUML_OAL_STMT_TRACE( 1, "simulatedGPS::initialize()" );
  Location_simulatedGPS_op_initialize();
  /* SELECT any simgps FROM INSTANCES OF simulatedGPS */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any simgps FROM INSTANCES OF simulatedGPS" );
  simgps = (Location_simulatedGPS *) Escher_SetGetAny( &pG_Location_simulatedGPS_extent.active );
  /* IF ( ( ( self.motionSegments % 3 ) == 0 ) ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( ( ( self.motionSegments % 3 ) == 0 ) )" );
  if ( ( ( ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.motionSegments" ))->motionSegments % 3 ) == 0 ) ) {
    /* ASSIGN self.currentLongitude = ( self.currentLongitude + ( simgps.longitudeIncrement * 2 ) ) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN self.currentLongitude = ( self.currentLongitude + ( simgps.longitudeIncrement * 2 ) )" );
    ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.currentLongitude" ))->currentLongitude = ( ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.currentLongitude" ))->currentLongitude + ( ((Location_simulatedGPS *)xtUML_detect_empty_handle( simgps, "simulatedGPS", "simgps.longitudeIncrement" ))->longitudeIncrement * 2 ) );
    /* ASSIGN self.currentLatitude = ( self.currentLatitude + simgps.latitudeIncrement ) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN self.currentLatitude = ( self.currentLatitude + simgps.latitudeIncrement )" );
    ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.currentLatitude" ))->currentLatitude = ( ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.currentLatitude" ))->currentLatitude + ((Location_simulatedGPS *)xtUML_detect_empty_handle( simgps, "simulatedGPS", "simgps.latitudeIncrement" ))->latitudeIncrement );
  }
  else if ( ( ( ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.motionSegments" ))->motionSegments % 5 ) == 0 ) ) {
    /* ASSIGN self.currentLongitude = ( self.currentLongitude + simgps.longitudeIncrement ) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN self.currentLongitude = ( self.currentLongitude + simgps.longitudeIncrement )" );
    ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.currentLongitude" ))->currentLongitude = ( ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.currentLongitude" ))->currentLongitude + ((Location_simulatedGPS *)xtUML_detect_empty_handle( simgps, "simulatedGPS", "simgps.longitudeIncrement" ))->longitudeIncrement );
    /* ASSIGN self.currentLatitude = ( self.currentLatitude + ( simgps.latitudeIncrement * 3 ) ) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN self.currentLatitude = ( self.currentLatitude + ( simgps.latitudeIncrement * 3 ) )" );
    ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.currentLatitude" ))->currentLatitude = ( ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.currentLatitude" ))->currentLatitude + ( ((Location_simulatedGPS *)xtUML_detect_empty_handle( simgps, "simulatedGPS", "simgps.latitudeIncrement" ))->latitudeIncrement * 3 ) );
  }
  else {
    /* ASSIGN self.currentLongitude = ( self.currentLongitude + simgps.longitudeIncrement ) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN self.currentLongitude = ( self.currentLongitude + simgps.longitudeIncrement )" );
    ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.currentLongitude" ))->currentLongitude = ( ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.currentLongitude" ))->currentLongitude + ((Location_simulatedGPS *)xtUML_detect_empty_handle( simgps, "simulatedGPS", "simgps.longitudeIncrement" ))->longitudeIncrement );
    /* ASSIGN self.currentLatitude = ( self.currentLatitude + simgps.latitudeIncrement ) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN self.currentLatitude = ( self.currentLatitude + simgps.latitudeIncrement )" );
    ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.currentLatitude" ))->currentLatitude = ( ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.currentLatitude" ))->currentLatitude + ((Location_simulatedGPS *)xtUML_detect_empty_handle( simgps, "simulatedGPS", "simgps.latitudeIncrement" ))->latitudeIncrement );
  }
  /* ASSIGN self.motionSegments = ( self.motionSegments + 1 ) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.motionSegments = ( self.motionSegments + 1 )" );
  ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.motionSegments" ))->motionSegments = ( ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.motionSegments" ))->motionSegments + 1 );
}

/*
 * State 3:  [registeringListener]
 */
static void Location_GPS_act3( Location_GPS *, const Escher_xtUMLEvent_t * const );
static void
Location_GPS_act3( Location_GPS * self, const Escher_xtUMLEvent_t * const event )
{
  Escher_xtUMLEvent_t * tick;Location_simulatedGPS * simgps=0;
  /* simulatedGPS::initialize() */
  XTUML_OAL_STMT_TRACE( 1, "simulatedGPS::initialize()" );
  Location_simulatedGPS_op_initialize();
  /* SELECT any simgps FROM INSTANCES OF simulatedGPS */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any simgps FROM INSTANCES OF simulatedGPS" );
  simgps = (Location_simulatedGPS *) Escher_SetGetAny( &pG_Location_simulatedGPS_extent.active );
  /* CREATE EVENT INSTANCE tick(  ) TO self */
  XTUML_OAL_STMT_TRACE( 1, "CREATE EVENT INSTANCE tick(  ) TO self" );
  tick = Escher_NewxtUMLEvent( (void *) self, &Location_GPSevent1c );
  /* ASSIGN self.timer = TIM::timer_start_recurring(event_inst:tick, microseconds:simgps.updatePeriod) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.timer = TIM::timer_start_recurring(event_inst:tick, microseconds:simgps.updatePeriod)" );
  ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.timer" ))->timer = TIM_timer_start_recurring( (Escher_xtUMLEvent_t *)tick, ((Location_simulatedGPS *)xtUML_detect_empty_handle( simgps, "simulatedGPS", "simgps.updatePeriod" ))->updatePeriod );
  /* LOG::LogInfo( message:Location listener registered. ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Location listener registered. )" );
  LOG_LogInfo( "Location listener registered." );
  /* GENERATE GPS4:registeringComplete() TO self */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE GPS4:registeringComplete() TO self" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &Location_GPSevent4c );
    Escher_SendSelfEvent( e );
  }
}

/*
 * State 5:  [unregistering]
 */
static void Location_GPS_act5( Location_GPS *, const Escher_xtUMLEvent_t * const );
static void
Location_GPS_act5( Location_GPS * self, const Escher_xtUMLEvent_t * const event )
{
  bool res;
  /* ASSIGN res = TIM::timer_cancel(timer_inst_ref:self.timer) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN res = TIM::timer_cancel(timer_inst_ref:self.timer)" );
  res = TIM_timer_cancel( ((Location_GPS *)xtUML_detect_empty_handle( self, "GPS", "self.timer" ))->timer );
  /* LOG::LogInfo( message:Location listener unregistered. ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Location listener unregistered. )" );
  LOG_LogInfo( "Location listener unregistered." );
  /* IF ( not res ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not res )" );
  if ( !res ) {
    /* LOG::LogFailure( message:Location listener: timer_cancel() failed. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogFailure( message:Location listener: timer_cancel() failed. )" );
    LOG_LogFailure( "Location listener: timer_cancel() failed." );
  }
  /* GENERATE GPS12:unregisterComplete() TO self */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE GPS12:unregisterComplete() TO self" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &Location_GPSevent12c );
    Escher_SendSelfEvent( e );
  }
}

const Escher_xtUMLEventConstant_t Location_GPSevent1c = {
  Location_DOMAIN_ID, Location_GPS_CLASS_NUMBER, LOCATION_GPSEVENT1NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t Location_GPSevent4c = {
  Location_DOMAIN_ID, Location_GPS_CLASS_NUMBER, LOCATION_GPSEVENT4NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t Location_GPSevent10c = {
  Location_DOMAIN_ID, Location_GPS_CLASS_NUMBER, LOCATION_GPSEVENT10NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t Location_GPSevent11c = {
  Location_DOMAIN_ID, Location_GPS_CLASS_NUMBER, LOCATION_GPSEVENT11NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t Location_GPSevent12c = {
  Location_DOMAIN_ID, Location_GPS_CLASS_NUMBER, LOCATION_GPSEVENT12NUM,
  ESCHER_IS_INSTANCE_EVENT };


/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t Location_GPS_StateEventMatrix[ 4 + 1 ][ 5 ] = {
  /* row 0:  uninitialized state (for creation events) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 1:  Location_GPS_STATE_1 (idle) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, Location_GPS_STATE_3, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 2:  Location_GPS_STATE_2 (locating) */
  { Location_GPS_STATE_2, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, Location_GPS_STATE_5, EVENT_CANT_HAPPEN },
  /* row 3:  Location_GPS_STATE_3 (registeringListener) */
  { EVENT_CANT_HAPPEN, Location_GPS_STATE_2, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 4:  Location_GPS_STATE_5 (unregistering) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, Location_GPS_STATE_1 }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t Location_GPS_acts[ 5 ] = {
    (StateAction_t) 0,
    (StateAction_t) Location_GPS_act1,  /* idle */
    (StateAction_t) Location_GPS_act2,  /* locating */
    (StateAction_t) Location_GPS_act3,  /* registeringListener */
    (StateAction_t) Location_GPS_act5  /* unregistering */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings[ 5 ] = {
    "",
    "idle",
    "locating",
    "registeringListener",
    "unregistering"
  };

/*
 * instance state machine event dispatching
 */
void
Location_GPS_Dispatch( Escher_xtUMLEvent_t * event )
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
      next_state = Location_GPS_StateEventMatrix[ current_state ][ event_number ];
      if ( next_state <= 4 ) {
        STATE_TXN_START_TRACE( "GPS", current_state, state_name_strings[ current_state ] );
        /* Execute the state action and update the current state.  */
        ( *Location_GPS_acts[ next_state ] )( instance, event );
        STATE_TXN_END_TRACE( "GPS", next_state, state_name_strings[ next_state ] );
        instance->current_state = next_state;
      } else if ( next_state == EVENT_CANT_HAPPEN ) {
          /* event cant happen */
          UserEventCantHappenCallout( current_state, next_state, event_number );
          STATE_TXN_CH_TRACE( "GPS", current_state );
      } else {
        /* empty else */
      }
    }
  }
}

