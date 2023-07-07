#include <stdio.h>
#include <string.h>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int countAnagrams(char *word) {
    int length = strlen(word);
    int count[26] = {0};
    int i, total = 1;
    
    // Рахуємо кількість кожної букви у слові
    for (i = 0; i < length; i++) {
        count[word[i] - 'a']++;
    }
    
    // Обчислюємо загальну кількість анаграм за формулою 
    for (i = 0; i < 26; i++) {
        if (count[i] > 1) {
            total *= factorial(count[i]);
        }
    }
    
    return factorial(length) / total;
}

int main() {
    char word[15];
    
    // Зчитування вхідного слова
    printf("Введіть слово: ");
    scanf("%s", word);
    
    int anagramCount = countAnagrams(word);
    
    printf("Кількість анаграм: %d\n", anagramCount);
    
    return 0;
}
