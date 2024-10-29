  #include <iostream>
using namespace std;

int BinarySearch(int list[], int low, int high, int key);


int main()
{
    int Array[] = {1, 3, 4, 6, 9, 10, 14, 19, 23, 30};
    int first = 0;
    int last = 9;
    int value;

    for( int i= 0; i< 10; i++)
    {
        cout << "{" <<Array[i] <<" "<<"}";
    }
    cout << "\n\nPlease enter a number to find from the above list of number. \n";
    cin >> value;
    cout << "\n\n";

    int Location = BinarySearch(Array, first, last, value);

    if(Location==-1)
         cout<< "Number is not found.\n";
    else
         cout<< "Number is found.\n";
    return 0;
}

int BinarySearch(int list[], int low, int high, int key)
{
    int mid=(high + low)/2;

    if(low<=high)
    {
        if (list[mid] == key)
        {
        return mid;
        }
        else if (list[mid] >key)
            return BinarySearch(list,low,mid -1, key);
        else
            return BinarySearch(list,high,mid + 1, key);
    }
    else return -1;
}