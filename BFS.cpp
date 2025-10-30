/*PROBLEM STATEMENT: 
Web Crawling:
 a) Breadth First Search (BFS):
 Application:Indexing web pages for search engines. Example: A web crawler uses BFS to visit web pages systematically, starting from a seed URL and exploring links level by level. Nodes represent web pages. Edges represent hyperlinks. BFS ensures that pages at the same "depth" (distance from the starting page) are visited before moving to deeper levels. Write a program to simulate the indexing of web pages for a search engine using a Breadth-First Search (BFS) algorithm.
*/

#include <iostream> 
#include <queue> 
using namespace std; 
int main() { 
cout<<"B24CE1081\n"; 
int n; 
cout << "Enter number of web pages: "; 
cin >> n; 
string pages[20]; 
cout << "Enter names of web pages:\n"; 
for (int i = 0; i < n; i++) cin >> pages[i]; 
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
queue<int> q; 
visited[startIndex] = true; 
q.push(startIndex); 
cout << "\nIndexed (Visited) Web Pages in BFS Order:\n"; 
while (!q.empty()) { 
int current = q.front(); 
q.pop(); 
cout << pages[current] << endl; 
for (int i = 0; i < n; i++) { 
if (links[current][i] == 1 && !visited[i]) { 
visited[i] = true; 
q.push(i); 
} 
} 
} 
return 0; 
}
