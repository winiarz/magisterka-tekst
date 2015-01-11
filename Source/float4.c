for( int i=get_global_id(0); i<N; i+=get_global_size(0) )
{
  float forceX = 0.0f;
  float forceY = 0.0f;
  float forceZ = 0.0f;
  
  for( int j=0; j<N; j++)
  {
     force += gravity( &forceX, &forceY, &forceZ, points[j] );
  }
  updatePoint( point, force );
}