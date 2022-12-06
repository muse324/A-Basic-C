# PBL2022: C言語入門

2022.11-12

## 準備

### PCでC言語を使えるようにする

Windows 10/11を念頭にしてます

1) PC本体:
   1) [gcc コンパイラのインストール](./setup/setup_gcc.md)
   2) [「パス (PATH: 環境変数)を通す」](./setup/setup_path.md)
2) Visual Studio Code (VSCode)
   1) [ ] VSCodeをインストールする
   2) [ ] 拡張機能追加（C/C++, Code Runner 他）
   3) [ ] VSCode内でターミナル設定をする
3) 動作チェック
   1) [ ] 「<u>VSCode のターミナルで gcc が動作する</u>」ができたら準備完了。</br>
 　↑この意味がわからないなら上の手順に戻ってください

### C言語のサンプルプログラムを書いてみる

- [ ] 1. 新規ファイル作成 → ファイル名 ```test.c```（半角アルファベットで）
  - 保存先はひとまず自由
  - ファイル名に空白文字「 」や全角日本語、記号文字は避けてください
- [ ] 2. サンプルコードを記入

```c:test.c
int main(){
  printf("Hello World");
}
```

- [ ] 3. Run Codeで実行

「標準出力に `Hello World` が表示された」ら準備完了

## C言語を学ぶための参考資料

[references.md](./references.md)
