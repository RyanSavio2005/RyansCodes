#include <iostream>
#include <fstream>
class persondata {
private:
    char name[20];
    int roll;
public:
    void getdata() {
        std::cout << "Enter name: ";std::cin>>name;
        std::cout << "Enter roll: ";std::cin>>roll;
    }
    void savekeys(int keyarray[20][2],int i) {
        keyarray[i][0]=roll;
        keyarray[i][1]=i;
    }
    void sortarray(int keyarray[20][2],int n) {
        //sort array
        int temp0,i,temp1;
        for (int j=1;j<n;j++) {
            for (i=0;i<n-j;i++) {
                if (keyarray[i][0]>keyarray[i+1][0]) {
                    temp0=keyarray[i][0];
                    temp1=keyarray[i][1];
                    keyarray[i][0]=keyarray[i+1][0];
                    keyarray[i][1]=keyarray[i+1][1];
                    keyarray[i+1][0]=temp0;
                    keyarray[i+1][1]=temp1;
                }
            }
        }
    }
    void show() {
        std::cout << name << " " << roll;
    }
};
int main() {
    int keyarray[20][2];
    char ch;
    persondata p;
    std::fstream file1, file2;

    file1.open("person1.dat", std::ios::out | std::ios::binary | std::ios::trunc);
    std::cout << "\nEnter the student data\n";
    do {
        p.getdata();
        file1.write((char*)&p, sizeof(p));
        std::cout << "\nDo you want to enter more data? (y/n)\n";
        std::cin >> ch;
    } while (ch != 'n');
    file1.close();

    file1.open("person1.dat", std::ios::in | std::ios::binary);
    int i = 0;
    while (file1.read((char*)&p, sizeof(p))) {
        p.savekeys(keyarray, i);
        i++;
    }
    file1.close();

    p.sortarray(keyarray, i);

    file1.open("person1.dat", std::ios::in | std::ios::binary);
    file2.open("person2.dat", std::ios::out | std::ios::binary | std::ios::trunc);
    for (int j = 0; j < i; j++) {
        file1.seekg(keyarray[j][1] * sizeof(p), std::ios::beg);
        file1.read((char*)&p, sizeof(p));
        file2.write((char*)&p, sizeof(p));
    }
    file1.close();
    file2.close();

    file2.open("person2.dat", std::ios::in | std::ios::binary);
    std::cout << "\nSorted data:\n";
    while (file2.read((char*)&p, sizeof(p))) {
        p.show();
        std::cout << "\n";
    }
    file2.close();

    return 0;
}
