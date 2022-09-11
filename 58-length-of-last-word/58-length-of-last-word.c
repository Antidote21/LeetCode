

int lengthOfLastWord(char * s){
    char *ptr = strtok(s, " ");      // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환
    int cnt;
    while (ptr != NULL)               // 자른 문자열이 나오지 않을 때까지 반복
    {
        cnt = strlen(ptr);
        //printf("%s\n", ptr);          // 자른 문자열 출력
        ptr = strtok(NULL, " ");// 다음 문자열을 잘라서 포인터를 반환
       
    }
    return cnt;
}