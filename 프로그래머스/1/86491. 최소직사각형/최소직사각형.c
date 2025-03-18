#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int row = 0;
    int col = 0;

    for (int i = 0; i < sizes_rows; i++) {
        // 큰 값을 row, 작은 값을 col에 저장 (명함을 회전하는 개념)
        int max_side = (sizes[i][0] > sizes[i][1]) ? sizes[i][0] : sizes[i][1];
        int min_side = (sizes[i][0] < sizes[i][1]) ? sizes[i][0] : sizes[i][1];

        // 최대 가로 길이와 최대 세로 길이 갱신
        if (max_side > row) row = max_side;
        if (min_side > col) col = min_side;
    }

    return row * col;
}
