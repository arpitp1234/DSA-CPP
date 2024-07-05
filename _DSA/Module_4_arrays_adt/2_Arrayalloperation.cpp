/*Here we are going to discuss array all operation*/
#include <iostream>
using namespace std;

class Array
{
private:
    int *A;
    int size;
    int length;

public:
    Array()
    {
        A = new int[10 * sizeof(int)];
        size = 10;
        length = 0;
    }
    ~Array()
    {
        delete A;
    }
    void display_full_array()
    {
        for (int i = 0; i < size; i++)
        {
            cout << A[i] << " ";
        }
    }
    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
    }
    void Insert(int x, int index)
    {
        for (int i = length - 1; i >= index; i--)
        {
            if (index < 0 || index > length)
            {
                cout << "Invalid index";
                return;
            }
            A[i + 1] = A[i];
        }
        A[index] = x;
        length++;
    }

    void Delete(int index)
    {
        int x;
        x = A[index];
        for (int i = index; i < length; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
    }
    void append(int x)
    {
        A[length] = x;
        length++;
    }

    int linearsearch(int x)
    {
        for (int i = 0; i < length; i++)
        {
            if (A[i] == x)
            {
                return i;
            }
        }
        return -1;
    }
    int BinarySearch(int key)
    {
        int l = 0;
        int h = length;
        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (key == A[mid])
            {
                return mid;
            }
            else if (key < A[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    int Get(int index)
    {
        if (index > 0 && index < size)
        {
            return A[index];
        }
    }
    void set(int index, int x)
    {
        if (index > 0 && index < length)
        {
            A[index] = x;
        }
    }
    int max()
    {
        int max = A[0];
        for (int i = 0; i < length; i++)
        {
            if (max < A[i])
            {
                max = A[i];
            }
        }
        return max;
    }
    int min()
    {

        int min = A[0];
        for (int i = 0; i < length; i++)
        {
            if (min > A[i])
            {
                min = A[i];
            }
        }
        return min;
    }
    int sum()
    {
        int sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum = sum + A[i];
        }
        return sum;
    }
    int Avg()
    {
        int k = sum();
        int avg = k / length;
        return avg;
    }
    void reverse()
    {
        int B[length];
        for (int i = length, j = 0; i >= 0; i--, j++)
        {
            B[j] = A[i];
        }
        for (int i = 0; i < length; i++)
        {
            A[i] = B[i];
        }
    }
    void Insert_in_sort_array(int x)
    {
        int i = length - 1;
        while (A[i] > x)
        {
            A[i + 1] = A[i];
            i--;
        }
    }
    int isSorted()
    {
        for (int i = 0; i < length; i++)
        {
            if (A[i] > A[i + 1])
            {
                return 0;
            }
        }
    }
    void Rearrange()
    {
        int i = 0;
        int j = length - 1;
        while (i < j)
        {
            while (A[i] < 0)
            {
                i++;
            };
            while (A[j] > 0)
            {
                j--;
            };
            if (i < j)
            {
                int temp;
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    void Merge(Array *arr1,Array *arr2){
        int i=0;
        int j=0;
        int k=0;
        while(i<arr1->length && j<arr2->length){
             if(arr1->A[i]<arr2->A[j]){
                A[k]=arr1->A[i];
                i++;
                k++;
             }else if(arr1->A[i]>arr2->A[j]){
                A[k]=arr2->A[j];
                k++;
                j++;
             }
        }
        while(i<arr1->length){
            A[k]=arr1->A[i];
            i++;
            k++;
        }
        while(j<arr2->length){
            A[k]=arr2->A[j];
            k++;
            j++;
        }
        length=arr1->length+arr2->length;
        size=arr1->size+arr2->size;
    }
   //Both the array should be in the sorted order then only logic for union will work
  
   void Union(Array *arr1,Array *arr2){
      int i=0;
      int j=0;
      int k=0;
      while(i<arr1->length && j<arr2->length){
         if(arr1->A[i]<arr2->A[j]){
            A[k]=arr1->A[i];
            k++;
            i++;
         }else if(arr1->A[i]>arr2->A[j]){
            A[k]=arr2->A[j];
            k++;
            j++;
         }else if(arr1->A[i]==arr2->A[j]){
            A[k]=arr2->A[j];
            k++;
            i++;
            j++;
         }
      }
     while(i<arr1->length){
        A[k]=arr1->A[i];
        i++;
        k++;
     }
     while(j<arr2->length){
        A[k]=arr2->A[j];
        j++;
        k++;
     }
     length=k;
     size=arr1->size+arr2->size;  
   }
    //Both the array should be sorted then only this logic for intersection  will work.

    void Intersection(Array *arr1,Array *arr2){
       int i=0;
       int j=0;
       int k=0;
       while(i<arr1->length && j<arr2->length){
          if(arr1->A[i]<arr2->A[j]){
            i++;
          }else if(arr1->A[i]>arr2->A[j]){
            j++;
          }else if(arr1->A[i]==arr2->A[j]){
              A[k]=arr1->A[i];
              k++;
              i++;
              j++;
          }
       }
       length=k;
       size=arr1->size+arr2->size;
     }  

   void Difference(Array *arr1,Array *arr2){
      int i=0;
      int j=0;
      int k=0;
      while(i<arr1->length && j<arr2->length){
         if(arr1->A[i]<arr2->A[j]){
            A[k]=arr1->A[i];
            k++;
            i++;
         }else if(arr1->A[i]>arr2->A[j]){
            j++;
         }else{
            i++;
            j++;
         }
      }
      while(i<arr1->length){
        A[k]=arr1->A[i];
        k++;
        i++;
      }
      length=k;
      size=10;
   }
};

int main()
{
   // Array arr;
   // int x;
   // cout << "Enter the 8 element in the array:- ";
   // for (int i = 0; i < 8; i++)
   // {
   //    cin >> x;
   //    arr.Insert(x, i);
   // }
   // arr.append(26);
   // arr.display_full_array();
   // cout << endl;
   // cout << arr.linearsearch(4) << endl;
   // cout << arr.BinarySearch(5);
   // cout << endl;
   // cout << arr.Get(5);
   // cout << endl;
   // cout << arr.max();
   // cout << endl;
   // cout << arr.min();
   // cout << endl;
   // cout << arr.sum();
   // cout << endl;
   // cout << arr.Avg();
   // arr.reverse();
   // arr.display();
   // cout << endl;
   // arr.Insert_in_sort_array(5);
   // cout << endl;
   // arr.display();
   // arr.Rearrange();
   // cout << endl;
   // arr.display();
   //  Array *arr2;
    // For Array 1;
  // For Array1
    Array *arr1=new Array;
    Array *arr2=new Array;
    arr1->Insert(5,0);
    arr1->Insert(10,1);
    arr1->Insert(15,2);
    arr1->Insert(20,3);
    arr1->Insert(25,4);
    arr1->Insert(28,5);
    arr1->Insert(30,6);
    arr1->Insert(35,7);
    arr1->display();
    cout<<endl;
   //for Array2;
    arr2->Insert(10,0);
    arr2->Insert(20,1);
    arr2->Insert(30,2);
    arr2->Insert(35,3);
    arr2->Insert(50,4);
    arr2->Insert(60,5);
    arr2->Insert(65,6);
    arr2->display();
    cout<<endl;
    Array *arr3=new Array;
    //arr3->Merge(arr1,arr2);
    //arr3->display();
    cout<<"Union:- ";
    arr3->Union(arr1,arr2);
    arr3->display();
    cout<<endl;
    cout<<"Intersection:- "<<endl;
    arr3->Intersection(arr1,arr2);
    arr3->display();
    cout<<"\nDifference:- "<<endl;
    arr3->Difference(arr1,arr2);
    arr3->display();
   return 0;  
}
