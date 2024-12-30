#include <iostream>
#include <fstream>

using namespace std;

void execute(string command, string color) {
    ofstream sql("data.db");
    sql << "\n" + command;
}

int main() {
    // input
    string color;
    cout << "Favorite color: ";
    cin >> color;


    // Vue SSR
    ofstream vue("/workspaces/codespaces-blank/SVC/src/App.vue");

    ifstream data("data.db");
    string data2;
    string txt;

    while (getline(data, data2)) {
        txt += data2.replace(0, 26, "") + "\n";
    }
    
    string vuestr1 = "<script setup></script>\n\n<template>\n\t<h1>";
    string vuestr2 = "</h1>\n\t<p>Previous inputs</p>\n\t<p>";
    string vuestr3 = "\t</p>\n</template>";
    vue << vuestr1 + color + vuestr2 + txt + vuestr3;


    // CSS SSR
    ofstream css("/workspaces/codespaces-blank/SVC/src/style.css");
    string cssstr1 = "body {\n\tbackground-color: ";
    string cssstr2 = ";\n}";
    css << cssstr1 + color + cssstr2;


    // SQL
    string command = "INSERT INTO colors VALUES " + color;
    execute(command, color);
}