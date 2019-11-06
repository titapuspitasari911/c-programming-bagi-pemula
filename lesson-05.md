# CODING MUM

| [Home][0] | [Lesson 01][1] | [Lesson 02][2] | [Lesson 03][3] | [Lesson 04][4] | [Lesson 05][5] | [Lesson 06][6] | [Lesson 07][7] | [Presentation][8] |
|:---------:|:--------------:|:--------------:|:--------------:|:--------------:|:--------------:|:--------------------:|:--------------:|:-----------------:|

---

### LESSON 05: BOOTSTRAP
---

### Objectives
1. Perkenalan tentang **Bootstrap**.
2. Peserta mampu mengerti penggunaan **Bootstrap**.
3. Peserta mengerti konsep responsive dengan menggunakan **Bootstrap**.
4. Membuat layout website dengan menggunakan **Bootstrap**.

---

### Materi

#### 1. Perkenalan Bootstrap
* Bootstrap adalah sebuah alat bantu pemrograman Front End yang digunakan untuk mempercepat dan memudahkan pembuatan website.
* Bootstrap terdiri dari CSS dan JavaScript yang dapat membantu dalam typography, forms, buttons, tables, navigation, modals, image carousels dan lain sebagainya

#### 2. Penggunaan Bootstrap
* Download [Bootstrap](https://github.com/twbs/bootstrap/releases/download/v3.3.7/bootstrap-3.3.7-dist.zip)
* Pindahkan file bootstrap-3.3.7-dist.zip ke dalam project website kamu.
* Ekstrak file bootstrap-3.3.7-dist.zip, lalu ubah nama folder menjadi bootstrap.
* Struktur folder akan seperti di bawah ini.

  ```text

    +-- nama-folder
      |-- index.html
      +-- bootstrap
        +-- js
          |-- bootstrap.js
          |-- bootstrap.min.js  
          |-- npm.js
        +-- fonts
          |-- glyphicons-halflings-regular.eot
          |-- glyphicons-halflings-regular.woff
          |-- glyphicons-halflings-regular.svg
          |-- glyphicons-halflings-regular.woff2
          |-- glyphicons-halflings-regular.ttf
        +-- css
          |-- bootstrap.css
          |-- bootstrap.min.css.map
          |-- bootstrap-theme.min.css
          |-- bootstrap.css.map
          |-- bootstrap-theme.css
          |-- bootstrap-theme.min.css.map
          |-- bootstrap.min.css
          |-- bootstrap-theme.css.map

  ```

<img src="files/grid-bootstrap.png">

#### 2. Container and Row sebagai parent dari kolom-kolom.

* Bootstrap 1 Kolom

  ```html

  <html>
    <head>
      <title>
        Bootstrap 1 Kolom
      </title>
        <link rel="stylesheet" type="text/css" href="bootstrap/css/bootstrap.css">
    </head>
    <body>
      <div class="container">
        <div class="row">
          <div class="col-xs-12">
            Satu kolom
          </div>
        </div>
      </div>
    </body>
  </html>

  ```

* Bootstrap 2 Kolom

  ```html

  <html>
    <head>
      <title>
        Bootstrap 2 Kolom
      </title>
        <link rel="stylesheet" type="text/css" href="bootstrap/css/bootstrap.css">
    </head>
    <body>
      <div class="container">
        <div class="row">
          <div class="col-xs-6">
            Kolom 1
          </div>
          <div class="col-xs-6">
            Kolom 2
          </div>
        </div>
      </div>
    </body>
  </html>

  ```

* Bootstrap 3 Kolom

  ```html

  <html>
    <head>
      <title>
        Bootstrap 3 Kolom
      </title>
        <link rel="stylesheet" type="text/css" href="bootstrap/css/bootstrap.css">
    </head>
    <body>
      <div class="container">
        <div class="row">
          <div class="col-xs-4">
            Kolom 1
          </div>
          <div class="col-xs-4">
            Kolom 2
          </div>
          <div class="col-xs-4">
            Kolom 3
          </div>
        </div>
      </div>
    </body>
  </html>

  ```
  
* Bootstrap 3 Kolom Kompleks

  ```html

  <div class="container">
      <div class="row">
          <div class="col-xs-4 merah">
              <div class="anak1">
                  <h4>Anak 1</h4>
                  <p>Ini paragraf Ini paragraf Ini paragraf</p>
              </div>
          </div>
          <div class="col-xs-4 orange">
              <div class="row">
                  <div class="col-xs-12 orange">Cucu 1</div>
                  <div class="col-xs-12 ungu">Cucu 2</div>
              </div>
          </div>
          <div class="col-xs-4 hijau">
            <div class="row">
                <div class="col-xs-12 ungu">Cucu 1</div>
                <div class="col-xs-12 orange">
                    <div class="row">
                       <div class="col-xs-6 hijau">Cicit 1</div>
                       <div class="col-xs-6 merah">Cicit 2</div>
                    </div>
                </div>
            </div>
          </div>
      </div>
  </div>

  ```

#### 2. CSS pembantu

* CSS `style.css`

  ```css
  .merah {
      background-color: red;
  }
  .ungu {
      background-color: purple;
  }
  .hijau {
      background-color: green;
  }
  .orange {
      background-color: orange;
  }
  .hitam {
      background-color: black;
  }
  .anak1 {
      margin-left: 20px;
  }
  
  ```

#### 3. Class Responsive
* Extra small devices Phones (<768px)
  ```html
  <div class="col-xs-6">
    Ini untuk Phones
  </div>
  ```
* Small devices Tablets (≥768px)
  ```html
  <div class="col-sm-6">
    Ini untuk Tablets
  </div>
  ```
* Medium devices Desktops (≥992px)
  ```html
  <div class="col-md-6">
    Ini untuk Desktops
  </div>
  ```
* Large devices Desktops (≥1200px)
  ```html
  <div class="col-lg-6">
    Ini untuk Large Screen
  </div>
  ```
* Digabung semua
  ```html
  <div class="col-xs-6 col-sm-6 col-md-6 col-lg-6">
    Ini gabungan semua
  </div>
  ```

---

### File
[LESSON 05: FRAMEWORK BOOTSTRAP](files/Lesson5-Bootstrap.pdf)

---

### Latihan
1. Buat halaman yang responsive ketika dibuka pada Phone, Tablet, Desktop dan Large Screen.

---

### Feedback
1. Apa yang menjadi bottleneck dari **lesson 05** ini?
2. Apa yang sebaiknya ditambah dan ditiadakan dari materi **lesson 05** ini?

---

### Referensi
1. [Bootstrap Grid](http://getbootstrap.com/css/#grid "Bootstrap Grid")
2. [Front-End Web UI Frameworks and Tools](https://www.coursera.org/learn/web-frameworks "Front-End Web UI Frameworks and Tools")
2. [Introduction to Bootstrap](https://www.edx.org/course/introduction-bootstrap-tutorial-microsoft-dev203x-2 "Introduction to Bootstrap")

---

| [Home][0] | [Lesson 01][1] | [Lesson 02][2] | [Lesson 03][3] | [Lesson 04][4] | [Lesson 05][5] | [Lesson 06][6] | [Lesson 07][7] | [Presentation][8] |
|:---------:|:--------------:|:--------------:|:--------------:|:--------------:|:--------------:|:--------------------:|:--------------:|:-----------------:|

[0]: README.md "Home"
[1]: lesson-01.md "Internet dan Web Development"
[2]: lesson-02.md "Pengenalan HTML dan CSS"
[3]: lesson-03.md "Pembahasan Lebih Rinci Tentang HTML"
[4]: lesson-04.md "Pembahasan Lebih Rinci Tentang CSS"
[5]: lesson-05.md "Framework Bootstrap"
[6]: lesson-06.md "Personal Project"
[7]: lesson-07.md "Domain, Hosting dan GitHub"
[8]: lesson-08.md "Presentation"
