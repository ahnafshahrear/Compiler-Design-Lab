# include <bits/stdc++.h>
using namespace std;

int is_char(char ch) {
    if (ch >= 'A' && ch <= 'Z') return 1;
    if (ch >= 'a' && ch <= 'z') return 1;
    return 0;
}

int is_digit(char ch) {
    if (ch >= '0' && ch <= '9') return 1;
    return 0;
}

int is_vowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        return 1;
    }
    return 0;
}


void count_vowel_and_consonant(string str) {
    int vowel_count = 0; 
    int consonant_count = 0;

    for (int i = 0; i < str.size(); i++) {
        if (is_vowel(str[i])) {
            vowel_count++;
        } 
        if (is_char(str[i]) && !is_vowel(str[i])) {
            consonant_count++;
        }
    }

    cout << "Number of vowels: " << vowel_count << endl;
    cout << "Number of consonants: " << consonant_count << endl;
}


void vowel_and_consonant(string str) {
    char vowels[100], consonants[100];
    int mark_vowel=0, mark_consonanat=0;

    for (int i = 0; i < str.size(); i++) {
        if (is_vowel(str[i])) {
            vowels[mark_vowel++] = str[i];
        } 
        if (is_char(str[i]) && !is_vowel(str[i])) {
            consonants[mark_consonanat++] = str[i];
        }
    }


    cout << "Vowels are in the putting string is: " << vowels << endl;
    cout << "Consonants are in the putting string is: " << consonants << endl;
}

void word_start_with_vowel(string str) {
    
    int i,j,k,l,m,n,in1=0,in2=0;
    char vw[1000],cns[1000];

    for(i=0;str[i];i++){
        if(is_vowel(str[i])){
            while(str[i]!=' '&&str[i]!='\0'){
                vw[in1++] = str[i++];
            }
            i--;
            vw[in1++]  = ' ';
        }
        else if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'){
            while(str[i]!=' '&&str[i]!='\0'){
                cns[in2++] = str[i++];
            }
            i--;
            cns[in2++]  = ' ';
        }
    }
    vw[in1] = '\0';
    cns[in2] = '\0';
    printf("\n\nWords started with vowel : %s\n",vw);
    printf("Words started with consonant : %s\n",cns);
}

int main() {

   // freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    string str = "Munmun is the student of Computer Science & Engineering";
    //string str;
    //getline(cin,str);
    cout << str << endl;

    count_vowel_and_consonant(str);
    vowel_and_consonant(str);
    word_start_with_vowel(str);

    return 0;
}