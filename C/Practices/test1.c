int main()
{
    int i, j, min_idx, temp;
    int items[] = {64, 25, 12, 22, 11};
    for (i = 0; i < 5 - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < 5; j++)
        {
            if (items[j] < items[min_idx])
            {
                min_idx = j;
                break;
            }
            temp = items[i];
            items[i] = items[min_idx];
            break;
        }
    }
}