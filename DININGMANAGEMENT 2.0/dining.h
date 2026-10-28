#ifndef DINING_H
#define DINING_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define STUDENT_FILE "student_data.dat"
#define MEAL_FILE "meal_data.dat"
#define FOOD_FILE "food_items.dat"
#define BUDGET_FILE "budget_data.dat"
#define MEAL_PASS "meal123"
#define DINING_PASS "dining123"
#define MAX_FOODS 50
#define MAX_MONTHS 12

enum ActivityLevel {
    NOT_ACTIVE,
    MODERATELY_ACTIVE,
    INTENSE_WORKOUT
};

enum BMICategory {
    UNDERWEIGHT,
    NORMAL,
    OVERWEIGHT,
    OBESE
};

struct Student {
    int roll;
    float height;
    float weight;
    enum ActivityLevel activity;
    float bmi;
    enum BMICategory category;
    float tdee;
    float ideal_protein;
    float ideal_carbs;
    float ideal_fat;
    int month;
    int year;
};

struct MealPlan {
    int month;
    int year;
    int student_count;
    float avg_protein;
    float avg_carbs;
    float avg_fat;
    float avg_calories;
    float lunch_protein;
    float lunch_carbs;
    float lunch_fat;
    float dinner_protein;
    float dinner_carbs;
    float dinner_fat;
};

struct FoodItem {
    char name[50];
    float price_per_kg;
    float protein_per_100g;
    float carbs_per_100g;
    float fat_per_100g;
};

struct BudgetRecord {
    int month;
    int year;
    float budget_per_student;
    float avg_bmi;
    float bmi_change_percent;
    int food_count;
    struct FoodItem foods[MAX_FOODS];
    float food_kg_per_day[MAX_FOODS];
};

float calculateBMI(float weight, float height);
enum BMICategory getBMICategory(float bmi);
float calculateTDEE(float weight, float height, enum ActivityLevel activity);
void printBMICategory(enum BMICategory cat);
void printActivityLevel(enum ActivityLevel act);
int loadStudents(struct Student **students);
void saveStudents(struct Student *students, int count);
int loadMealPlans(struct MealPlan **plans);
void saveMealPlans(struct MealPlan *plans, int count);
int loadBudgetRecords(struct BudgetRecord **records);
void saveBudgetRecords(struct BudgetRecord *records, int count);
int findStudentByRoll(struct Student *students, int count, int roll, int month, int year);
void studentSection(void);
void mealManagerSection(void);
void showAllMealRecords(void);
void diningManagerSection(void);
void showAllBudgetRecords(void);

#endif