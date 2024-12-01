#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

#define MAX_SIZE 16

int board[MAX_SIZE][MAX_SIZE];
int solvedBoard[MAX_SIZE][MAX_SIZE]; // 정답을 저장할 배열
int size;
int cursorRow = 0, cursorCol = 0; // 커서 위치
int showSolution = 0;  // 정답 보기 상태를 나타내는 전역 변수, 초기값은 0
int isModified[MAX_SIZE][MAX_SIZE] = { 0 }; // 0으로 초기화

// ANSI 이스케이프 코드 정의
#define BLUE "\033[34m"
#define RED "\033[31m"
#define RESET "\033[0m"

int main() {
    while (1) { // 초기 화면으로 돌아가기 위한 최상위 루프
        printf("해결할 스도쿠 크기를 선택하세요 ~ ! \n[ 1. 4X4 | 2. 9X9 | 3. 16X16 | 4. 종료 ] : ");
        int choice;
        scanf("%d", &choice);

        if (choice == 4) {
            printf("프로그램을 종료합니다.\n");
            break;
        }

        // 기존의 크기 선택과 보드 초기화 코드 유지
        if (choice == 1) {

        }

        else if (choice == 2) {

        }

        else if (choice == 3) {

        }

        else {
            printf("잘못된 선택입니다. 다시 시도하세요.\n");
            continue; // 잘못된 입력일 경우 다시 초기 화면 출력
        }
    }
    return 0;
}