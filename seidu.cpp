#include <iostream>
using namespace std;

int main(void)
{
    int arr[7];
    int search;

        cout<<"Enter total number:"<<endl;
        cin>>arr[7];
        cout<<"Enter "<<arr[7]<<" number: "<<endl;

    for (int i=0; i<arr[7]; i++)
    {
        cin>>arr[i];
    }

        cout<<"Enter a number to find:"<<endl;
        cin>>search;


    int first = 0;
    int last;
    last = 7 - 1;
    int midd;
    bool found = false;





    while(first <= last && !found)
    {

    midd = (first + last )/2;
        if (arr[midd] == search)
        {
            found = true;
        }

        else if(arr[midd] > search)
        {
            last = midd - 1;
        }

        else
        {
            first = midd + 1;
        }



    }

    if(found)
    {
        cout<<search<<" found at location "<< midd + 1;
        cout<<endl;
    }

    else
    {
        cout<<"Incorrect! "<<search<<" can not be found."<<endl;
    }





    return 0;
}


