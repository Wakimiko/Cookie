//#A Hello World program in Cpp

#include <iostream>
#define LEN 15
using std::cout;
using std::endl;
void prinStar();
int main(int argc, char **argv){
    prinStar();
    cout << "* Hello World * "<< endl;
    prinStar();
    return 0;
}    

void prinStar(){
    for (int i=0;i<LEN;i++)
        cout << '*';
    cout << endl;
}
