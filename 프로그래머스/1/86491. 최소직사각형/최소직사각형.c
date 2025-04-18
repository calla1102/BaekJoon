#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int row = 0;
    int col = 0;

    for (int i = 0; i < sizes_rows; i++) {
        int max = (sizes[i][0] > sizes[i][1]) ? sizes[i][0] : sizes[i][1];
        int min = (sizes[i][0] < sizes[i][1]) ? sizes[i][0] : sizes[i][1];

        if (max > row) row = max;
        if (min > col) col = min;
    }

    return row * col;
}
