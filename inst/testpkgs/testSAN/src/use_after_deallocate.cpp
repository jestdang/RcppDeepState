#include <Rcpp.h>
using namespace std;
// [[Rcpp::export]]
int use_after_deallocate(int val){
  char *x = new char[val];
  delete[] x;
  return x[5];
} 
  
