### 題目說明：
- 這是期中考題目的再進化，將期中考第3題的加分題，以`函數`的方式設計。
- 經由標準輸入(stdin)給定兩個參數：`功能選擇`及`n` 
    - 功能選擇 = 0：輸出 1 ~ n 全部整數。 
    - 功能選擇 = 1：輸出 1 ~ n 中的偶數。
    - 功能選擇 = 2：輸出 1 ~ n 中的奇數。
    - 功能選擇 = 3：輸出 1 ~ n 中可被4整除的整數。
- 對應『功能選擇』的函數依序為：`printAll(int)`、`printEven(int)`、`printOdd(int)`、及`printDiv4(int)`。

#### 輸出結果：

```text
PS D:\Workspace\stust-private\cprog-2022s\src\week11\lab03> echo 0 10 | .\main.exe
All     :    1   2   3   4   5   6   7   8   9  10

PS D:\Workspace\stust-private\cprog-2022s\src\week11\lab03> echo 1 10 | .\main.exe
Even    :    2   4   6   8  10

PS D:\Workspace\stust-private\cprog-2022s\src\week11\lab03> echo 2 10 | .\main.exe
Odd     :    1   3   5   7   9

PS D:\Workspace\stust-private\cprog-2022s\src\week11\lab03> echo 3 10 | .\main.exe
Div. 4  :    4   8
```
