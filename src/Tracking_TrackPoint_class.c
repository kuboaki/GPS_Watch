/*----------------------------------------------------------------------------
 * File:  Tracking_TrackPoint_class.c
 *
 * Class:       TrackPoint  (TrackPoint)
 * Component:   Tracking
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "GPS_Watch_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "Tracking_classes.h"


/*
 * RELATE TrackLog TO TrackPoint ACROSS R1
 */
void
Tracking_TrackPoint_R1_Link_has_first( Tracking_TrackLog * part, Tracking_TrackPoint * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "TrackPoint", "Tracking_TrackPoint_R1_Link_has_first" );
    return;
  }
  Escher_memmove( &form->session_startTime, &part->session_startTime, sizeof( form->session_startTime ) );
  /* Note:  TrackPoint->TrackLog[R1] not navigated */
  part->TrackPoint_R1_has_first = form;
}

/*
 * UNRELATE TrackLog FROM TrackPoint ACROSS R1
 */
void
Tracking_TrackPoint_R1_Unlink_has_first( Tracking_TrackLog * part, Tracking_TrackPoint * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "TrackPoint", "Tracking_TrackPoint_R1_Unlink_has_first" );
    return;
  }
  /* Note:  TrackPoint->TrackLog[R1] not navigated */
  part->TrackPoint_R1_has_first = 0;
}

/*
 * RELATE <left> TrackPoint TO <right> TrackPoint ACROSS R2.'preceeds'
 */
void
Tracking_TrackPoint_R2_Link_preceeds( Tracking_TrackPoint * left, Tracking_TrackPoint * right )
{
  if ( (left == 0) || (right == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "TrackPoint", "Tracking_TrackPoint_R2_Link_preceeds" );
    return;
  }
  Escher_memmove( &left->session_startTime, &right->session_startTime, sizeof( left->session_startTime ) );
  left->next_time = right->time;
  left->TrackPoint_R2_preceeds = right; /* SR L1 */
  right->TrackPoint_R2_follows = left; /* SR L2 */
}

/*
 * UNRELATE <left> TrackPoint FROM <right> TrackPoint ACROSS R2.'preceeds'
 */
void
Tracking_TrackPoint_R2_Unlink_preceeds( Tracking_TrackPoint * left, Tracking_TrackPoint * right )
{
  if ( (left == 0) || (right == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "TrackPoint", "Tracking_TrackPoint_R2_Unlink_preceeds" );
    return;
  }
  left->next_time = 0;
  left->TrackPoint_R2_preceeds = 0; /* SR U1 */
  right->TrackPoint_R2_follows = 0; /* SR U2 */
}

/*
 * RELATE <left> TrackPoint TO <right> TrackPoint ACROSS R2.'follows'
 */
void
Tracking_TrackPoint_R2_Link_follows( Tracking_TrackPoint * left, Tracking_TrackPoint * right )
{
  if ( (left == 0) || (right == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "TrackPoint", "Tracking_TrackPoint_R2_Link_follows" );
    return;
  }
  Escher_memmove( &right->session_startTime, &left->session_startTime, sizeof( right->session_startTime ) );
  right->next_time = left->time;
  right->TrackPoint_R2_preceeds = left; /* SR L4 */
  left->TrackPoint_R2_follows = right; /* SR L5 */
}

/*
 * UNRELATE <left> TrackPoint FROM <right> TrackPoint ACROSS R2.'follows'
 */
void
Tracking_TrackPoint_R2_Unlink_follows( Tracking_TrackPoint * left, Tracking_TrackPoint * right )
{
  if ( (left == 0) || (right == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "TrackPoint", "Tracking_TrackPoint_R2_Unlink_follows" );
    return;
  }
  right->next_time = 0;
  right->TrackPoint_R2_preceeds = 0; /* SR U4 */
  left->TrackPoint_R2_follows = 0; /* SR U5 */
}

/*
 * RELATE TrackLog TO TrackPoint ACROSS R3
 */
void
Tracking_TrackPoint_R3_Link_has_last( Tracking_TrackLog * part, Tracking_TrackPoint * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "TrackPoint", "Tracking_TrackPoint_R3_Link_has_last" );
    return;
  }
  Escher_memmove( &form->session_startTime, &part->session_startTime, sizeof( form->session_startTime ) );
  /* Note:  TrackPoint->TrackLog[R3] not navigated */
  part->TrackPoint_R3_has_last = form;
}

/*
 * UNRELATE TrackLog FROM TrackPoint ACROSS R3
 */
void
Tracking_TrackPoint_R3_Unlink_has_last( Tracking_TrackLog * part, Tracking_TrackPoint * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "TrackPoint", "Tracking_TrackPoint_R3_Unlink_has_last" );
    return;
  }
  /* Note:  TrackPoint->TrackLog[R3] not navigated */
  part->TrackPoint_R3_has_last = 0;
}
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s Tracking_TrackPoint_container[ Tracking_TrackPoint_MAX_EXTENT_SIZE ];
static Tracking_TrackPoint Tracking_TrackPoint_instances[ Tracking_TrackPoint_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_Tracking_TrackPoint_extent = {
  {0}, {0}, &Tracking_TrackPoint_container[ 0 ],
  (Escher_iHandle_t) &Tracking_TrackPoint_instances,
  sizeof( Tracking_TrackPoint ), 0, Tracking_TrackPoint_MAX_EXTENT_SIZE
  };

