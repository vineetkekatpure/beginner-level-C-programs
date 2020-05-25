//factorial using recursion and find nCr and nPr

#include<stdio.h>

 long fact(int k)
{
	if(k==0)
		return 1;
	else
		return(k * fact(k-1));
}

  void main()
 {
 	long n,r,nfac,rfac,nrfac,nCr,nPr;
 	printf("\nEnter values of n & r: ");
 	scanf("%ld%ld",&n,&r);
 	nfac = fact(n);
 	rfac = fact(r);
 	nrfac = fact(n-r);
 	nCr = nfac / (rfac * nrfac);
 	nPr = nfac / nrfac;
 	printf("nCr = %ld\nnPr = %ld\n",nCr,nPr);
 }
