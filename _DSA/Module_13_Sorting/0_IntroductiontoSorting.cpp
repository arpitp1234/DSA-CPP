/*Sorting*/
/*
Sorting is a process of ordering individaul of a list according to their proper rank either in asceding or desceding order

1)A programming logic where few step can sort a bunch of ellement are called as sorting algorithm

2)Different type of sorting algorithm have different logic and steps

3)We can easily sort a list of element by means of iteration and condition check statemnet.We require on outer loop 
and more inner loop and one swap function ot do purpose.


       Names of different sorting techinque

             1.Bubble         }
             2.Insertion      }- takes O(n2) time
             3.Selection      }
            
             4.HeapSort      }
             5.MergeSort     }
             6.QuickSort     }------takes O(nlogn) time. 
             7.TreeSort      }

             8.ShellSort     }--- takes (n^3/2) time;

             9.CountSort           }
             10.Bucket/Bin Sort    }---------O(n) time but consume lot of space.
             11.Radix Sort.        }


Criteria for analysis.

1)Number of comparison.
2)Number of swaps
3)Adaptive
4)Stable
5)Extra Memory.

1)Number of comparsion:- Total how many comparison a sroting algoritm is performing

=>Total time take by sorting algorithm depend on number of comparison.

=>So ,No of comparision decide time complexity of an algorithm.


2)Number of swaps=>For arranging element in increaseing and decreasing order,element need to be swapped.

So,swapping is common/process done in all the algorithm.
So,we will analyze how many swaps its is performing.


3)Adaptive:- When we try to keep element in sorted order what happended if theyt are already in sorted order

If thery are already in sorted order and we try to sort it again,then sorting algorithm may take minimum time or less time,because it does not
have  to arrange element.

So if any sorting method is taking less time ,minimum time over already sorted list then we called that algorithm as adaptive

4)Extra memory:- Some sorting algorithm requirre extra memory for sorting the element apart from the space occupied by the element.Not all but
few algorithm require.


5)Stable:
     
     For example:- If there is a record of element
          
          Name-> A  B  C  D  E  F G
          Marks->5  8  6  4  6  7 10

    This list is already sorted on basis of name.Now we want to sort it on basis of marks.

    Toh jab marks ko sort karege toh ham ki jo hamara duplicate element hai unka order change na ho,jaise C ke 6 marks jo aaye hai to 
    wah E ke 6 marks se hamesha pehle hi aaye.

if a sorting algorithm is preserving order of duplicate elemnet in sorted list then that algoritm is called as stable.

Not all algorithm are stable/few are unstable.

*/