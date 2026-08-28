// https://leetcode.com/problems/median-of-two-sorted-arrays/

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int* merged = malloc((nums1Size + nums2Size)* sizeof(int));
    for(int i=0;i<nums1Size;i++)
    {
        merged[i]=nums1[i];
    }
    for(int i=0;i<nums2Size;i++)
    {
        merged[nums1Size+i]=nums2[i];
    }
    int size=nums1Size+nums2Size;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if (merged[j]>merged[j+1])
            {
                int temp=merged[j];
                merged[j]=merged[j+1];
                merged[j+1]=temp;
            }
        }
    }
    double median;
    if(size%2==1)
    {
        median=merged[size/2];
    }
    else
    {
        median=(merged[size/2 -1]+merged[size/2])/2.0;
    }
    return median;
}
