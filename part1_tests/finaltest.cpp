//
// Created by Yossi Levi on 12/06/2019.
//
#include <cstdio>
#include <string.h>
#include <fstream>
#include <cstdlib>
#include "test5.cpp"
#include "test10.cpp"
#include "test1.cpp"
#include "test2.cpp"
#include "test3.cpp"
#include "test4.cpp"
#include "test6.cpp"
#include "test7.cpp"
#include "test8.cpp"
#include "test9.cpp"
#include <stdio.h>
int main(){
    TEST1();
    TEST2();
    TEST3();
    TEST4();
    TEST5();
    TEST6();
    TEST7();
    TEST8();
    TEST9();
    TEST10();
    freopen("../finalresults","w",stdout);
    string line1,line2;
    std::ifstream File2;
    std::ifstream File1;
    File1.open("../test1myresult.txt");
    File2.open("../test1result.txt");
    int pass=1;
    while(!File1.eof()||!File2.eof()){
        getline(File1,line1);
        getline(File2,line2);
        if(line1!=line2){
            pass=0;
        }
    }
    File1.close();
    File2.close();
    pass?printf("TEST 1 PASSED\n"):printf("TEST 1 FAILED\n");
    File1.open("../test2myresult.txt");
    File2.open("../test2result.txt");
    pass=1;
    while(!File1.eof()||!File2.eof()){
        getline(File1,line1);
        getline(File2,line2);
        if(line1!=line2){
            pass=0;
        }
    }
    File1.close();
    File2.close();
    pass?printf("TEST 2 PASSED\n"):printf("TEST 2 FAILED\n");
    File1.open("../test3myresult.txt");
    File2.open("../test3result.txt");
    pass=1;
    while(!File1.eof()||!File2.eof()){
        getline(File1,line1);
        getline(File2,line2);
        if(line1!=line2){
            pass=0;
        }
    }
    File1.close();
    File2.close();
    pass?printf("TEST 3 PASSED\n"):printf("TEST 3 FAILED\n");
    File1.open("../test4myresult.txt");
    File2.open("../test4result.txt");
    pass=1;
    while(!File1.eof()||!File2.eof()){
        getline(File1,line1);
        getline(File2,line2);
        if(line1!=line2){
            pass=0;
        }
    }
    File1.close();
    File2.close();
    pass?printf("TEST 4 PASSED\n"):printf("TEST 4 FAILED\n");
    File1.open("../test5myresult.txt");
    File2.open("../test5result.txt");
    pass=1;
    while(!File1.eof()||!File2.eof()){
        getline(File1,line1);
        getline(File2,line2);
        if(line1!=line2){
            pass=0;
        }
    }
    File1.close();
    File2.close();
    pass?printf("TEST 5 PASSED\n"):printf("TEST 5 FAILED\n");
    File1.open("../test6myresult.txt");
    File2.open("../test6result.txt");
    pass=1;
    while(!File1.eof()||!File2.eof()){
        getline(File1,line1);
        getline(File2,line2);
        if(line1!=line2){
            pass=0;
        }
    }
    File1.close();
    File2.close();
    pass?printf("TEST 6 PASSED\n"):printf("TEST 6 FAILED\n");
    File1.open("../test7myresult.txt");
    File2.open("../test7result.txt");
    pass=1;
    while(!File1.eof()||!File2.eof()){
        getline(File1,line1);
        getline(File2,line2);
        if(line1!=line2){
            pass=0;
        }
    }
    File1.close();
    File2.close();
    pass?printf("TEST 7 PASSED\n"):printf("TEST 7 FAILED\n");
    File1.open("../test8myresult.txt");
    File2.open("../test8result.txt");
    pass=1;
    while(!File1.eof()||!File2.eof()){
        getline(File1,line1);
        getline(File2,line2);
        if(line1!=line2){
            pass=0;

        }
    }
    File1.close();
    File2.close();
    pass?printf("TEST 8 PASSED\n"):printf("TEST 8 FAILED\n");
    File1.open("../test9myresult.txt");
    File2.open("../test9result.txt");
    pass=1;
    while(!File1.eof()||!File2.eof()){
        getline(File1,line1);
        getline(File2,line2);
        if(line1!=line2){
            pass=0;
        }
    }
    File1.close();
    File2.close();
    pass?printf("TEST 8 PASSED\n"):printf("TEST 8 FAILED\n");
    File1.open("../test9myresult.txt");
    File2.open("../test9result.txt");
    pass=1;
    while(!File1.eof()||!File2.eof()){
        getline(File1,line1);
        getline(File2,line2);
        if(line1!=line2){
            pass=0;
        }
    }
    File1.close();
    File2.close();
    pass?printf("TEST 9 PASSED\n"):printf("TEST 9 FAILED\n");
    File1.open("../test10myresult.txt");
    File2.open("../test10result.txt");
    pass=1;
    while(!File1.eof()||!File2.eof()){
        getline(File1,line1);
        getline(File2,line2);
        if(line1!=line2){
            pass=0;
        }
    }
    File1.close();
    File2.close();
    pass?printf("TEST 10 PASSED\n"):printf("TEST 10 FAILED\n");
return 0;

}