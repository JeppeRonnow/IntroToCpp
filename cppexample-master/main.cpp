#include <string>
#include <vector> 
#include <iostream>

using namespace std;

int main(int argc, char**argv)
{
    cout << "executable= " << argv[0] << endl;
    
    int inputInteger = atoi( argv[1] );
    int inputInteger2 = atoi( argv[2] );

    int res = inputInteger * inputInteger2;

    cout << "Result: " << res << endl;
       
    return 0;
}
