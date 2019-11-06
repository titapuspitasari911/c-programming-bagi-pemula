# C PROGRAMMING BAGI PEMULA

| [Home][0] | [Lesson 01][1] | [Lesson 02][2] | [Lesson 03][3] | [Lesson 04][4] | [Lesson 05][5] | [Develop Application][6] |
|:---------:|:--------------:|:--------------:|:--------------:|:--------------:|:--------------:|:------------------------:|

---

### LESSON 03: Array dan struktur pada Pemrograman C

---

#### Objectives:
1. Peserta mampu memahami struktur data array.
2. Peserta mampu memahami struct.
3. Peserta mampu memahami typedef.
4. Peserta mampu memahami union.
5. Peserta mampu memahami pointer.
6. Peserta mampu memahami queue dan implementasinya.
7. Persiapan untuk kelas berikutnya.

---

### Material

#### 1. HTML
* Icon
  ```html
  <html>
     <head>
        <title>TITLE OF WEBSITE</title>
      <link rel="icon" type="image/png" href="images/icon.png">
     </head>
     <body>
        This is body...
     </body>
  </html>
  ```
* Meta
  ```html
    <html>
      <head>
        <title>TITLE OF WEBSITE</title>
        <meta charset="UTF-8">
        <meta name="description" content="CodingMum Web
        tutorial">
        <meta name="author" content="Alexander">
      </head>
      <body>
        This is body...
      </body>
    </html>
  ```  
* Line Break
  ```html
  <html>
     <head>
        <title>TITLE OF WEBSITE</title>
        <meta charset="UTF-8">
        <meta name="description" content="CodingMum Web tutorial">
        <meta name="author" content="Alexander">
     </head>
     <body>
        This is the first line sentece. <br/>
        This is the second line sentence.
     </body>
  </html>
  ```
* Unordered List
  ```html
  <html>
    <head>
      <title>TITLE OF WEBSITE</title>
      <meta charset="UTF-8">
      <meta name="description" content="CodingMum Web tutorial">
      <meta name="author" content="Alexander">
    </head>
    <body>
      <h2>Alat membuat mie goreng</h2>
      <ul>
        <li>Panci</li>
        <li>Piring</li>
        <li>Sendok</li>
        <li>Kompor Gas</li>
      </ul>
    </body>
  </html>
  ```
* Ordered List
  ```html
  <html>
    <head>
      <title>TITLE OF WEBSITE</title>
      <meta charset="UTF-8">
      <meta name="description" content="CodingMum Web tutorial">
      <meta name="author" content="Alexander">
    </head>
    <body>
      <h2>Langkah membuat mie:</h2>
      <ol>
        <li>Rebus air dalam panci</li>
        <li>Ambil mie instant</li>
        <li>Masukan dalam air yang sudah mendidih</li>
        <li>Setelah matang mie-nya, angkat dan tiriskan</li>
        <li>Masukan bumbu mie intant dalam piring</li>
        <li>Masukan mie yang sudah tiris</li>
        <li>Aduk rata mie dengan bumbu</li>
      </ol>
    </body>
  </html>
  ```
* Video
  ```html
  <html>
     <head>
        <title>TITLE OF WEBSITE</title>
        <meta charset="UTF-8">
        <meta name="description" content="CodingMum Web tutorial">
        <meta name="author" content="Alexander">
     </head>
     <body>
     This is video of CodingMum:<br/>
        <video id="video-1" width="320" height="240" controls>
           <source src="videos/CodingMum_Mancanegara.mp4" type="video/mp4" />
        </video>
     </body>
  </html>
  ```  
* Div
  ```html
  <html>
     <head>
        <title>TITLE OF WEBSITE</title>
        <meta charset="UTF-8">
        <meta name="description" content="CodingMum Web tutorial">
        <meta name="author" content="Alexander">
     </head>
     <body>
      <div style=“width:200px;height:400px;” >Ini adalah sebuah persegi</div>
      <div style=“width:400px;height:400px;” >Ini adalah sebuah kotak</div>
     </body>
  </html>
  ```

#### 2. CSS Box Model
* Border
  ```html
  <html>
     <head>
        <title>TITLE OF WEBSITE</title>
        <meta charset="UTF-8">
        <meta name="description" content="CodingMum Web tutorial">
        <meta name="author" content="Alexander">
     </head>
     <body>
      <div style=“width:200px;height:400px;border: 5px solid red;” >Ini adalah sebuah persegi</div>
      <div style=“width:400px;height:400px;border: 5px dotted blue;” >Ini adalah sebuah kotak</div>
     </body>
  </html>
  ```
* Margin
  ```html
  <html>
     <head>
        <title>TITLE OF WEBSITE</title>
        <meta charset="UTF-8">
        <meta name="description" content="CodingMum Web tutorial">
        <meta name="author" content="Alexander">
     </head>
     <body>
      <div style=“width:200px;height:400px;border: 5px solid red;margin:30px;” >Ini adalah sebuah persegi</div>
      <div style=“width:400px;height:400px;border: 5px dotted blue;margin:60px;” >Ini adalah sebuah kotak</div>
     </body>
  </html>
  ```
* Padding
  ```html
  <html>
     <head>
        <title>TITLE OF WEBSITE</title>
        <meta charset="UTF-8">
        <meta name="description" content="CodingMum Web tutorial">
        <meta name="author" content="Alexander">
     </head>
     <body>
      <div style=“width:200px;height:400px;border: 5px solid red;margin:30px;padding:60px;” >Ini adalah sebuah persegi</div>
      <div style=“width:400px;height:400px;border: 5px dotted blue;margin:60px;padding:30px;” >Ini adalah sebuah kotak</div>
     </body>
  </html>
  ```
---

### File
[LESSON 03: PEMBAHASAN RINCI HTML](files/Lesson3-PembahasanRinciHTML.pdf)

---

### Latihan
1. Peserta dapat mulai membuat halaman resep dengan memanfaatkan list, image, video, paragraf, dan heading yang sudah dipelajari sebelumnya.

---

### Feedback
1. Apa yang menjadi bottleneck dari **lesson 03** ini?
2. Apa yang sebaiknya ditambah dan ditiadakan dari materi **lesson 03** ini?

---

### Referensi

---

| [Home][0] | [Lesson 01][1] | [Lesson 02][2] | [Lesson 03][3] | [Lesson 04][4] | [Lesson 05][5] | [Develop Application][6] |
|:---------:|:--------------:|:--------------:|:--------------:|:--------------:|:--------------:|:------------------------:|

[0]: README.md "Home"
[1]: lesson-01.md "Pengenalan dasar tentang CLI Linux untuk develop aplikasi dengan menggunakan C GNU Library"
[2]: lesson-02.md "Pengenalan algoritma dasar pemrograman dengan Bahasa C"
[3]: lesson-03.md "Array dan struktur pada Pemrograman C"
[4]: lesson-04.md "Penanganan file pada Pemrograman C"
[5]: lesson-05.md "Implementasi TCP Server - Client pada Pemrograman C"
[6]: lesson-06.md "Pembuatan aplikasi Collect and Controlling Data Logger"

