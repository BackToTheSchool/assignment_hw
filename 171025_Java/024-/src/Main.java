// 024 에너그램 점검
// 두 개의 문자열을 비교하여 서로가 애너그램인지를
// 검사하는 프로그램을 작성하라.
// 프로그램은 두 개의 문자열을 입력 받은 후
// 다음의 출력 예 같이 출력해야 한다.

// Example
// Enter two strings and I'll tell you if they are anagrams:
// Enter the first string: note
// Enter the second string: tone
// "note" and "tone" are anagrams.



import java.util.StringTokenizer;

public class Main {
    public void main(String[] args) {


    }

    int isAnagram(String strA, String strB) {

        int i, c;
        String tmp;
        String str1, str2;
        str1 = strA;			// 여기서 인수를 str1,2로 하고 받게 되면
        str2 = strB;			// 문자열 주소값에 직접 들어가서 수정하므로 복사를 해서 다른 변수를 수정하게 한다.

        c = 0;
        i = str1.length();
        while (c != str1.length()-1) {	// 토큰이 문자열의 길이-1인지 확인 (맞으면 소팅 완료)
            c = 0;						// 소팅이 끝난는지 확인하는 토큰
            for (i = 0; i < str1.length()-1; i++) {	// 문자열 길이만큼 하면 \0도 비교해버리므로 문자열 길이 -1만큼 반복
                if ((str1.substring(i,i+1).compareTo(str1.substring(i+1,i+2)) > 0)) {	// i, i+1번째 문자를 비교해서  i번째가 크면
                    tmp = str1.substring(i,i+1);				// i번째와 i+1번째의 문자 위치를 바꾼다
                    str1.substring(i + 1,i+2) = str1.substring(i,i+1);
                    str1[i] = tmp;
                }
                else
                    c++;							// i+1이 크면 토큰 c를 1 올려준다.
            }										// 소팅이 완료 되었으면, c와 문자열 길이-1이 같으므로 루프를 탈출한다.
        }

        c = 0;
        while (c != strlen(str2)-1) {
            c = 0;
            for (i = 0; i < strlen(str2)-1; i++) {
                if (str2[i] - str2[i + 1] > 0) {
                    tmp = str2[i + 1];
                    str2[i + 1] = str2[i];
                    str2[i] = tmp;
                }
                else
                    c++;
            }
        }


        if (!strcmp(str1, str2))
            return 1;		// 같으면 1 다르면 0을 리턴
        else
            return 0;
    }


}
