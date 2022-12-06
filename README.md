# PBL2022: C言語入門

2022.11-12

## 準備

PC[^1] でC言語を使えるようにする
[^1]: Windows 10/11を念頭にしてます

1) PC本体: gcc コンパイラのインストール
   1) 「パス (PATH: 環境変数)を通す」
2) Visual Studio Code (VSCode) をインストールする
   1) 拡張機能追加（C/C++, Code Runner 他）
   2) VSCode内でターミナル設定をする

### 動作チェック(1)

「<u>VSCode のターミナルで gcc が動作する</u>」ができたら準備完了。</br>
 　↑この意味がわからないなら上の手順に戻ってください

## C言語のサンプルプログラム

以下、VSCode内で

- 新規ファイル作成
- 下記を記入

```c:test.c
int main(){
  printf("Hello World");
}
```

### 動作チェック(2)

「サンプルプログラムを実行して、標準出力に `Hello World` が表示された」らOK

[参考書籍](./references.md)
