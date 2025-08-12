//给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果 target 存在返回下标，否则返回 -1。
#include<stdio.h>

int search(int nums[], int numsSize, int target)
{
	int i = -1;
	int left = 0;
	int right = numsSize - 1;
	int mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (nums[mid] < target)
		{
			left = mid + 1;
		}
		else if (nums[mid] > target)
		{
			right = mid - 1;
		}
		else
		{
			i = mid;
			break;
		}
	}
	return i;
}
