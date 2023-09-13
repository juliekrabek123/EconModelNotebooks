typedef struct par_struct
{
 int N;
 double a;
 double b;
 int threads;
 char* txt;
 char* txtlist;
 double* X;
 int* Z;
} par_struct;

int get_int_par_struct(par_struct* x, char* name){

 if( strcmp(name,"N") == 0 ){ return x->N; }
 else if( strcmp(name,"threads") == 0 ){ return x->threads; }
 else {return -9999;}

}


double get_double_par_struct(par_struct* x, char* name){

 if( strcmp(name,"a") == 0 ){ return x->a; }
 else if( strcmp(name,"b") == 0 ){ return x->b; }
 else {return NAN;}

}


char* get_char_p_par_struct(par_struct* x, char* name){

 if( strcmp(name,"txt") == 0 ){ return x->txt; }
 else if( strcmp(name,"txtlist") == 0 ){ return x->txtlist; }
 else {return NULL;}

}


double* get_double_p_par_struct(par_struct* x, char* name){

 if( strcmp(name,"X") == 0 ){ return x->X; }
 else {return NULL;}

}


int* get_int_p_par_struct(par_struct* x, char* name){

 if( strcmp(name,"Z") == 0 ){ return x->Z; }
 else {return NULL;}

}


