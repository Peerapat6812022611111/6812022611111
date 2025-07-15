#include <stdio.h>

int main() {
    int score = 90.5; 
    printf("Score = %d\n", score);
    return 0;
}

#include <stdio.h>

int main() {
    float score = 90.5;
    printf("Score = %.1f\n", score);  
    return 0;
}
// int ได้นับได้แค่ 90 (ตัด .5 ทิ้ง)
//float ได้ 90.5 ครบตามต้องการ
// ถ้าเลือกผิด ค่าที่ออกก็จะผิดตามไปด้วยหรือError 