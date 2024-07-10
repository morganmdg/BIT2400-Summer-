//
// Created by morga on 2024-07-09.
//

#include "PaintJob.h"

//printf("Enter your budget: "); scanf_s("%hu", &iBudget);		// if float, then need to use %f
void PaintJob::userBudget(){
    printf("Enter your budget: ");
    scanf("%hu", &Budget);		// if float, then need to use %f
};
