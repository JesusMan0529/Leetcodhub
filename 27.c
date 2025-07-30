//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//方法一：双指针
int removeElement(int* nums, int val, int size) // nums由数组退化为指针
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		if (nums[i] == val)
		{
			for (j = i + 1; j < size; j++)
			{
				nums[j - 1] = nums[j];
			}
		}
		i--;
		size--;
	}
}

//方法二：双指针
int removeElement(int* nums, int size, int val)
{
	int slow, fast = 0;
	for (fast = 0; fast < size; fast++)
	{
		if (nums[fast] != val)
		{
			nums[slow++] = nums[fast];
		}
	}
	return slow;
}
