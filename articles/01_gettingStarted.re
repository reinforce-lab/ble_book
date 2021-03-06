= Bluetooth Low Energy技術を始める

Bluetooth Low Energy技術は、多種多様なものに使える無線通信技術です。スマートホンのアプリケーションを作り、機器は市販されているもので、新たな活用場面が作れます。市販の教育教材や開発キットで、電気回路やファームウェアを作り、機器を作ることもできます。

プログラミングや電気回路、それに無線通信技術と聞くと、難しそうに聞こえるかもしれません。ですが、整備された教材や豊富な資料があります。この技術は、基礎知識さえあれば、ちょうど日曜大工で鳥の巣箱を作るような感覚で使えるものです。

この章では、Bluetooth Low Energy技術の基本的な仕組みを見ていきます。この技術の特徴と仕組みとを把握すれば、この技術でできること、不向きなこと、そしてできないことが分かるでしょう。次に、小さな電池回路とプログラムを作り、通信で動くものを作ってみます。最後に、ウエアラブル機器を題材にして、アイディア出しから開発までの流れを見ていきます。

?== Bluetooth Low Energy技術の特徴

hoge

=== Bluetooth無線技術とその通信規格

無線通信には、通信相手が必要です。電波でデジタル・データをやりとりするデジタル無線通信技術は、いくつもの技術の組み合わせでできている、複雑なものです。お互いに通信をするための約束事をまとめたものが、無線通信規格です。ちょうど、同じ規格のネジとナットならば、どの会社のどの製品の組み合わせでも使えるように、無線通信規格は通信を成り立たせるかなめです。

2010年に公開された無線通信規格Bluetooth4.0で、Bluetooth無線技術に初めて取り込まれた新たな無線通信技術が、Bluetooth Low Energy技術です。この技術は、それ以前の Bluetooth3.0 までのBluetooth無線技術とは、電波でデジタル・データをやりとりする部分から異なる新しい技術です。

Bluetooth Low Energy技術は、Bluetooth無線技術の一部です。Bluetooth無線技術は、近接無線通信技術として、1999年にその最初の無線通信規格 Bluetooth1.0 が公開されました。その仕様は、通信の高速化などで、Bluetooth2.0、Bluetooth3.0と更新されていきました。

Bluetooth4.0以降のBluetooth無線技術は、Bluetooth3.0以前からあるBluetooth無線技術と、Bluetooth Low Energy技術の、2つの技術を内包しています。この2つを区別するために、Bluetooth無線技術のうち、Bluetooth3.0以前からある技術を、Bluetoothクラシックと呼ぶこともあります。

Bluetooth4.0の登場当初は、少し困ったことが起きました。Bluetooth3.0より以前の機器には、当然ですが、Bluetooth Low Energy技術はありません。Bluetoothクラシックのスマートホンで、Bluetooth Low Energy技術のアクセサリを使おうとしても、使えません。Bluetooth無線技術の青色のロゴマークがついていれば、どの製品でも組み合わせて使えるという、後方互換性で保たれていた安心感が、一部失われたのです。

そこで、2011年に、"Bluetooth SMART READY"と"Bluetooth SMART"という、2つのロゴマークが発表されました。スマートホンのようなBluetoothクラシックとBluetooth Low Energy技術の両方がある製品に"Bluetooth SMART READY"を、アクセサリなどのBluetooth Low Energy技術だけを搭載する製品に"Bluetooth SMART"のロゴマークをつけて、Bluetoothクラシックを区別をしたのです。

この2つのロゴマークは、5年後の2016年に廃止されました。続々と発売されるスマートホンがBluetooth4.0を採用したため、Bluetoothクラシックのスマートホンの割合は急激に減少し、区別する必要がなくなったのです。今では、見た目はBluetooth3.0の頃のロゴマークと同じですが、青みを少し変更した新たなロゴマークが使われています。

Bluetooth4.0が公開されてからも、Bluetooth Low Energy技術は、新たな利用場面を生み出し続けるために更新され続けています。ですが、Bluetooth4.0からは、後方互換性が保たれています。Bluetooth Low Energy技術は、Bluetooth4.0を基本としつつ、通信の高速化や通信距離の長距離化、電波がやってくる方向を検出するための仕組みや、オーディオのための新たな通信方式など、数々の技術が規格の中に盛り込まれて来ました。

このように、Bluetooth Low Energy技術は、更新し続けているので、どの規格でのBluetooth Low Energy技術かで、できること、できないことが異なります。また、今後も新たな技術が盛り込まれて、できることは増えるでしょう。ですから、知識の更新が欠かせません。また、Bluetooth4.0にはなかった技術要素を使う場合は、その技術が使えるのか、スマートホンの機種やオペレーティング・システム、あるいは半導体やソフトウェア開発環境が、その技術に対応しているかを事前に確認します。

=== Bluetooth Low Energy技術の特徴

1つで、あらゆる利用場面に使える万能な通信技術はありません。ですから、利用場面に適した無線通信技術が開発されます。Bluetooth Low Energy技術は、電波が直接届く身の回りにあるものと直接通信をする、低頻度で少量のデータをやり取りする場面に適した技術です。

フィットネス機器は、Bluetooth Low Energy技術がよく使われる分野の1つです。スマートホンと接続して、リアルタイムで心拍数を見られる心拍計が市販されています。人の心拍数はせいぜい毎分200くらいですから、心拍1つごとに心拍数のデータを送信しても、その送信頻度は1秒あたり4回ほどです。そして、データ量にはビットという単位を使いますが、心拍数は9ビットあれば表せます。

Bluetooth Low Energy技術の特徴は、その名前にあるように、超低消費電力の無線通信です。前節の心拍計などによく使われる、直径2センチメートル、厚み3.2ミリメートルのコイン型電池1つで、半年から1年は通信し続けられます。いざ使おうと思ったら電池が切れていては、がっかりですし、さらに電池を買ってきて交換するのは手間です。また、1ヶ月ごとに電池がきれるものが、身の回りに10個あったとしましょう。そうすると、3日ごとに電池交換をすることになります。そのような手間にならないように、超低消費電力は必要です。

Bluetooth Low Energy技術の超低消費電力無線通信は、無線通信回路を使う時間を、可能な限り短くする単純な仕組みで実現されています。通信するタイミングを合わせて、一方が電波を送信するタイミングで、もう一方が受信をします。それ以外の時間は、無線回路を使いません。送りたいデータは、次のタイミングで送信されます。この通信の周期を短くすれば、消費電力は増えます。長くすれば消費電力は小さくなりますが、送りたいデータが実際に通信相手に送られるまでの時間、つまり遅延時間が長くなります。

この通信の周期は、7.5ミリ秒から10秒TBDの広い範囲で設定できます。キーボードやゲーム・コントローラのように、ボタンが押されたら素早くそれを伝えたいものは、ミリ秒単位の周期を使います。室温の温度計のように、温度はそれほど素早く変化しないものでは、秒単位の周期でよいでしょう。通信周期の幅広い設定範囲で、使われ方にあった消費電力と遅延時間の兼ね合いを取ります。

Bluetooth Low Energy技術は、容易に途切れる通信です。この技術で使う2.4ギガヘルツ帯の電波は、様々な無線通信技術や電子レンジも使う賑やかな周波数帯ですから、周囲の電波状況は刻一刻と変わります。どこかの通信タイミングで、受信側で期待した電波が検出できない、送信側で期待した返信がこないと、Bluetooth Low Energy技術では、通信を維持しようと努力せずに、通信は切断します。

ですが、Bluetooth Low Energy技術は、素早く通信を開始できます。通信相手を発見して、通信を素早く開始できます。この技術は、前述の心拍計のように、少量のデータを低頻度で送る場面で使われるので、もしも、ぶつぶつと通信が途切れていても、接続をし直してデータを送りたい時に接続ができていれば、切断していることに気がつかないでしょう。

Bluetooth Low Energy技術には、ジェネリック・アトリビュート基盤(GATT基盤)という、いわばデータベースとその読み書きの仕組みがあります。前節の心拍計などのデバイスは、GATT基盤のデータベースを内蔵している、いわばサーバーです。スマートホンは、無線通信を通じて、そのデータベースを読み書きするのです。

GATT基盤の、値を読み書きする単位をキャラクタリスティクスと言います。前節の心拍計は、製造会社名や製造番号、心拍計が設置されている場所が手首なのか胸なのか、そして心拍数の値が、それぞれキャラクタリスティクスとして読み出せます。

このGATT基盤は、素早く通信を開始する役に立ちます。心拍計に初めて接続した時には、どのようなキャラクタリスティクスがあるのかを読み出し、製造会社や設置位置も読み出すでしょう。ですがキャラクタリスティクスの一覧や製造会社などの値は変化しませんから、2回目以降の接続からは、それらを読み出す必要はありません。接続してすぐに、心拍数を表すキャラクタリスティクスを読み出すだけでよいのです。

GATT基盤は、多種多様なものを自由に作る土台です。デバイスでは、キャラクタリスティクスを勝手に定義できます。スマートホンのアプリケーションは、勝手に定義したキャラクタリスティクスを読み書きできます。

