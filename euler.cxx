#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
  const double t=0.1;
  const double lambda=-1.0;
  const double prod=t*lambda;
  const double TStart=0., TEnde=5*log(0.5)/lambda;
  const int N=(TEnde-TStart)/t;
  
  //double* y=new double[N];
  double yex=1.,yim=1.,ymix=1.;
  
 
  
  cout<<"0"<<"\t"<<yex<<"\t"<<yim<<"\t"<<ymix<<"\t"<<"1"<<endl;
  for(int i=1; i<N; i++){
    yex+=prod*yex;
    yim/=(1-prod);
    ymix*=(1.+1./2*prod);
    ymix/=(1.-1./2*prod);
    cout<<i*t<<"\t"<<yex<<"\t"<<yim<<"\t"<<ymix<<"\t"<<exp(prod*i)<<endl;
  }
  
 
 cout << "# " << prod << endl;
  //delete[] y;
  return 0;
}

