#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n[26]={0};
    char c;
    
    std::string filename = "test.txt";

  std::ofstream writing_file;
  writing_file.open(filename, std::ios::out);

  std::cout << "writing " << filename << "..." << std::endl;

  for (int i = 0; i<10; i++)
  {
    writing_file << i << std::endl;
  }

    /*while( cin>>c ){
        if('A'<=c && c<='Z')
            c+=32;
        if('a'<=c && c<='z')
            n[c-'a']+=1;
    }
    for(int i=0;i<26;i++){
        printf("%c：%d\n",i+97,n[i]);
    }*/
    return 0;
}