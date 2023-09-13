typedef struct sol_struct
{
 double* Y;
} sol_struct;

double* get_double_p_sol_struct(sol_struct* x, char* name){

 if( strcmp(name,"Y") == 0 ){ return x->Y; }
 else {return NULL;}

}


