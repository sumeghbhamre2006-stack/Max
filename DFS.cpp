/*b) Depth First Search (DFS): 
Application: Web crawlers use DFS to explore web pages systematically, following links and 
indexing content for search engines. Write a simple program to index web pages using Depth 
First Search (DFS). The program should simulate a web graph where pages are represented as 
nodes and hyperlinks as edges.*/ 
#include <iostream> 
using namespace std; 
void dfs(int node, int n, int links[20][20], string pages[20], bool visited[20]) { 
visited[node] = true; 
cout << pages[node] << endl; 
for (int i = 0; i < n; i++) { 
if (links[node][i] == 1 && !visited[i]) { 
dfs(i, n, links, pages, visited); 
} 
} 
} 
int main() { 
cout<<"B24CE1081\n"; 
int n; 
cout << "Enter number of web pages: "; 
cin >> n; 
string pages[20]; 
cout << "Enter names of web pages:\n"; 
for (int i = 0; i < n; i++) 
cin >> pages[i]; 
int links[20][20]; 
cout << "Enter link matrix (1 if link exists, 0 otherwise):\n"; 
for (int i = 0; i < n; i++) 
for (int j = 0; j < n; j++) 
cin >> links[i][j]; 
string start; 
cout << "Enter starting page: "; 
cin >> start; 
int startIndex = -1; 
for (int i = 0; i < n; i++) 
if (pages[i] == start) 
startIndex = i; 
if (startIndex == -1) { 
cout << "Starting page not found!" << endl; 
return 0; 
} 
bool visited[20] = {false}; 
cout << "\nIndexed (Visited) Web Pages in DFS Order:\n"; 
dfs(startIndex, n, links, pages, visited); 
return 0; 
} 
