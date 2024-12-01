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