GATT基盤の仕組みは、人の目には見えませんが、デジタル・データで作られた操作パネルだと思えばいいでしょう。家電のリモコンや、車の運転席など、ボタンを押して操作したり、設定値やセンサー値を表示パネルで見たりと、様々な操作パネルがあります。キャラクタリスティクスの読み書きは、ちょうどその操作パネルに触れるのと、同じようなものです。

== Bluetooth Low Energy技術を使ってみる
使い道と利用場面あってこその技術です。まずは、Bluetooth Low Energy技術を、この技術を活用している教育教材 micro:bit で体験してみます。

この micro:bit は、英国放送協会(BBC, British Broadcasting Corporation)が主体となり開発された、マイクロ・コンピュータやセンサーを搭載しているボードです。このデバイスや教育環境は、英国に本部を置くMicro:bit教育財団という非営利団体が運用しています。

iPhoneとmicro:bitを通信で接続して動かしてみます。クイック・スタートが、@<href>{https://microbit.org/ja/guide/ble-ios/, iOSでmicro:bitを使用する - Bluetooth経由の接続}にまとめられています。その手順は:

1. micro:bitの購入と、iOSアプリケーションの入手、
2. "Choose micro:bit"を使用してアプリとmicro:bitをペアリングする、
3. プログラムを書き込み、iPhoneと接続して動作を見る、

の3つです。

まず、micro:bitを入手します。@<href>{https://microbit.org/ja/resellers/, BBC micro:bitとBBC micro:bitアクセサリはどこで購入できるか}に購入先リストがあります。micro:bit本体は、2000円ほどで販売されています。次に、App Storeから、@<href>{https://apps.apple.com/gb/app/micro-bit/id1092687276, micro:bitのiOSアプリケーション} を入手します。

#@# a) アプリのスタート画面
#@# b) ペアリング
#@# c) フラッシュ(コードを書き込む)
#@# d) つないでLEDとボタンの画面が出ているところ
#@# 画面の画像を入れる

アプリケーションとその画面の詳細を、TBDに示します。iOSアプリケーションを起動すると、micro:bitのできることがリスト表示された画面が出ます。micro:bitに、電源をつなぎます。マイクロUSB端子でUSBに接続するか、または電源端子に電池をつなぎます。そして、"Connection"を選択して、micro:bitとiPhoneとをペアリングします。これで、iPhoneとmicro:bitとが、Bluetooth Low Energy技術で通信をし始めます。

ペアリングが完了したならば、iOSアプリケーションの最初の画面に戻り、"Flash"を選択します(TBD)。中央のリストから、"sample: monitor-service"を選択して、その下にある"Flash"ボタンを押します。これで、iPhoneとmicro:bitとが、Bluetooth Low Energy技術で通信しあうプログラムが、micro:bitに書き込まれます。

最後に、"Monitor and Control"を選択します。画面下にある"Start"ボタンを押すと、ペアリングしたmicro:bitに接続します。micro:bitのAボタンやBボタンを押すと、その状態がiPhoneの表示に反映されます。また縦横5マスの四角をそれぞれタッチしてパターンを作ると、同じパターンがmicro:bitのLEDに表示されます。micro:bitには、加速度や磁気センサーなどがあります。画面下にある"Add"ボタンを押して、パネルを追加すると、micro:bitで検出しているセンサーの値をiPhoneの画面に表示できます。

ここまで動かせれば、あとは、新たな組み合わせに挑戦したり、遊び方を工夫したり、自分の思うままに遊びます。何をすればわからないならば、アプリケーション下部にある"Idea"ボタンを押すと、@<href>{https://microbit.org/guide/ble-ios/#activity} に、また日本語では @<href>{https://microbit.org/ja/ideas/,レッスン、プロジェクト、他のアイデア}に、micro:bitを使う様々なアイディアとその作り方が多数掲載されています。また書籍もあります。
#@# https://www.oreilly.co.jp/books/9784873118765/
#@# micro:bitではじめるプログラミング 第2版 
#@# ――親子で学べるプログラミングとエレクトロニクス
#@# スイッチエデュケーション編集部　著 2019年06月 発行 192ページ ISBN978-4-87311-876-5

この動かしてみたは、手順通りに行っただけで、動くに決まっているものと、つまらないものに思えるかもしれません。ですが、これから何かのトラブルに直面した時に、この手順を踏めば動くと確証ができているものは、トラブルの原因を切り分ける強力な味方になります。

例えば、作っていると、昨日は動いていたのに今日は動かなくなることも、よくあることです。そのような場合は、この動かしてみたサンプルを micro:bit に書き込み、iPhoneのアプリケーションと接続して動くかどうかを確認します。もしも動かなければ、micro:bitかiPhoneのどちらかに原因があると考えて、どちらかを誰かから借りたもので置き換えて、また動かしてみます。もしも動くならば、自分のプログラムに原因があるのでしょう。昨日と今日とで、どこか変更した箇所がないかを確認するなどします。

=== Bluetooth Low Energy技術で動かしてみよう

Bluetooth Low Energy技術の特徴を2つだけ挙げるならば、超低消費電力無線通信技術と、GATT基盤プロファイルです。前節でmicro:bitを、その専用iOSアプリと接続して動かしました。次は、micro:bitをBluetooth Low Energy技術で動かしてみます。

手順は: 

1. "nRF Connect"を起動してスキャンをする、
2. micro:bitに接続する、
3. 加速度の値を読み出す、
4. micro:bitにテキストを書き込み表示させる、

の4つです。

Bluetooth Low Energy技術の通信を見るアプリケーションは、いくつかありますが、ここでは、 @<href>{https://apps.apple.com/jp/app/nrf-connect/id1054362403, nRF Connect} を使います。

まず、App Storeから nRF Connect をインストールします。つぎに、前節の手順でサンプル"sample: monitor-service"を書き込み、電源に接続されて動作している micro:bit を用意します。周囲に複数のmicro:bitがあると区別がつけられないので、周りにmicro:bitがない場所を確保するか、あるいは他のmicro:bitから、10から20メートルほど、十分に離れた場所に移動します。

そして、nRF Connectのアプリを起動します (図TBD)。初回起動時に、Bluetoothの使用をアプリに許可するかと尋ねるダイアログが表示されますから、"はい"を選択します。もしも、このダイアログで"いいえ"を選択した時は、設定アプリからnRF ConnectアプリのBluetoothの項目をオンにします。設定アプリのどこに、このアプリの設定項目があるのかを探すのは大変です。設定アプリの画面を下にスワイプすると、画面上部に検索が出てきます。この検索で"nrf"と入力すると、すぐに見つかります。

nRF Connectのアプリ画面の下部には、4つのタブ・ボタンが並んでいます。その一番右端にある"Scanner"をタップします。その画面の右上に"Scan"というボタンがあります。そのボタンを押すと、表示が"Scan"から"Stop Scanning"に切り替わります。これで、アプリがスキャンをして、Bluetooth Low Energy技術で検出されたデバイスの一覧が、アプリ画面に表示されるようになります(図TBD)。

#@# アプリの図
#@# a)デバイスの一覧表示
#@# b)テーブル表示、加速度の部分
#@# c)テーブル表示、テキストのサービスの部分

デバイスの一覧の中から、"BBC micro:bit"を見つけて、"Connect"ボタンを押します。周囲に複数のmicro:bitがある時は、接続したいmicro:bitとiPhoneとをなるべく近づけて、電波強度が最も大きなものを選びます。電波強度は、デバイス名の下にある三角形の右にある、図TBDでいえば"-42 dBm"の部分です。もしも、micro:bitが2つ表示されていて、それぞれの電波強度の表示が -60 dBm と-40 dBm　-40 dBm の方が大きな電波強度です。

Bluetooth Low Energy技術で、micro:bitから加速度の情報を受け取ってみます。"Connect"ボタンを押して通信が接続すると、タイトル "Service" の画面が表示されます。画面をスクロールして"micro:bit Accelerometer Data"とある項目を表示します。丸に1つの下矢印と、丸に3つの下矢印の2つのボタンがありますが、ここでは3つの下矢印のボタンを押します。左の"Value: "に値が表示されて、micro:bitを動かすと、この値も変化して行きます。

次に、iPhoneからmicro:bitに情報を送ってみます。画面をスクロールして、"micro:bit LED Text"とある項目を表示します (図TBD)。丸に1つの上矢印のボタンを押します。書き込む値の入力ダイアログが表示されます。"UTF-8"を選択して、英数字で20文字以下の文字列を適当に入力して、"Write"のボタンを押します。書き込んだ文字列が、micro:bitに流れるように表示されます。

=== 通信とデータ表現の仕組みを見ていこう

汎用のBluetooth Low Energy技術のアプリケーションから、micro:bitが操作できました。このようなことができるのは、Bluetooth Low Energy技術が、データの構造と、そのデータの変化を通信でやり取りする方法とを、規格で決めているからです。

図TBDは、Bluetooth Low Energy技術で通信するiPhoneとmicro:bitと、その内部のアプリケーションの構成を示します。

#@# 図を入れる               (インデックス、タイプ、値)
#@#       通信              +--+     +---+      
#@#  +---+    +----+       +--+     |   |       
#@#  |   | == |    |       +--+     |   |
#@#  +---+    +----+       GATT     +---+  
#@#  iPhone     micro:bit             user app

micro:bitの内部では、Bluetooth Low Energy技術の通信制御ソフトウェアと、私達がブロックを組み立てて作ったソフトウェア(ユーザ・アプリケーション)との、2つのソフトウェアが同時に並行して実行されています。

無線通信は、パケットという単位でデジタル・データをやり取りしています。ですから、素直に無線通信のプログラムを作るならば、無線通信ソフトウェアとユーザ・アプリケーションとの間も、パケットの単位でデジタル・データをやり取りすればよいのです。

ですが、Bluetooth Low Energy技術では、通信制御ソフトウェアが、表のようなデジタル・データを持っています。この表には(インデックス、タイプ、値)の3つの列があります。1行には、インデックスは表の中での行の位置を表す値、タイプは値の種類、そして値そのものが入ります。

この表を見ていくと、前節のnRF Connectのアプリ画面で見た"Service"のタイプの行が見つかります。その"Service"の下の行には、"Characteristics"、キャラクタリスティクスというタイプの行がいくつか並びます。このキャラクタリスティクスは、前節で見た"micro:bit Accelerometer Data"や"micro:bit LED Text"などの、値の読み書きをおこなったものを表しています。つまり、表をうまく使い、サービスとキャラクタリスティクスという、データ構造を表現しています。

iPhoneのアプリケーションから、micro:bitの内部にあるこの表を見ると、私達の感覚で例えれば、操作パネルやリモコンに見えます。サービスは機能を表し、キャラクタリスティクスは、その機能を使うための値の読み書きを表しています。前節では、micro:bitにあるいくつものサービスのうち、加速度を取得するサービスを使い、そのキャラクタリスティクスから加速度の値を読み出しました。また文字列を書き込み、それを表示させました。

#@# GATT基盤プロファイル、TBDも少し説明を足すこと
私達の身の回りにある電化製品には、それぞれにリモコンや操作パネルがありますが、パネルを操作して電化製品を使うのと同じように、Bluetooth Low Energy技術は、この表を活用して、多種多様なものをデジタルデータで表現して、動作や状態などを表現するのです。

micro:bitの内部で動作している、通信制御アプリケーションとユーザ・アプリケーションとのやり取りも、通信制御アプリケーションの内部にある表を媒介にしたものになります。例えば、外部から加速度サービスの読み出しが有効かされれば、ユーザ・アプリケーションが一定周期ごとに加速度データを読み出し、その値を表の加速度データの行の値に書き込みます。通信制御アプリケーションは、行の値が書き込まれるたびに、それをiPhoneへと伝えます。

つまり、Bluetooth Low Energy技術は、表形式のデータベースがあり、通信を通じてデータベースを最新の状態に同期し続ける仕組みと言えます。

#@# === 限界を探ってみよう
#@# TBD 通信速度、距離、などの限界を示しておく? 消費電力、拡張の限界(I2Cとか)

=== さらに発展をしていこう

ここまでの体験で、スマートホンと小さなデバイスとをBluetooth Low Energy技術で連携させました。これは、ただ電源を入れて動かしたのではなく、ソースコードを書きそれを転送して、挙動を作り出したのです。

この体験をスタートにして、多種多様な利用場面を生み出していけます。LEDを点灯した体験は、LEDをモータとそれを動かす電気回路に置き換えれば、それはiPhoneから操作するラジコンカーやロボットという体験になります。センサーやハードウェアの種類とその使い方、TBDなど実践的なレシピが参考になります。

ここで、ソフトウェア環境を少し深掘りしてみます。今世紀は、インターネットの普及が様々なものを大きく変化させてきました。現代のソフトウェア開発環境は、一言で言えば、プロフェッショナルとの境界がなくなったと言えます。

スマートホンは、数多くの優れたアプリケーションがなければ、ただの板にすぎません。Bluetooth Low Energy技術の集積回路も、多種多様なものに組み込んでいこうという人達がいなければ、売れません。より多くの人達を開発に呼び込むことが、誰にとっても利益となります。そのため、商業開発で用いられているものと同じ開発環境や情報が、個人でも無償で手に入ります。

#@# 商業開発と、地続きであること。これは、教育だけど、教育だけで閉じる知識ではなく、一般的で実践的な知識と経験だということ。


==== iOSとmacOSのアプリケーションを作る

macOSやiOSで実行できるネイティブ・アプリケーションの統合開発環境は、@<href>{https://apps.apple.com/jp/app/xcode/id497799835, Xcode}です。Xcodeは、Apple社のmacOSを搭載するMacで動作し、アプリストアから無償で入手できます。プログラミング言語は、Apple社が開発した@<href>{https://www.apple.com/jp/swift/,Swift}です。

Xcodeを試すと、言語やソフトウェアの使い方を覚える必要があり、micro:codeで体験したように、開発画面を開いて、コードを書いてすぐに動かせたらいいのに、と思うかもしれません。Apple社は、Swiftを対話的に楽しく学べるアプリケーション @<href>{https://www.apple.com/jp/swift/playgrounds/, Swift Playgrounds} を提供しています。macOS向けの@<href>{https://apps.apple.com/jp/app/swift-playgrounds/id1496833156, Swift Playgrounds}と、iPad向けの@<href>{https://apps.apple.com/jp/app/swift-playgrounds/id908519492,Swift Playgrounds}が、いずれも無償で提供されています。残念ながら、iPhone向けのSwift Playgroundsはありません。

Swift Playgroundsにある教材は、そのまま動くアプリケーションでもあります。micro:bitの公式サイトから、Swift Playgroundsからmicro:bitを操る教材 @<href>{https://microbit.org/guide/swift-playgrounds/, Swift playgrounds for the micro:bit} が提供されています。micro:bit以外にも、Bluetooth Low Energy技術を活用するドローンやロボットとの連携が用意されています。Swift Playgroundsは、例えばグラフ表示などアプリケーションに欲しい機能がいくつも用意されていますから、アプリケーションを作ることに集中できます。

Swift Playgroundsのドキュメント @<href>{https://developer.apple.com/documentation/swift_playgrounds} から、さらに使いこなすヒントが得られます。Bluetooth Low Energy技術を使う詳細は、@<href>{https://developer.apple.com/documentation/playgroundbluetooth, Framework PlaygroundBluetooth} にあります。これを見ると、Xcodeで開発すると自分で作らなくてはならないデバイスとの接続のユーザ・インタフェースなどを補いつつ、Xcodeでの開発と変わりない高い自由度があります。

Swift Playgrounds は、playground booksという形式で、ローカルあるいはネットで公開できます。Playground booksの作り方は、ここに@<href>{https://developer.apple.com/documentation/swift_playgrounds/creating_and_running_a_playground_book, Creating and Running a Playground Book}、またその配布や購読方法は、ここに@<href>{https://developer.apple.com/documentation/swift_playgrounds/publishing_a_subscription, Publishing a Subscription} 解説があります。

Apple社が提供する以外の開発環境もあります。@<href>{https://apps.apple.com/us/app/pythonista-3/id1085978097, Pythonista 3}は、プログラミング教育で広く使われるプログラミング言語 Python で、アプリケーション開発ができるiOSアプリケーションです。Microsoft社が提供する@<href>{https://docs.microsoft.com/ja-jp/xamarin/, Xamarin}は、プログラミング言語 C# で、iOSまたAndroidのネイティブ・アプリケーションが開発できます。プログラミング言語 JavaScript でネイティブ・アプリケーションを開発する @<href>{https://ionicframework.com/docs/native, Ionic Native} などもあります。

#@# ウェブ・ブラウザからBluetooth Low Energy技術を扱う仕様 @<href>{https://webbluetoothcg.github.io/web-bluetooth/, Web Bluetooth} があります。この Web Bluetooth API は、Apple社が提供するウェブ・ブラウザ Safari はサポートしていません。is available in Chrome OS, Chrome for Android M, Mac (Chrome 56) and Windows 10 (Chrome 70). This, https://platform-status.mozilla.org/#web-bluetooth

==== マイクロコントローラのアプリケーションを作る

動かす体験で、micro:bitに転送したアプリケーションは、micro:bitに使われているNordic Semi.社のマイクロ・コントローラ nRF51822で実行されます。micro:bitのアプリケーション開発は、このマイクロ・コントローラのアプリケーション開発なのです。

ブロックを組み立てて実行した、micro:bitで使われている開発環境は、魅力的なコンピュータ・サイエンス学習体験を作り出すために、Microsoft社が開発した MakeCode です @<href>{https://www.microsoft.com/ja-jp/makecode/about, Microsoft MakeCode とは?}。ブロックを配置したり、テキストでコードを書く環境は、ブラウザで動作する@<href>{https://github.com/microsoft/pxt, PXT - Programming eXperience Toolkit}というツールで、オープンソースで公開されています。

せっかくですから、このPXTの解説やソースコードをざっと見てみます。PXTは、TypeScriptというプログラミング言語を、マイクロ・コントローラのプログラミングに使えるように制約を加えたプログラミング言語を使っています @<href>{https://makecode.com/language, Static TypeScript is a subset of TypeScript.}。

micro:bitのアプリケーションの内部構成は、@<href>{https://tech.microbit.org/software/runtime-mbed/, The micro:bit runtime and mbed programming}で詳しく解説されています。micro:bitにはLEDなどのいくつものハードウェアが内部にあります。それらをアプリケーションから扱いやすく抽象化するライブラリは、Lancaster大学がプログラミング言語にC言語およびC++で開発しています。アプリケーションに必要なスレッドなどの基本的な機能は、Arm社がオープンソースで提供する@<href>{https://github.com/ARMmbed/mbed-os, mbed-os} が使われています。アプリケーションを構成しているこれらの1つ1つは、いずれもが商業開発にも用いられるもので、教育用であっても、その開発はプロフェッショナルが行っているそれと地続きなのです。

一般によく使われるマイクロ・コントローラ向けの統合開発環境は、Arm社の@<href>{http://www.keil.com, Arm® Keil Microcontroller Tools}、IAR社の@<href>{https://www.iar.com/jp/iar-embedded-workbench/, IAR Embedded Workbench}、あるいはSegger社の@<href>{https://www.segger.com/products/development-tools/embedded-studio/, Embedded Studio — A Complete All-In-One Solution}などが有名です。

これらの統合開発環境は、有償のソフトウェアです。まず統合開発環境を購入し、その後は年ごとに保守料金を支払います。目安として、1ライセンスあたり年間20万円ほどかかります。統合開発環境がどのようなものか試せるように、作れるアプリケーションの大きさなどが制約された評価版が無償で配布されていますから、どのようなものかを体験したいなら評価版を使ってみてください。

これら3つの統合開発環境のうち、Embedded Studioは、Nordic Semi.社が自社のマイクロ・コントローラのアプリケーション開発のライセンスを一括して契約しています。自社のマイクロ・コントローラをより広く利用し、採用してもらうための努力なのでしょう。ですから、nRF51およびnRF52シリーズのアプリケーション開発は、商業開発でもEmbedded Studioが無償で使えます。


#@# インターネット、各国の代理店、問い合わせ、技術資料、疑問、マイクロ・コントローラのアプリケーション開発は、開発者向けのフォーラム @<href>{https://devzone.nordicsemi.com, Nordic DevZone}

#@# マイクロ・コントローラにアプリケーションを書き込んだり、デバッグするために、パーソナル・コンピュータで動く統合開発環境と、マイクロ・コントローラとの間をつなぐものが必要になります。デバッグ・プローブと呼びます。micro:bitには、USBでつながるArm社がオープンソースで提供する@<href>{https://armmbed.github.io/DAPLink/, DAPLink}が使われています。

#@# デバッグ・プローブを開発販売するSeggerという会社が、micro:bitで学習利用に限り使える、DAPLinkをJ-Linkに書き換えるアップデート・ソフトウェアを提供してます @<href>{https://www.segger.com/products/debug-probes/j-link/models/other-j-links/bbc-microbit-j-link-upgrade/, Upgrading the BBC micro:bit DAPLink to J-Link}。初めて使った道具は、その使い方を習熟するほど、他に乗り換えにくくなります。無償で公開して、学習でまず使ってもらうことで、将来の顧客が増える目論見なのでしょう。

== Bluetooth Low Energy技術との関わり方

無線通信技術を詳しく見ていく前に、自分とのBluetooth Low Energy技術との関わり方を、はっきりさせていきます。関わり方ががわかれば、無線通信規格は部品として使うだけで内部を理解する必要はないのか、あるいはとても詳しく理解する必要があるのかがわかります。そして、個人や学習あるいは事業や業務、それぞれの視点から見える、動機と目的そして目的までの道のりの3つを見てみましょう。

=== 関わり方をはっきりさせよう

まず、ペンと紙を用意して、場所と目的や結果そして動機と、3つの項目を横に書き並べて表を作ります。そして、自分が望むBluetooth Low Enegy技術を活用している場面を思い浮かべてください。

この活用している場面を思い浮かべながら、数分ほどで先ほどの表に書き入れていきます。場所の項目には、自分が何かを作っている場所や活用している場所を書きます。目的や結果の項目には、完成させたものや活用している何かや手に入れた何かなどを、思いつくままに書き並べていきます。最後に、動機の項目に、自分がどのような気持ちや望みで作ったり活用しているのか、自分をかき立てるものを書き並べます。

この表は、自分を自分で客観的に見つめるためのもので、誰かに見せたりするものではありません。自分にわかりさえすれば良いので、どのような書き方をしてもよいものです。文章でなくても、絵を描くのもよいでしょう。何も思い浮かばない、わからないならば、これは時間をかけてよりよい結果が出てくるものではありませんから、悩むことに時間を使わずに、わからないとだけ書いておきます。あるいは、そのわからなさから感じるモヤモヤした感じを、ぐちゃぐちゃとした線の塊で表現しておくのもいいでしょう。

#@# 場所         目的や結果                                        動機　　
#@#----------------------------------------------------------------------------
#@# 自宅    　何かを作る。スマホから動く何か(ラジコンカー)         　　趣味     
#@# 学校      スキル、学習。                                   　好奇心
#@# 会社      自社製品にスマホ連携機能を入れる。　　　　　　　　　　　　仕事だから
#@# 駅や空港   新規製品(落し物検出、スマートロック、カーテン開け閉め)。   健康、安全、見守り
#@#          100億円の売り上げ、

数分もあれば、表1のような表ができます。具体的な項目は人それぞれに大きく異なるでしょう。この表には、自分とBluetooth Low Energy技術との関わり様が現れます。

場所の項目には、作っている場所を思い浮かべていれば自宅や学校あるいは会社が、活用している場所であれば、生活の場としての自宅や人が活動したり集まる場所としての学校や会社あるいは駅や空港が並ぶかもしれません。目的や結果の項目は、まさに多種多様でしょう。例えば、スマートホンから操作するラジコンカーのような具体的なものがあるかもしれません。あるいは、プログラミング学習や、プログラムを作り動かす技能の習得があるかもしれません。形があるものではなく、これまでにない新たなサービスや事業のような、大きな目的があるかもしれません。

個人であれば、作り活用する場所は自宅です。結果にはスマートホンから操作するラジコンカーの様な具体的なものがあるでしょう。その動機は、何かを作りたいという好奇心や趣味です。

これが場所が学校であれば、作る何かは個人と同じ様な形ある何かを、教材を使い作り動かします。ですが、その目的は作ることを通じてプログラミングを学習し技能を習得することであり、またその学習と習得が動機でもあります。

会社であれば、まず事業計画を作りお金を集めて、人を集めて組織化して会社として立ち上げたり、あるいは企画書を作るところから始まり、社内で予算や権限を得て人を集めてチームを作ります。その動機は、製品や事業から十分な利潤を得ることです。

また会社で組織の一員として、事業のうち技術に関わる部分の担当になるかもしれません。検討段階で実験をするために試作品を作ったり、あるいは量産するための製品の設計を担当するかもしれません。その動機は、組織の中での役割を果たすことです。

さて、Bluetooth Low Energy技術と自分との関わりを明らかにしたところで、次は、代表的な関わり方を詳しく見ていきます。

=== 個人

Bluetooth Low Energy技術に個人が興味を持つことは、まずないでしょう。この技術が使われる場面を見て、それを自分でも作ってみたい使ってみたいと思い、そこにこの技術が使われているとは気づかずに使う場面がほとんどではないでしょうか。おそらく、個人が関わるのは、プログラミンング教育や好奇心あるいは趣味への活用でしょう。

Bluetooth Low Energy技術は、プログラミング教育教材や、ラピッド・プロトタイピング向けの電子回路に活用されています。ボタンや傾きの入力と音や光あるいはモータの動きを出力する小さな電子回路があります。この電子回路のプログラムは、パーソナル・コンピュータやスマートホンで組み立てて、Bluetooth Low Energy技術で転送して書き込めます。電子回路単体で動かすこともできますし、スマートホンと無線通信で連携させることもできます。

Bluetooth Low Energy技術は、スマートホンと小さな電子回路とが直接電波をやり取りする近接無線通信技術です。周囲にある他のスマートホンや小さな電子回路が、通信を中継することはありません。電波が届く距離は理想的な条件でも100メートルが限界ですから、個人の利用場面は、スマートホンの画面と、目の届く範囲で動く何かとの組み合わせになります。

#@#組み合わせは3つ。本体のみ。本体-スマホ。スマホ-本体。
#@# プロファイルその1。本体のみ。電子回路の中のプログラムで完結する何か。
小さな電子回路にプログラムを転送して、それ単体で動かす場面はいくつかあります。スイッチと小さな表示器で動くゲームは、パソコンやスマートホンに比べるまでもない小さな表示器ですが、小さな電子回路で動く小さなゲームは、それは独特の楽しさがあります。内蔵するセンサーで外界からの刺激に反応して動く、ものも作れます。加速度に反応して表示を変化させれば、それを手に持って大きく振ると残像で大きな表示が見えます。さらに加速度センサとモータとを組み合わせて、倒れないようにバランスを自分で調整する倒立振子というロボットも作れます。

#@# プロファイルその2。小さな電子回路からスマートホンへの流れ。操作系。ゲーム入力とか。
小さな電子回路とスマートホンとのやり取りが生み出す振る舞いも作れます。電子回路からスマートホンへの一方向の情報の流れなら、加速度情報をスマートホンに伝える仕組みとボクシングゲームの教材とを組み合わせれば、実際の手の動きで遊ぶボクシングゲームが作れます。スマートホンから電子回路への一方向の情報の流れなら、画面に表示されたコントローラの情報と小さな電子回路につながるモータの出力制御とを組み合わせれば、スマートホンから操るラジオ・コントロール・カーが作れます。

#@# 同じハードウェアなのに。プロファイルは、利用場面の定義次第。要素の組み合わせ。振る舞いはプログラム。
加速度センサーというハードウェアでも、加速度と表示器とを連携させれば残像を利用した表示装置にしたり、スマートホンのゲームと連携する操作装置、あるいは倒立振子というロボットなど、同じハードウェアでも、振る舞いを生み出すソフトウェアにより、様々な装置になります。また、これを情報の流れとしてみれば、センサから取得した加速度の情報を、表示器に反映したり、スマートホンに伝えたり、あるいは制御プログラムを通じてモータの出力値にしています。装置の振る舞いは、情報の流れでもあるのです。

#@# 教育も同じ。結論を決めて、そこに至る道、道をさらに分割して、理解可能な要素にまで落とし込む。
このような、パーソナルコンピュータやスマートホンだけはない、私達の世界に広がるプログラミング教育教材は、大げさに言えばプログラムで世界を変える体験です。映画のように、杖を振るだけで目の前の食材がたちどころに料理に変わりはしませんが、ロボット・アームを揃えてプログラムを開発すれば同じことは実現できると疑いなく思えるでしょう。

教材や誰かの作品を見て作りたいと思い、手順通りに組み立てても、動かないかもしれません。例題は動くのですから、自分の組み立てたものが、何かがうまくないのでしょう。まず全体の構成を見て、要素に分けます。要素ごとに動くかを確かめて、そして要素と要素とがちゃんと繋がっていくかを1つ1つ確かめていきます。問対の把握と、それを理解できる小さな領域に分割して1つ1つ確かめる原因調査は、解決方法のよい教育になります。

この体験は、作りたいものを思いついた時にも役立つものです。作りたいものを実現したらどうなるかを考え、それを十分小さな要素に分解して、1つ1つの要素を作り組み立てていきます。例えばボクシングゲームを思いついたとします。小さな電子回路では、加速度を取得する方法、デジタル・データをスマートホンに伝える方法の2つの要素があります。あとは、ボクシングゲームにその情報を渡す方法を調べればよいのです。

=== 開発者

個人では、動機や目的あるいは手を動かすのも、自分のものでした。開発者は、誰かが望むものを誰かの依頼を受けて完成させます。また開発は、周辺機器やアプリケーション、あるいは電子回路やソフトウェアと、それぞれの領域をそれぞれの開発者で分業して、複数の開発者で構成したチームで進めます。

開発者の目的は、開発業務への従事や開発成果物の納品で、金銭などの利益を得ることです。開発者に支払われる報酬は、起業であれば資本金から、すでに事業化していればサービスや製品の売り上げから支払われますから、開発者はサービスや製品と常に関わることになります。設計して製造されたものは、世界のどこかで会ったこともない数多くの人達に長い期間使われて、そして最後には破棄されて寿命を終えます。開発者の責任は、設計すれば終わりではなく、それが十分に使われて破棄されるまでです。

開発者チームのなかに、Bluetooth Low Energy技術それ自体の専門家がいることは、あまりありません。どの開発者も、それぞれの担当領域のなかに、Bluetooth Low Energy技術を部品として使いこなす部分が少し入ってきます。周辺機器の担当ならば、無線通信回路やファームウェアへの通信制御の実装として、Bluetooth Low Energy技術に関わります。スマートホンのアプリケーションが担当ならば、仕様書に記載された通りに、機器の発見と読み書きの機能を呼び出すだけでしょう。

また、たいていのサービスや製品では、開発全体でBluetooth Low Energy技術に費やす時間は、とても小さなものです。これは、無線通信技術それ自体を開発するのではなく、無線通信というものを部品として利用するだけだからです。WiFi接続設定や製品の初期設定など、製品を使い始める時に1回だけしか使わない製品も多いでしょう。

#@# プロファイルは誰が作る。みんな? ブレインストーミング。製品開発、アイディア。新規。すでにある。
最初のアイディアは、どこで出てくるのでしょうか。個人のように好奇心がきっかけになることはあっても、大きなお金や費用が動くサービスや製品の開発が、好奇心だけで動いたりはしません。電化製品の製造販売の会社で、経営方針として、これからはスマートホンと連携させると決まるかもしれません。あるいは製品企画で、目新しさとしてスマートホンとの連携だと提案が持ち上がるのかもしれません。もしかすると、近づくだけでスマートホンのアプリケーションが反応するらしいから、それならこんなサービスができないかと、あやふやな見聞から、閃いてしまうのかもしれません。

#@# アイディアから、試作そして製品開発へ。
アイディア出しからプロトタイピング、製品開発そして製造販売へと段階が進みます。段階が1つ進むごとに、費用や時間の規模は10倍あるいは100倍と桁上がりで大きくなります。また、アイディアとしてよいと思えても、実際に体験してみると思ったものと異なったり、あるいは技術要素が思った振る舞いをしないかもしれません。ですから、プロトタイピングなどの手法を用いて、アイディアを検証します。

#@# プロトタイピングまで開発者がいないことはよくある。そこに開発者として参加するならその役割は
アイディアを出してプロトタイピングをして、予算権限や出資者の合意を得て初めて、開発者を集める予算や資金が確保できます。そのため、アイディア出しとプロトタイピングに開発者がいないことも、よくあるでしょう。アイディア出しとプロトタイピングで、開発者として参加する時に求められるのは、設計や開発ではありません。技術知識を背景にした1つの視点からの提案や意見、また体験としての実現可能性の判断などです。

#@# 必ずしも作ることとは限らない。
プロトタイピングといっても、必ずしも電子回路やソフトウェアを作るとは限りません。そのアイディアが実現した場面を紙芝居にして、色々な人に見てもらい感想を集めるかもしれません。あるいは人が黒子になったり、あるいはごっこ遊びの形で、アイディアを再現して体験してもいいでしょう。その場面を動画に記録して観察するかもしれません。

#@# 技術の振る舞いと、実際の予想の不一致は、技術の方に部があるから、プロトタイピングは重要。
プロトタイピングの段階で、開発者がいなくても教育用教材やプロトタイピング向けの書籍や電子回路を活用するなどして、ほんの1部の機能でよいので、実際に動く電子回路やソフトウェアを作り体験を確認します。アイディアを出すときに想定していた技術の振る舞いが、実際には想定とは振る舞いが異なり、そのままのアイディアは実現はできないことがよくあります。プロトタイピングは、早い段階で実現可能性を確認することで時間と費用の節約になります。
#@# 事業的の視点

#@# 技術のちょっとした聞き間違いが、大変なことになる。作れるものしか作れないということ。
例えば、Bluetooth Low Energy技術が無線通信し続ける技術だと聞いて、無線通信の接続と切断を、忘れ物や落し物を防止する小さなタグに利用するとします。このアイディアをそのまま実装すると、忘れ物や落し物の警告が頻繁に出てきて、とても普段使いできるものではなくなります。これは、Bluetooth Low Energy技術の無線接続は、雑音や周囲の電波状況などで、簡単に切断するものだからです。では無線通信し続ける振る舞いとはなんなのだといえば、簡単に切断しますが、またすぐに接続し直すから、見た目には無線通信が維持されます。これは、ヘッドホンのように音声や音楽のデジタル・データが常に流れ続ける用途では不適切な振る舞いですが、Bluetooth Low Energy技術は、低頻度で少量��デジタル・データを伝える技術なので、この振る舞いで、見た目では無線通信が維持されるのです。

#@# 製品化では開発者を集める。
プロトタイピングをうけて、試作そして量産を前提とした設計に進みます。ここで開発者のチームを組み、分担を決めて作業を進めていきます。試作では、実際に筐体と電子回路を開発して、スマートホンのアプリケーションと合わせて基本的な機能を確認していきます。この時点で、スマートホンとの連携動作の確認も取ります。試作の次は、量産を前提とした製品の設計に進みます。筐体の機構設計や電子回路そしてソフトウェアの開発はもちろん、一般的な製品開発、安全性検証から説明書の作成、また製造ラインを作り販売国での電波法の認証取得、そしてBluetooth SIGへの製品登録やサポート・マニュアルの作成と、項目は多岐に渡ります。

=== 事業化

私達の身の回りにある、ものやサービスは、様々な会社が営む事業により提供されています。事業は、営利を目的として営む経済活動です。経済活動に必要な様々なものや多様な人そして大きなお金などの資源を管理して、金銭的な利益を目的として活動する組織が会社です。事業のこの技術との関わり方は、この技術そのものが事業となるもの、事業に役立てるもの、そして事業の新たな可能性とするものの、3つがあります。

#@# BLEそのものが事業な、動機と目的そして目的までの道のりの3つ
Bluetooth Low Energy技術そのものが、いくつもの事業により支えられています。Bluetooth無線技術の規格を作り、特許や商法を管理する団体 Bluetooth SIG は、会費や製品登録料を収入源としています。Bluetooth Low Energy技術に欠かせない、半導体や電子部品、あるいはプロトコル・スタックや開発環境などのソフトウェアを設計製造する会社もいくつもあります。

Bluetooth Low Energy技術を支える事業は、売り上げの増加のために、この技術が用いられる分野をさらに広げようとします。また、それぞれの分野で、この技術を採用する製品数を増やして、この技術をその分野で最も使われる無線通信技術にしようとします。Bluetooth Low Energy技術が、これまでに無線通信技術が使われてこなかった分野に向けて開発されているのは、この事業の求めに答えています。無線通信技術を採用しようとする分野を、規格や技術で制約しないように、多種多様なものを表現する柔軟な能力を持たせています。製品への採用で部品価格は常に注目される要素ですから、部品価格が安価になるように、規格で工夫されています。

Bluetooth無線技術は、囲い込まれた技術ではありません。規格を提供する団体 Bluetooth SIGに参加することで、この技術を担う半導体やソフトウェアを開発販売できます。また次世代の規格開発に参加することすらできます。たいていは、売り上げを増やし市場での自社製品の比率を高めるのに、権利化された自社のみが提供できる技術は、大きな強みです。ですが、無線通信には通信相手が必要です。お互いに通信しあう多種多様な製品群を生み出すためには、無線通信技術を囲い込んではならないのです。

Bluetooth Low Energy技術を支える事業は、この技術を使いやすくすることで競争をしています。無線通信の半導体では、年間ライセンス料金が数十万円する組み込み機器の開発者向けの統合開発環境を自社製品のソフトウェア開発向けに無償提供をしたり、誰でもが参加できる開発情報のフォーラムを解説して開発の質問に直接答えるなど、開発を容易にしています。

#@# 事業に役立てるもの。動機と目的そして目的までの道のりの3つ
Bluetooth Low Energy技術は、つい最近登場した新しい技術です。世の中のほとんどの事業は、この技術が登場する以前からあるのですから、世の中のほとんどの事業は、この技術がなくても成り立ちます。それでも事業がこの技術を活用するのは、経費をより小さくできるか、売り上げを大きくできるかの、いずれかの場合です。

事業所に導入する入退室管理用の鍵システムが、たまたまBluetooth Low Energy技術を活用しているかもしれません。機密情報がある場所には権限がある人しか入れないようにするのに、通常の鍵で運用すると、紛失対応が必要になったり、あるいは鍵の複製を作られたり第3者にこっそり渡される可能性への対処も必要です。高度な生体認証機能があるスマートホンを鍵にして、そのような手間を削減しているかもしれません。

また鍵の製造販売の会社ならば、製品にBluetooth Low Energy技術を取り入れて、売り上げを伸ばせるかもしれません。スマートホンが使える目新しい製品として、新しいものを好むところに売れるかもしれません。入退室の権限設定と入退室のリアルタイムな記録システムもあれば、運用経費を削減したい事業所が購入するかもしれません。

#@# アプセサリ的な、事業変化の、動機、目的、そして目的までの道のあり。
新技術の登場と普及で、それまで困難であったり不可能なことが可能になることがあります。Bluetooth Low Energy技術は、すでに広く普及しているスマートホンと私達の世界との間にある1メートルの空間を飛び越える強力な技術ですから、事業と組み合わせれば、その活用は無数にあるでしょう。

ですが、新技術が登場しても私達の生活が一晩で変わることはありません。考え方や生活習慣は、それほどすぐには変化しないからです。新技術を活用した何かが登場しても、それを使うのは目新しいものを好むごく一部の人達だけです。ですが、ある時期を境にして、その何かがあることが当然かのように、急激な普及と変化が起きることがあります。そのような変化は、事業から見れば、事業は同じなのに、人々がお金を使う場所が突然切り替わるように見えます。

スマートホンがまだなかった1990年代に、長距離の電車移動をしようとすれば、まず駅前の旅行代理店に行き、電車の時刻表をたぐり乗り換え経路を調べてもらい、専用端末で切符を発券してもらうのに、半日はかかりました。現代であれば、スマートホンを取り出して5分もあれば完了する単なる作業です。

今では多くの人が、店舗以外で移動や宿泊の予約をします。それまでは駅前の立地のよいところに店舗を構える事業が、ネットワークを通じたサービスとなり、人々はそこでお金を使うようになります。このような新技術の普及が人々の消費活動の場を変えてしまう場面では、その分野で先駆者になる必要はありませんが、他社に後れを取れば売り上げを失います。

Bluetooth Low Energy技術の活用は、事業を変化させるかもしれません。鍵の製造販売の会社が、Bluetooth Low Energy技術を取り入れて、スマートホンで開閉できる新製品を開発したとします。これだけであれば、スマートホンのアプリケーションで操作できる鍵でしかありません。しかし、鍵というのは、所有や利用の権利を形にするものと見ることもできます。権限があるから事業所の鍵を開けて入室できるのでしょうし、支払いをしたからホテルの部屋の鍵を開けることができます。単なる新製品の鍵が、そのような権利や所有を扱う管理システムを開発して提供したり、ネットワークを通じたサービスを提供し始めれば、鍵というものを通じて、権利や所有を扱う事業へと姿を変えるでしょう。

=== 関わり方のまとめ

ここまでで、Bluetooth Low Energy技術と自分との関わり方を、場所、目的や結果そして動機という3つの項目で表にまとめ、また代表的な関わり方を3つ示しました。この大まかな区分でも、自分とBluetooth Low Energy技術の関わりと、理解の必要がある知識や分野が明確になったと思います。

ここでは、立場や役割を個人と学習そして事業者と3つに分けましたが、必ずしも1つの役割だけをするわけではないでしょう。初めは個人として、思いつくだけの試みを行い、それが学習につながり、やがて事業を手がけることになるかもしれません。

思いついたアイディアが本当によいものかを確かめるには、個人として素早く試作と実験を繰り返すでしょう。あるいは試作せずに、絵本や演劇でアイディアが実現したと想定した場面を撮影して、それを見ることで確かめようとするかもしれません。これは確かめるという結果を得るために、最も手間がかからない方法を選択するのです。ですから、すぐに壊れてしまったり、ほんの一部の機能しか実装されていなくても、よいのです。求めるものは、ある期間で実験をより多く繰り返し、あるいは探求を深めていくかであり、そのためには素早く作り素早く変更することが必要になります。

アイディアが事業の規模で実現ができると確信が得られれば、次は開発者の役割になるかもしれません。最初の1つを販売するまでに、開発者にはとても多くの仕事があります。設計は、妥当な品質と価格で大量生産が可能でなければなりません。人や物に害を与えない安全性が検証されていて、国ごと製品分野ごとの規格認証を取得しなければなりません。販売される製品は世界に広がり、会った事もない誰かが、知らない場所でそれを使い続けるのです。その製品が破棄されるまで、利用者が満足することはもちろんですが、安全に使われるかは、設計次第です。

アイディアが実証できれば、次の段階へと進めるために、資金を集めて会社を起こしたり、あるいは社内新規事業を立ち上げるでしょう。開発はもちろん、財務や法務に営業や広報それに流通や在庫管理やユーザ・サポートと、事業に必要な人材を集めてチームを作っていきます。アプセサリでは、ハードウェアとソフトウェアという分野の異なる2つのものを作りしかも連携させねばならないので、うまく機能する開発チームを作ること自体が、挑戦になるかもしれません。

開発者が、素晴らしいアイディアや技術的に困難だが挑戦しがいのあることを、新たに見つけて、それを手がけたいと好奇心にとりつかれるかもしれません。まず最初の1つの製品の販売にすら届いていないのに、さらに新たなアイディアに着手すれば、1つも製品を売ることもなく資金が底をつくでしょう。自ら問題を見つけて行動できる活発な人材の目線を、事業という1つの目的に向けるのは、それだけで1つの大仕事です。

ここまでBluetooth Low Energy技術の活用に着目してきましたが、少し視点を変えて、なぜ私達は活用を考えてきたのでしょうか。それは、Bluetooth Low Energy技術が、用途を制限することがない技術だからです。Bluetooth Low Energy技術を軸にして、ものとものとがおしゃべりをする共通基盤があります。ですが、その共通基盤をどのように使うのかは、私達自身で取り組むほかないのです。


== アプセサリを作るには、チームで、誰かに使ってもらう何かを

ここまで、Bluetooth low energy技術の特徴と、iOSデバイスを軸としたエコシステムを見てきました。ここでは、Bluetooth low energyを活用したアプセサリを生み出すにはどうすればよいかを見ていきます。

#@# ==== プロファイルとチームづくり
#@# プロファイルの種別:
#@# - 承認すみ
#@# - 承認すみ+自社独自
#@# - プラットホーム独自プロファイル(iBeaconとか)
#@# - カスタムプロファイル（独自製品)
#@# 受けられるサーポトが下がっていく感じ。制約もなくなるけど、承認すみとか、半導体会社から出ている。プロファイルの仕様をじっくりと見ていくこと。もしかすると

#@# もの側の人:
#@# 作りたいものが、GATT基盤プロファイルで承認されている。ならば、それ通りに。通信とか、単語とか意味がわからないところを丁寧に。ファーム側の人。自分が何をしているのかをわかっていればいい。あとは、振る舞いの外にあるところ、製品としての、ファーム更新、在庫管理、電池の初期値とか、BLEに限ら図の一般的なところ。

#@# アプリ側の人:
#@# 作りたいものが、カスタムプロファイる。ならば、仕様はちゃんと作ること。特にハードがわとスマホ側では、組み合わせで必ずトラブルになる。プロジェクトの目的に一度吸い上げて、それから逆算で、顔合わせとかみ合わせイベントを入れておくこと。BLEで攻めた設計をして、未対応機種が出たりしないように?　アクセサリ設計指針を確認しておくこと。出したい性能があるなら、すり合わせを。ファーム更新時の時間、すれ違い的な振る舞い、

#@# プロジェクト側の人:

==== ハードウェアとその体験

アプセサリは、アクセサリとアプリケーションとの造語です。ですから、ハードウェアとしてのアクセサリが同じであっても、そこに掛け合わせるアプリケーションやサービスにより、様々なアプセサリが生み出されます。

アクセサリ、つまりハードウェア部分だけを見ると、既存の周辺機器がBluetooth Smart機器になるものと、Bluetooth low energy技術があるから初めて商品化できる機器とがあります。また機器のBluetooth low energy技術の役割は、それがなければならない必要な機能と、あってもなくてもよい追加機能であるものとに分類できます。

既存の周辺機器がBluetooth Smart機器になるものの例として、デジタル体重計があります。デジタル体重計は、Bluetooth low energy技術以前からある機器です。液晶パネルや電池があり、スマートホンがなくても単体で独立して使えます。そして、体重計の採択済みプロファイル Weight Scale Profile がありますから、これを採用してBluetooth Smart機器にできます。

もともと電子回路と電池があるデジタル体重計は、部品代がおよそ600円程度のBluetooth low energy技術の無線通信回路を追加すれば、Bluetooth Smart機器にできます。機器の工場出荷価格の目安は、およそ販売価格の3分の1です。ですから、販売価格が3000円から1万円のデジタル体重計の、工場出荷時の価格は1000円から3000円です。ですから、この600円の部品代は、けして安くはありません。

デジタル体重計にBluetooth low energy技術が、あってもなくてもよい追加機能か、必要不可欠の機能かは、組み合わせるアプリケーションやサービスで決まります。

昔から体重計を製造販売している会社であれば、低価格から高価格までの幅広い品揃えのうち、高価な部品が追加できる高価格帯の体重計にBluetooth low energy技術を付加します。これは、あってもなくてもよい機能です。また、フィットネスや体重管理のネットワーク・サービスを提供する会社であれば、自社のサービスと自然に連携させるために、Bluetooth low energy技術を採用します。これは、サービス連携のための必須機能です。

Bluetooth low energy技術を、追加機能にするか、必須機能にするかは、会社の方針から決まります。体重計という機器の製造販売が目的であれば、その会社は売上を増やし数多くの機器を販売するために、多種多様な体重計を製造販売します。Bluetooth low energy技術は、その多種多様な体重計の1つの追加機能にすぎません。

ですが、フィットネスなどのサービスが目的であれば、その会社はサービスをより魅力的にして多くの利用者の獲得が目的になります。ですから、体重計は、そのサービスのブランド・イメージに適した機種が1つあればよく、多種のものを販売する必要はありません。Bluetooth low energy技術は、サービスとの連携に必須です。

==== ブレインストーミングとプロトタイピング

アプセサリを、その体験に注目すると、ハードウェアとしての機器や、アプリケーションあるいはネットワーク・サービスの開発は、その体験を生み出すための大切な要素ですが、要素にすぎません。体験を生み出し、その体験を提供し続けるための事業を立ち上げるのは、チームにしかできません。

アプセサリの企画では、ブレインストーミングが役に立ちます。ブレインストーミングは、参加メンバーがアイディアを出しあい、そのアイディアを批判せず前向きに展開し続けることで、アイディアの連鎖反応や発想の誘発を期待する会議手法です。

また、ブレインストーミングには、プロトタイピングが活用できます。プロトタイピングは、試作品を作り早期に企画や体験の検証を短期間で繰り返す手法です。専門分野の異なるチームでは、メンバー同士の認識のすり合わせにプロトタイピングが有効です。

粘土をこねて外形を作ったり、あるいは目標とする機器とは大きさも形も違うとしても、例えばApple Watchのアプリケーションである程度の機能を作り、手で触れて動かして遊ぶと、驚くような発見や広がりそして展開につながります footnote:[Designing for Future Hardware, @<href>{https://developer.apple.com/videos/play/wwdc2015/801/}]。

==== センサー・デバイスと測定値

素晴らしいアプセサリを思いつこうとしても、とりかかりがなければ、考えようがありません。また、素晴らしいアプセサリの体験のアイディアが出ても、そのアクセサリが今ある技術で現実的な価格で製造可能でなければ、実現はできません。センサー・デバイスと測定値の知識は、実現可能なアプセサリを考える手がかりになります。

測定値は、ある量の大きさを計器、センサー、で測定して得られた値をいいます。世の中には様々な種類や精度のセンサーがありますが、圧力、温度、湿度、加速度、角速度、あるいは磁場などのセンサーがあります。センサー技術は絶えず進歩していて、驚くほどの高い感度や精度や機能がある新製品が登場しています。数センチメートルの高低差に相当する気圧変化が検出できる気圧センサーは、階段の昇降の検出すらできます。

最も身近なセンサーは、スマートホンに使われているものです。スマートホンに使われるセンサーは、大量生産されているので、高性能なものが安価に入手できます。例えば、スマートホンに使われるセンサーとその用途は次のものがあります。

* 磁気センサー
** コンパス
* 光センサー
** 画面の明るさ調整(照度センサー)
** 顔と画面の相対位置検出 (光学式近接センサー)
** 写真撮影 (イメージセンサー)
* 音センサー
** マイク
* 静電容量分布センサー
** タッチ検出
* 加速度、角速度、気圧センサー
** デバイスの向き検出
** 歩数や運動量の検出
* 気圧センサー
** 高度

アプセサリが提供するものは、利用者の体験です。ですから、センサーの計測値そのものではなく、その計測値が利用者の体験にどう関わるのかが重要です。センサーがどこに取り付けられているかが、計測値の意味を決めます。計測値がそのままで使うことは、あまりありません。いくつかの計測値を組み合わせたり、計測値を数値計算をして価値のある値を取り出したりします。

例えば、熱中症の危険を検出したいならば、気温だけではなく湿度も計測しなければなりません。またセンサーは、人の近くになければ意味が無いでしょう。あるいは、スマートホンのような常に携帯している機器では、その加速度は人の動きの情報そのものです。ですから、その加速度から歩数や消費カロリーの推定値を算出できます。

==== アクセサリのライフサイクルと収益

アプセサリはアクセサリとアプリケーションおよびサービスの2つの部分があります。アクセサリは、設計製造されて、流通し販売されて、利用され、そして破棄されて、そのライフサイクルを終えます。アプリケーションおよびサービスは、利用者から見ると、アクセサリを初めて購入した時点で利用が開始し、アクセサリを買い換えてもサービス利用は継続します。

ですから、アプセサリの売上は、アクセサリの売上と、アプリケーションおよびサービスの利用料金の2つです。したがって、売上を得る組み合わせは、アクセサリの売上のみでサービスは無料、アクセサリは無料でサービスは利用料金がかかかる、あるいはアクセサリの売上とサービスの利用料金がいずれもかかる、3つの組み合わせがあります。

フィットネス分野のアプせサリは、アクセサリの売上のみでサービスは無料のものが多くあります。それはアプセサリの売上にサービス利用料金を含めることに成功しているからです。単なる万歩計は1000円程度で販売されています。しかし、サービスと連携するBluetooth Smart機器の万歩計は5000円���くで販売されています。利用者がサービス連携の価値を認めることで、アクセサリの販売価格にサービス利用料金を含められています。

また、アプセサリのサービスをアクセサリの売上だけで運営維持していくためには、アクセサリかもしくはその消耗品が定期的に売れ続けなければなりません。フィットネス分野のアクセサリは、落下や洗濯による利用者のミスによる故障や、外装が汚れてくるなどで買い替えが期待できます。また、新しいデザインや新機能がある新モデルの定期的な投入も、買い替えにつながります。

あるいは、サービスのためのアクセサリならば、課金はサービス側で行い、より多くの人に使い始めてもらうために、アクセサリは実質無償とします。一般向けの決済サービスであれば、クレジットカードを読み取るアクセサリは安価で販売して、サービス利用時にその購入代金をポイントなどで利用者に戻して、実質無料で提供します。企業向けの勤怠管理システムであれば、まず利用を始めてもらえるように、機器はリースにして導入費用を低くして、利用料金で機器の費用を回収します。

アプセサリの事業規模は、利用者が増えるほど大きくなります。これには、アプセサリを知ってもらうこと、興味を持ってもらうこと、購入して利用してもらうことが必要です。フィットネス機器は、身につけている機器が他人から見えますから、、人のつながりと口コミで商品の認知が広まります。さらに、目標の活動量達成を自動的にソーシャル・メディアに投稿する機能があると、ネットワークを通じてもアプセサリの認知が広がります。

アクセサリには、ある場所に設置できるアクセサリは1つだけという場所の排他性と、あるアクセサリを利用していれば同様の別のアクセサリに入れ替えることはないという手間のための排他性とがあります。ですから、アプセサリの事業は、最初に利用されたものや、最初に導入されたものが強い立場を得ます。例えば、腕時計は2つ身につける人はいません。あるいは、企業向けのサービスであれば、別会社のサービスに切り替えることは、機材の入れ替えなど大変な手間がかかりますから、まずありません。

==== 開発とそのチーム

事業化を目指すアプセサリの開発は、ハードウェアやソフトウェアなど、いくつかの分野にまたがるために、その開発はチームでおこなうことになります。

プロジェクトは、アクセサリとサービスの試作などのプロトタイピングとその体験の確認の繰り返しに始まり、量産を前提とした試作、そしてサービスを開始してからは不良品対応やユーザー・サポートなどの運営へと進みます。プロジェクトの段階にともない、チームやその構成メンバーは変更されていきます。

プロトタイピングでは、分野を超えた連携が特に重要です。体験と設計そして実装とが、うまく組み合わさらないと、後の詳細実装で実装ができないことがわかりプロトタイピングからやり直しになり時間と費用を消耗したり、工夫をすれば実装ができることに気がづけずに、よい体験を逃したりします。分野を超えてお互いに工夫を出しあうことが重要です。

ハードウェアとアプリケーションが、それぞれ別の開発チームであるならば、チーム間での成果物の渡し方と渡す時期の設定に工夫が必要です。

チーム間で成果物を渡す時には、その成果物だけで動作が確認できるようにします。試作したハードウェアをアプリケーション開発チームに渡す時は、ハードウェアだけではなく、動作確認用のアプリケーションも渡すようにします。開発中にハードウェアの挙動がおかしい場合は、動作確認用アプリケーションがあれば、その原因がハードウェアなのか通信あるいはアプリケーションにあるのかを切り分けられます。

チームからチームへの成果物の公開は、ファイル共有やプロジェクト管理サービスを使い、常に行います。開発プロセスの1つを完成させてから次のプロセスを進める方法では、すべてのプロセスが直列に並び開発期間がとても長くなるのと、どこかで不具合が判明した時にその修正にかかる時間がとても長くなります。

試作が完了すれば、次に量産のための試作、そして製造へと移行します。製造設備を所有していなければ、製造ができるパートナーも見つけ出さなければなりません。体験のための試作と、量産のための試作は異なります。製造のしやすさや製造費用の低減はもちろん、人への安全性などのリスク分析や、説明書への記載、リサイクルや環境への配慮などの、市場で販売するために必要な考慮が含まれます。

また、Made for iPhoneプログラムには、設計者ライセンスと製造者ライセンスがあります。iBeaconのように、iOS独自の認証技術が用いられていないものでは、通常のBluetooth Smart機器として製造ができます。ですが、HomeKitのように高度な認証技術が使われるものは、Made for iPhoneの製造者ライセンスを取得している製造パートナーを探します。


==== 電波法とBluetoothの認証

市場で販売される機器には、機器がお互いに機能できるように、認可や申告の義務があります。電波を送信するBluetooth Smart機器には、電波法の遵守と、Bluetooth無線技術の認可の取得と製品申告が必要です。

電波は公共の資源です。電波は四方八方に広がるため、混信や妨害が起きないように、国が周波数の割当や事業者への割当をおこないます。Bluetooth Smart機器は、電波を送信するので、小さいながらも無線局です。電波法に従わない勝手な無線設備の運用には、罰則規定があります footnote:[電波法 第百十条 次の各号のいずれかに該当する者は、一年以下の懲役又は百万円以下の罰金に処する。]。

無線技術の知識がない人が免許がなくても利用できるように、無線設備を電波法に適合するものとして認証する制度があります。これが、技術基準適合証明制度(技適)および工事設計認証制度です。

技術基準適合証明制度は、無線設備を1台づつ試験をして技術基準に適合しているかを判断して認証するもので、1回の申請で最大500台まで申請できます。これは、試作あるいは少数製造で利用されます。

製造では、工事設計認証制度が使われます。これは、無線設備の設計とその製造設備が基準を満たすことを認証します。この制度は、同じ特性の無線設備が製造できる工場で製造された1台の無線設備を試験して、その1台が技術基準に適合してれば、これから同じ特性で製造される無線設備も技術基準を満たすだろうというものです。

これらの制度を利用しても、製品ごとに認可を取るのは大変です。そこで使われるのがモジュール状の特定無線設備、つまり無線モジュールです。無線モジュールとは、発振部などの電波の特性に直接影響を与える部分を1つの基板や集積回路にまとめたものです。無線モジュールで、技術基準適合証明または工事設計認証を取得していれば、無線モジュールを組み込んだ最終製品で認証を取得する必要はありません。

ですから、Bluetooth Smart機器の試作と量産では、無線モジュールがよく使われます。しかし、無線モジュールが使えない小型や曲面のように特殊な形状のものでは、無線回路から設計します。このときは、電気回路の設計と試作ではシールドボックスやシールドルームという、電波を外に漏らさない箱や部屋で試験をします。また屋外で体験を検証するときは技術基準適合証明を、製造時は工事設計認証を製品に対して取得します。

電波法は国ごとに異なります。Bluetooth Smart機器を米国で販売するには、通信や電波の利用を管理する連邦通信委員会(Federal Communication Commission、FCC)の認証の取得が必要です。これには、日本国の技術基準にはない、機器から意図せず放射される電磁波の強度測定が含まれます。

このように、電波法の基準やその認証制度とその運営は国ごとに異なります。どのような試験項目があるのかは設計段階から把握し対応しなければ、試験に通らず再設計することになります。また、1回の測定で複数の国に提出できるデータを取得できるものもあります。ですから、量産のための試作では、認証サービス会社や製造パートナーと、事前にどの国で販売するかを設定して、技術評価項目を確認しておきます。

Bluetooth機器を自社製品として販売するには、Bluetoothの認可を取得して製品申告をします。これには、Bluetooth無線技術の知的財産と商標のライセンシングが含まれます footnote:[Bluetooth 認証および申告プロセス @<href>{https://www.bluetooth.org/ja-jp/test-qualification/qualification-overview}。
申告料金は、アソシエイトメンバーであれば4,000米ドル、年会費が無償のアダプターメンバーであれば8,000米ドルです。年間収入が1億米ドル以下の中小企業のアソシエイト会員の年会費は7,500米ドルですから、1年間に2つ以上の製品を登録するならば、アソシエイトメンバーになる方が得です。

また、小さな新興企業が最初のBluetooth製品を商品化できるように、イノベーション奨励プログラムがあります。年間収入が100万米ドル未満で、以前に申告をしたことがない企業は、2,500米ドルの割引金額で最大2つの申告を受けることができます。

=== {ch01-まとめ} まとめ

この章は、利用場面を例にして、Bluetooth low energy技術の特徴とそのエコシステムとを見ていきました。無線通信には必ず通信相手がいます。ですから、通信相手がそれぞれ普及しないかぎり、新しい無線技術は普及しはじめません。Bluetooth low energy技術は、スマートホンという通信相手の登場により、急激に普及しはじめました。

従来版Bluetooth無線技術は、無線通信と機器のデータ表現を組み合わせて最適な技術を提供していました。ですが、Bluetooth low energy無線技術は、ものをデータベースとして表現する、通信を意識しなくてもよい、GATT 基盤アーキテクチャを採用しました。

Bluetooth low energy技術のエコシステムは、機器の製造販売、アプリケーション開発、そしてサービス提供といった、事業の目的も利益も違う事業者の関わりあいで支えられます。Bluetooth low energy技術は、このエコシステムのつながりのよりどころなのです。

Bluetooth SIGの採択済みプロファイルをよりどころにして、周辺機器やフィットネスなどの機器市場へのBluetooth low energy技術の普及をみてきました。そして、カスタム・プロファイルとアプリケーション開発がもたらしたアプセサリと呼ばれる新しい利用分野を見てきました。

Bluetooth low energy技術は、その強力なブランド力で、身の回りにある様々な物と物事のための無線通信技術として、ますます普及していくでしょう。
