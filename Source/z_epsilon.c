for( int i=get_global_id(0); i<N; i+=get_global_size(0) )
{
  struct Point point = points[i];
  float3 force = 0.0f;
  for( int j=0; j<N; j++)
    if( i != j )
     force += gravity( point, points[j] );
  updatePoint( point, force );
}