#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dis_char_count(const char* a)
{
    int len = strlen(a),temp,count = 0;
    int temp_arr[len];
    for (int i=0; i<len;i++)
    {   
        temp = (int) a[i];
        int j = 0;
        while (j<len)
        {
            if (temp == temp_arr[j] && count != j)
                break;
            if (j == count)
            {
                count++;
                temp_arr[count-1] = temp;
                break;
            }
            j++;
        }
    }
    return count;
}

int lexicographic_sort(const char* a, const char* b) //a<b
{
    int i = 0, a_tot = 0, b_tot = 0;
    do {
        if (i<strlen(a))
            a_tot += (int) a[i];
        if (i<strlen(b))
            b_tot += (int) b[i];
        i++;
        int max = (strlen(a)>strlen(b)) ? strlen(a):strlen(b);
        if (i > max)
            break;
    } while (a_tot == b_tot);
    
    return (a_tot<=b_tot) ? 1:0;
}

int lexicographic_sort_reverse(const char* a, const char* b) 
{   
    return (lexicographic_sort(a,b)) ? 0:1;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) 
{
    int result;
    if (dis_char_count(a) < dis_char_count(b))
        result = 1;
    else if (dis_char_count(a) == dis_char_count(b))
        result = lexicographic_sort(a,b);
    else
        result = 0;

    return result;
}

int sort_by_length(const char* a, const char* b) 
{
    int result = (strlen(a) < strlen(b)) ? 1:0;
    if (strlen(a) == strlen(b))
        result = lexicographic_sort(a,b);

    return result;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b))
{
    char* temp;
    for (int n=1; n<len; n++)
    {
       temp = arr[n] ;
       for (int p=n; p>0; p--)
       {
            if (cmp_func(arr[p-1],temp))   //(arr[p-1]<temp)
            {
                arr[p] = temp;
                break;
            }
            arr[p] = arr[p-1];
            if (p==1) 
            { 
                arr[0] = temp;
            }
        }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
