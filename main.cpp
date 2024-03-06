#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <deque>
using namespace std;
void print(vector<int> B){ //Вывод вектора на экран
    std::vector<int>::iterator iter = B.begin();
    std::vector<int>::iterator iter_2 = B.end();
    while(iter!=iter_2){
        cout << *iter << " ";
        ++iter;
    }
}
void print(deque<int> B){
    std::deque<int>::iterator iter = B.begin();
    std::deque<int>::iterator iter_2 = B.end();
    while(iter!=iter_2){
        cout << *iter << " ";
        ++iter;
    }

}

int main() {
    //1
    cout <<  endl <<  "Task 1" << endl;
    vector<int> A;
    cout << "Enter the values. To end the set, enter stop"<<endl;
    int n = 0;

    while (n == 0) {
        string a;
        cin >> a;
        if (a == "stop"){
            n = 1;
            break;
        }
        else{
            int b = stoi(a);
            A.push_back(b);
        }
    }

    cout << "Vector: ";
    print(A);
    cout<<endl;

    std::vector<int>::iterator iter = A.begin();
    std::vector<int>::iterator iter_2 = A.end();
    int sum = 0;
    int lenght = 0;


    int e = 0;
    while (e == 0){
        sum += *iter;
        lenght++;
        ++iter;
        if (iter == iter_2)
            break;
    }
    cout << "Sum: " << sum << endl;
    cout << "Lenght: " << lenght << endl;




    sort(A.begin(),A.end());
    cout << "Sorted vector: ";
    print(A);
    cout << endl;

    reverse(A.begin(),A.end());
    cout << "Reversed vector: ";
    print(A);
    cout << endl;



    //2
    cout <<  endl <<  "Task 2" << endl;
    vector<int> B = {1,3,4};

    std::back_insert_iterator<std::vector<int>> back_inserter(B); //Вставка в конец
    *back_inserter = 5;
    print(B);
    cout<<endl;

    std::insert_iterator<std::vector<int>> inserter(B, B.begin() + 1); //Вставка в точное место
    *inserter = 2;
    print(B);
    cout<<endl;

    B.erase(B.end()); //Удаление
    print(B);
    cout<<endl;

    deque<int>H={99,100};
    std::front_insert_iterator<std::deque<int>> front_inserter(H); //Вставка в начало
    *front_inserter = 98;
    print(H);
    cout<<endl;


    //3
    cout <<  endl <<  "Task 3" << endl;
    vector<int> C = {10,11,12};

    ofstream test2("file2.txt",ios_base::out);
    if (test2.is_open()){
        std::vector<int>::iterator iter1 = C.begin();
        std::vector<int>::iterator iter2 = C.end();
        while (iter1 != iter2){
            test2 << *iter1 << " ";
            ++iter1;
        }
        test2.close();
    }
    else
        cout << "Error";


    vector<int> D;
    ifstream test1("file1.txt");

    int y;
    while (test1 >> y){
        D.push_back(y);
    }
    test1.close();

    print(D);

    //4
    cout <<  endl <<  "Task 4" << endl;
    std::deque<int> deque;
    std::vector<int> vector = {7,8,9};

    std::vector<int>::iterator vector_iter = vector.begin(); //Копирование из вектора в очередь
    while (vector_iter!=vector.end()){
        deque.push_back(*vector_iter);
        ++vector_iter;
    }
    print(deque);

    //5
    cout <<  endl <<  "Task 5" << endl;

    std::vector<int> E;
    cout << "Enter the values. To end the set, enter stop"<<endl;
    int g = 0;

    while (g == 0) {
        string a;
        cin >> a;
        if (a == "stop"){
            g = 1;
            break;
        }
        else{
            int b = stoi(a);
            E.push_back(b);
        }
    }


    reverse_iterator<std::vector<int>::iterator> iterE = E.rbegin();
    while (iterE!=E.rend()){
        cout << *iterE << " ";
        ++iterE;
    }













    return 0;
}
