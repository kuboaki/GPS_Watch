/*----------------------------------------------------------------------------
 * File:  Location_Distance_class.h
 *
 * Class:       Distance  (Distance)
 * Component:   Location
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef LOCATION_DISTANCE_CLASS_H
#define LOCATION_DISTANCE_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Distance  (Distance)
 */
struct Location_Distance {

  /* application analysis class attributes */
  i_t id;  /* * id */
  r_t kmPerDegree;  /* - kmPerDegree */
};
void Location_Distance_op_initialize( void );


#define Location_Distance_MAX_EXTENT_SIZE 200
extern Escher_Extent_t pG_Location_Distance_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* LOCATION_DISTANCE_CLASS_H */
