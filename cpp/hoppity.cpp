#include <iostream>

using namespace std;

int main (int argc,char *argv[]) {
  int line;
  FILE * myfile;
  
  if (argc ==1){  
    return 0;
  }  
  
  myfile = fopen(argv[1],"r");
  
  if(myfile == NULL) {
    return 0;
  }

  fscanf(myfile,"%d",&line);
  fclose(myfile);

  for (int n=1; n<=line; n++) {
    if (n % 3 ==0 && n % 5 ==0) { 
      cout << "Hop\n";
    }
    else if (n % 3 == 0) {
      cout << "Hoppity\n";
    }
    else if (n % 5 == 0) {
      cout << "Hophop\n";
    }
  }

  return 0;
}

