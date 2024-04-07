#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort_str(char str[][30], int n)
{
    char temp[30] = {
        '\0',
    };
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {                         // 사전순서대로 되어있지 않으면 두 문자열의 위치를 바꿔준다.
                strcpy(temp, str[i]); // 바꿀 때 임시로 temp에 저장한다.
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
}

int main()
{
    char youndoo[30] = {
        '\0',
    };
    char g37[51][30] = {
        '\0',
    };
    int l1 = 0, l2 = 0, o1 = 0, o2 = 0, v1 = 0, v2 = 0, e1 = 0, e2 = 0;
    int l = 0, o = 0, v = 0, e = 0, len;
    int i, k, j, m;
    int sum = 0, max = 0, maxi = -1;
    char skyline[51][30] = {
        '\0',
    };

    scanf("%s", youndoo);
    len = strlen(youndoo);
    for (i = 0; i < len; i++)
    {
        if (youndoo[i] == 'L')
            l1++;
        else if (youndoo[i] == 'O')
            o1++;
        else if (youndoo[i] == 'V')
            v1++;
        else if (youndoo[i] == 'E')
            e1++;
    }

    scanf("%d", &j);
    for (k = 0; k < j; k++)
    {
        scanf("%s", g37[k]);
    }

    for (m = 0; m < j; m++)
    {
        len = strlen(g37[m]);
        for (i = 0; i < len; i++)
        {
            if (g37[m][i] == 'L')
                l2++;
            else if (g37[m][i] == 'O')
                o2++;
            else if (g37[m][i] == 'V')
                v2++;
            else if (g37[m][i] == 'E')
                e2++;
        }
        l = l1 + l2;
        o = o1 + o2;
        v = v1 + v2;
        e = e1 + e2;
        sum = (((l + o) * (l + v) * (l + e) * (o + v) * (o + e) * (v + e)) % 100);

        l2 = 0;
        o2 = 0;
        v2 = 0;
        e2 = 0;

        if (max < sum)
        {
            max = sum;
            maxi = 0;
            strcpy(skyline[maxi], g37[m]);
        }
        else if (max == sum)
        {
            maxi++;
            strcpy(skyline[maxi], g37[m]);
        }
    }

    sort_str(skyline, maxi + 1);
    printf("%s\n", skyline[0]);

    return 0;
}