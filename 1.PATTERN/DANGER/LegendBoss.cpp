#include <bits/stdc++.h>
#include<algorithm>
    using namespace std;

int main(){
    int set_max = 100;
    int n;
    do {
    cout<<"Enter a number - ";
    cin>>n;

    if(n<0||n>set_max){
        cout<<"Invalid Input"<<endl;
    }
}while(n<=0||n>set_max);
vector<vector<int>> a(n/*rows*/, vector<int>(n/*cols*/,0));
int t = 0, b = n - 1, l = 0, r = n - 1, c = 1;
/*
 1  2  3  4  5
16 17 18 19  6
15 24 25 20  7
14 23 22 21  8
13 12 11 10  9

*/

    while (t <= b && l <= r) {
        for (int j = l; j <= r; j++) a[t][j] = c++;       // top: left -> right
        t++;
        for (int i = t; i <= b; i++) a[i][r] = c++;       // right: top -> bottom
        r--;
        if (t <= b) { for (int j = r; j >= l; j--) a[b][j] = c++; b--; }  // bottom: right -> left
        if (l <= r) { for (int i = b; i >= t; i--) a[i][l] = c++; l++; }  // left: bottom -> top
    }
    for (auto& row : a) {
        for (int x : row) cout << setw(3) << x;
        cout << "\n";
    }
    return 0;
}
    
/*
# Vector with numbers: the spiral, cell by cell

## 1. Creating the grid (n = 4)

```cpp
vector<vector<int>> a(4, vector<int>(4, 0));
```

1. `vector<int>(4, 0)` is one row: `[0][0][0][0]`
2. `a(4, row)` makes 4 copies of that row.
3. `a[row][col]` accesses one cell.

The grid starts full of zeros, and filling means **overwriting** them:

```
0  0  0  0
0  0  0  0
0  0  0  0
0  0  0  0
```

## 2. The variables

| Variable | Meaning | Start (n = 4) |
|---|---|---|
| `t` | top wall (first unfilled row) | 0 |
| `b` | bottom wall (last unfilled row) | 3 |
| `l` | left wall (first unfilled column) | 0 |
| `r` | right wall (last unfilled column) | 3 |
| `c` | next number to place | 1 |

## 3. Ring 1, move by move

**Move 1: top row, left → right** (`a[t][j] = c++`, j = 0..3, with t = 0)

| Cell | Value placed |
|---|---|
| `a[0][0]` | 1 |
| `a[0][1]` | 2 |
| `a[0][2]` | 3 |
| `a[0][3]` | 4 |

Then `t++` gives `t = 1`.

```
1  2  3  4
0  0  0  0
0  0  0  0
0  0  0  0
```

**Move 2: right column, top → bottom** (`a[i][r] = c++`, i = 1..3, with r = 3)

| Cell | Value placed |
|---|---|
| `a[1][3]` | 5 |
| `a[2][3]` | 6 |
| `a[3][3]` | 7 |

Then `r--` gives `r = 2`.

```
1  2  3  4
0  0  0  5
0  0  0  6
0  0  0  7
```

**Move 3: bottom row, right → left** (`a[b][j] = c++`, j = 2..0, with b = 3)

| Cell | Value placed |
|---|---|
| `a[3][2]` | 8 |
| `a[3][1]` | 9 |
| `a[3][0]` | 10 |

Then `b--` gives `b = 2`.

```
1  2  3  4
0  0  0  5
0  0  0  6
10 9  8  7
```

**Move 4: left column, bottom → top** (`a[i][l] = c++`, i = 2..1, with l = 0)

| Cell | Value placed |
|---|---|
| `a[2][0]` | 11 |
| `a[1][0]` | 12 |

Then `l++` gives `l = 1`.

```
1  2  3  4
12 0  0  5
11 0  0  6
10 9  8  7
```

Walls are now `t=1, b=2, l=1, r=2`, and `c = 13`. The unfilled area is a 2×2 square.

## 4. Ring 2, move by move

| Move | Cells written | Walls after |
|---|---|---|
| Top row, j = 1..2 | `a[1][1]=13`, `a[1][2]=14` | `t=2` |
| Right column, i = 2..2 | `a[2][2]=15` | `r=1` |
| Bottom row (`t<=b`: 2<=2, true), j = 1..1 | `a[2][1]=16` | `b=1` |
| Left column (`l<=r`: 1<=1, true), i = 1..2 | Runs zero times, since 1 < 2 | `l=2` |

Now `t=2 > b=1`, so the `while` condition fails and the loop stops.

## 5. Final result (n = 4)

```
 1  2  3  4
12 13 14  5
11 16 15  6
10  9  8  7
```

## 6. Key facts to keep

1. The vector is created with zeros first, and every number is placed by **overwriting** `a[i][j]`.
2. `c++` means "use the current value of `c`, then add 1", which is why the numbers come out as 1, 2, 3, ... in order.
3. Each of the four moves is followed by moving one wall inward, so the next move stays inside the ring.
4. The two `if` checks stop the bottom and left moves from running when nothing is left to fill.
5. `push_back` is not used here. The size is fixed up front, and the code only assigns to existing cells.

I can trace n = 5 the same way, or show `push_back` building a vector one number at a time, if you want.

*/