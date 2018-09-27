#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    string input_file ="input.inp";
    string output_file = "output.out";
   	ifstream fin(input_file.c_str());

    int n;
    fin>>n;
    vector<int> a;
    //a.assign(n);
    int x;
    for(int i = 0; i < n; i ++)
    {
        fin>>x;
        a.push_back(x);
    }
    fin.close();
    int dem = 0;
    for(int  i = 0; i < a.size() - 1; i++)
    {
        for(int j = i + 1; j < a.size(); j++)
        {
            if(a[i] ==a[j])
                dem++;
        }
    }
    ofstream fout(output_file.c_str());
    fout<<dem;
    fout.close();
        cout<<dem;
    return 0;
}
