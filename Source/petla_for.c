for(int i=get_global_id(0);
    i<N;
    i+=get_global_size(0))
{
    ...
}