#include <iostream>
using namespace std;

void printCheckerboard(int n) {
    int flgx=0;
    int flgy=0;
    for (int i = 0; i < 2 * n; i++) {
    //    cout << "hi" << flgx << " ";
       
        for (int j = 0; j < 2 * n; j++) {
            // print hi and fllgx value
            
            if (flgx==0 || flgx==1) {
                cout << "#";
                flgx++; 
            } else {
                cout << ".";
                flgx++; 
            }
            
           
            if(flgx==4)
            {
                flgx=0;
            
            }
        }

        if (flgy==1)
        {
           
            flgx=2;
         



        }
        else if(flgy==4)
        {
            flgx=0;
            flgy=0;
        }
        else if(flgy==0) {
            flgx=0;
        }
        else if(flgy==2)
        {
            flgx=2;
        }
        else if (flgy==3)
        {
            flgx=0;
            
        }

        flgy++;
        cout << endl;
        // print flgs value
        // cout << "flgx: " << flgx << " flgy: " << flgy << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        printCheckerboard(n);
    }

    return 0;
}
