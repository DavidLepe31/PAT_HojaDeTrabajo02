#include "Ejercicio03.h"
#include <vector>
vector<string> original;
void Ejercicio03::sortl(string s) {
    int i = 0;
    string num = " ";
    while (i < s.size()) {
        if (!isalpha(s[i])) {
            string s1;
            s1 = s[i];
            original.push_back(num);
            original.push_back(s1);
            i++;
        }
        else {
            num += s[i];
            i++;
        }
    }

}

string Ejercicio03::opera(char ope, string N1, string N2) {
    int op;
    int lop;
    int n1;
    int n2;
    op = int(ope);
    switch (op) {
    case 42:
        n1 = stoi(N1);
        n2 = stoi(N2);
        lop = n1 * n2;
        return to_string(lop);
        break;
    case 43:
        n1 = stoi(N1);
        n2 = stoi(N2);
        lop = n1 + n2;
        return to_string(lop);
        break;
    case 45:
        n1 = stoi(N1);
        n2 = stoi(N2);
        lop = n1 - n2;
        return to_string(lop);
        break;
    case 47:
        n1 = stoi(N1);
        n2 = stoi(N2);
        lop = n1 / n2;
        return to_string(lop);
        break;
    }
    return "";
}

int Ejercicio03::opsearch(vector<string>orig) {
    int i = 0;
    int j = 0;
    string j1;
    string j2;
    bool banse = true;
    string opes = " ";
    opes = "*/+-";
    while (i < opes.size() && banse) {
        j = 0;
        j1 = opes[i];
        while (j < orig.size() && banse) {
            j2 = orig[j];
            if (j1 == j2) {
                banse = false;
            }
            else
            {
                j++;
            }
        }
        i++;
    }
    return j;
}

vector<string> Ejercicio03::operando() {
    vector<string>tmp;
    int x = 0;
    x = opsearch(original);
    int i = 0;
    string tmps;
    string tmps2;
    string tmps3;
    while (i < x) {
        tmps = original[i];
        tmp.push_back(tmps);
        i++;
    }
    string tmps1 = original[x];
    tmps2 = original[i - 1];
    tmps3 = original[i + 2];
    tmps = opera(tmps1[0], tmps2, tmps3);
    tmp.push_back(tmps);
    i = x + 1;
    while (i < original.size()) {
        tmps = original[i];
        tmp.push_back(tmps);
        i++;
    }
    original.clear();
    for (int i = 0; i < tmp.size(); i++) {
        tmps = tmp[i];
        original.push_back(tmps);
    }
    return original;
}

int Ejercicio03::calculate(string s)
{
    vector<string>tmp;
    int x = 0;
    x = opsearch(original);
    int i = 0;
    string tmps;
    string tmps2;
    string tmps3;
    while (i < x) {
        tmps = original[i];
        tmp.push_back(tmps);
        i++;
    }
    string tmps1 = original[x];
    tmps2 = original[i - 1];
    tmps3 = original[i + 2];
    tmps = opera(tmps1[0], tmps2, tmps3);
    tmp.push_back(tmps);
    i = x + 1;
    while (i < original.size()) {
        tmps = original[i];
        tmp.push_back(tmps);
        i++;
    }
    original.clear();
    for (int i = 0; i < tmp.size(); i++) {
        tmps = tmp[i];
        original.push_back(tmps);
    }
    return original;
}
