#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H
#include "ScopeTable.h"
#include <bits/stdc++.h>
using namespace std;
ofstream logout("2005095_log.txt");

class SymbolTable {
private:
  ScopeTable *curscopetable;
  int scopecount;
  int n;

public:
  SymbolTable(int n);
  virtual ~SymbolTable();
  void setScopeCount();
  int getScopeCount();
  void EnterScope();
  void ExitScope();
  bool Insert(string name, string type);
  bool Remove(string name);
  SymbolInfo *LookUp(string name);
  void printCurrentScopeTable();
  void printAllScopeTable();
};

#endif // SYMBOLTABLE_H
