# CODING MUM

| [Home][0] | [Lesson 01][1] | [Lesson 02][2] | [Lesson 03][3] | [Lesson 04][4] | [Lesson 05][5] | [Lesson 06][6] | [Lesson 07][7] | [Presentation][8] |
|:---------:|:--------------:|:--------------:|:--------------:|:--------------:|:--------------:|:--------------------:|:--------------:|:-----------------:|

---

### LESSON 04: INTRO TO FRAMEWORK

---

### Objectives
1. Peserta mengetahui cara menyisipkan **CSS** pada halaman **HTML** secara eksternal.
2. Peserta mengetahui selector dan property **CSS**.


---

### Material

#### 1. Cara menyisipkan CSS pada halaman HTML
* Inline style sheet (TIDAK DIREKOMENDASIKAN).
  Di dalam HTML element tag attribute “style”
* Internal style sheet (TIDAK DIREKOMENDASIKAN).
  Definisi di dalam element <style> di dalam element <head>
* External style sheet (SANGAT DIREKOMENDASIKAN)
  Ditempatkan di file terpisah dengan .css extension.
  Dapat merubah banyak HTML pages dengan 1 file CSS

#### 2. Format Penulisan CSS

* Selector 
  Menunjuk ke HTML element mana yang mau didekor), misal: h1, p, ul, dsb.

* Declaration Block
  Diawali dengan tanda “{“ dan diakhiri dengan tanda “}”
  Deklarasi terdiri dari nama property dan nilainya, dipisahkan dengan tanda titik-dua “:”, misal: color:blue
  Setiap deklarasi diakhiri dengan tanda semi-colon “;”

#### 3. CSS Selectors itu bisa berdasarkan:

* HTML element name
  p, h1, table, dsb
* id
  Diawali dengan tanda hash “#“
* class
  Diawali dengan tanda titik “.“
* lainnya
  Kombinasi antara HTML element name dengan id
  Kombinasi antara HTML element name dengan HTML element name yang lainnya

#### 4. Inline style sheet
  ```html
  <html>
    <head>
      <title>Lesson 04 - CSS</title>
    </head>
    <body style="background-color: lightblue;">
      <h1 style="color: white; text-align: center;">
        Non CSS Example
      </h1>
      <h2 style="color: red;text-align: right;">
        Second Title 01
      </h2>
      <h2 style="color: red;text-align: right;">
        Second Title 02
      </h2>
      <p style="font-family: verdana;font-size: 20px;">
        This is a paragraph satu.
      </p>
      <p style="font-family: verdana;font-size: 20px;">
        This is a paragraph dua.
      </p>
      <p style="font-family: verdana;font-size: 20px;">
        This is a paragraph tiga.
      </p>
    </body>
  </html>
  ```
#### 5. Internal style sheet

  ```html
  <html>
    <head>
      <title>Lesson 04 - CSS</title>
      <style type="text/css">
        body{
          background-color: lightblue;
        }
        h1{
          color: white;
          text-align: center;
        }
        h2{
          color: red;
          text-align: right;
        }
        p{
          font-family: verdana;
          font-size: 20px;
        }
      </style>
    </head>
    <body>
      <h1>
        Non CSS Example
      </h1>
      <h2>
        Second Title 01
      </h2>
      <h2>
        Second Title 02
      </h2>
      <p>
        This is a paragraph satu.
      </p>
      <p>
        This is a paragraph dua.
      </p>
      <p>
        This is a paragraph tiga.
      </p>
    </body>
  </html>
  ```
#### 6. External style sheet

  ```html
  <html>
    <head>
      <title>Lesson 04 - CSS</title>
      <link rel="stylesheet" type="text/css" href="css/mystyle.css">
    </head>
    <body>
      <h1>
        Non CSS Example
      </h1>
      <h2>
        Second Title 01
      </h2>
      <h2>
        Second Title 02
      </h2>
      <p>
        This is a paragraph satu.
      </p>
      <p>
        This is a paragraph dua.
      </p>
      <p>
        This is a paragraph tiga.
      </p>
    </body>
  </html>
  ```
  Ada dalam css/mystyle.css
  ```css
  body{
    background-color: lightblue;
  }
  h1{
    color: white;
    text-align: center;
  }
  h2{
    color: red;
    text-align: right;
  }
  p{
    font-family: verdana;
    font-size: 20px;
  }
  ```
---

### File
[LESSON 04: PEMBAHASAN LEBIH RINCI CSS](files/Lesson4-PembahasanLebihRinciCSS.pdf)

---

### Exercises
1. Peserta mampu mengimplementasikan CSS Eksternal dalam mempercantik website.

---

### Feedback
1. Apa yang menjadi bottleneck dari **lesson 04** ini?
2. Apa yang sebaiknya ditambah dan ditiadakan dari materi **lesson 04** ini?

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
