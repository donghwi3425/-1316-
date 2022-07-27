#include <stdio.h>
#include <string.h>

int main( ) {
    int num;
    scanf("%d", &num);

    int group_num = 0;
    for (int i = 0; i < num; i++)
    {
        char word[101];
        scanf("%s", word);
        
        int alphabet[26];
        for (int j = 0; j < 26; j++)
        {
            alphabet[j] = 0;
        }

        int len = strlen(word);
        for (int k = 0; k < len; k++)
        {
            char letter = word[k];
            if (alphabet[letter-'a'] == 0){
                alphabet[letter-'a'] =1;
            }
            else {
                if (word[k-1] != word[k])
                break;
            }

            if (k==len-1) {
                group_num++;
            }
        }
        
        
    }
    printf("%d\n", group_num);
}