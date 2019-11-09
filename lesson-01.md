# C PROGRAMMING BAGI PEMULA

| [Home][0] | [Lesson 01][1] | [Lesson 02][2] | [Lesson 03][3] | [Lesson 04][4] | [Lesson 05][5] | [Develop Application][6] |
|:---------:|:--------------:|:--------------:|:--------------:|:--------------:|:--------------:|:------------------------:|

---

### LESSON 01: Pengenalan dasar tentang CLI Linux untuk develop aplikasi dengan menggunakan C GNU Library

---

### Objectives:
1. Peserta mampu menggunakan perintah dasar Linux. 
2. Peserta mampu mengenal Bahasa Pemrograman C.
3. Peserta mampu melakukan compile program C dengan menggunakan GNU C Library.
4. Peserta mampu menampilkan **Helo word** pada Bahasa Pemrograman C.
5. Persiapan untuk kelas berikutnya.

---

### Material
#### 1. Perintah Dasar Pada Linux

  * Penjelasan mengenai perintah **man**
    * **man**
      * Perintah yang digunakan untuk menampilkan usermanual dari perintah yang ada di linux.
    * Syntax
      * `man [LINUX COMMAND] <enter>`
    * Example
      * `man pwd`
      * `man cd`
      * `man ls`

  * Penjelasan mengenai perintah **pwd**
    * **pwd**
      * Perintah yang digunakan untuk mengetahui path direktori kerja Anda.
    * Syntax
      * `pwd <enter>`
    * Example
      * `pwd`

  * Penjelasan mengenai perintah **Is**
    * **Is**
      * Perintah yang digunakan untuk menampilkan daftar file dan direktori beserta metadata yang terkait dengan file dan folder tersebut diurutkannya berdasarkan abjad.
    * Syntax
      * `Is [OPTIONS] [PATH_DIRECTORY]<enter>`
    * Options yang sering digunakan
      * -a : tampilkan semua file dan folder (termasuk file yang disembunyikan dan root directori)
      * -l : tampilkan daftar list file dan folder format panjang ke bawah dengan meta data file dan folder.
      * -c : jika ditambahkan dengan **-lt** maka dapat menampilkan list file dan folder berdasarkan urutan dibuatnya file dan folder tersebut
      * -r : secara default list akan diurutkan dari abjad A sampai Z. Jika pake **-r** maka akan dibalik urutannya dari Z ke A.
    * Example
      * `ls`
      * `ls -a`
      * `ls -l`
      * `ls -al`
      * `ls -ltc`
      * `ls -alr`

  * Penjelasan mengenai perintah **cd**
    * **cd**
      * Perintah yang digunakan untuk mengubah direktori kerja Anda.
    * Syntax
      * `cd [PATH_DIRECTORY] <enter>`
    * Example
      * `cd /home`

  * Penjelasan mengenai perintah **touch**
    * **touch**
      * Perintah yang digunakan untuk stempel waktu pada sebuah file. Biasanya digunakan untuk stempel waktu file logger.
    * Syntax
      * `touch [OPTIONS] [PATH_FILE] <enter>`
    * Options yang sering digunakan
      * -c : secara default **touch** akan membuat file yang di **touch** jika file itu tidak ada, gunakan **-c** ini untuk mencegah file di create ketika file itu tidak ada.
    * Example
      * `touch -c logger.log`
      * `touch logger.log`

  * Penjelasan mengenai perintah **mkdir**
    * **mkdir**
      * Perintah yang digunakan untuk membuat sebuah direktori.
    * Syntax
      `mkdir [OPTIONS] [DIRECTORY_NAME] <enter>`
    * Options yang sering digunakan
      * -m : untuk mengatur file mode permission pada direktori yang akan dibuat.
      * -p : membuat parent direktori dari folder yang akan dibuat.
    * Example
      * `mkdir -m a=rwx mydir`
      * `mkdir -p parentFolder/childFolder`

  * Penjelasan mengenai perintah **rmdir**
    * **rmdir**
      * Perintah yang digunakan untuk menghapus direktori.
    * Syntax
      * `rmdir <enter>`
    * Options yang sering digunakan
      * -p : menghapus parent direktori dan child folder yang telah dibuat.
    * Example
      * `rmdir mydir`
      * `rmdir -p parentFolder/childFolder`

  * Penjelasan mengenai perintah **vi**
    * **vi**
      * Perintah yang digunakan untuk mengetahui path direktori kerja.
    * Syntax
      * `vi <enter>`

  * Penjelasan mengenai perintah **more**
    * **more**
      * Perintah yang digunakan untuk mengetahui path direktori kerja.
    * Syntax
      * `more <enter>`
      
  * Penjelasan mengenai perintah **cp**
    * **cp**
      * Perintah yang digunakan untuk mengetahui path direktori kerja.
    * Syntax
      * `cp <enter>`

  * Penjelasan mengenai perintah **mv**
    * **mv**
      * Perintah yang digunakan untuk mengetahui path direktori kerja.
    * Syntax
      * `mv <enter>`

  * Penjelasan mengenai perintah **whereis**
    * **whereis**
      * Perintah yang digunakan untuk mengetahui path direktori kerja.
    * Syntax
      * `whereis <enter>`

  * Penjelasan mengenai perintah **rm**
    * **rm**
      * Perintah yang digunakan untuk mengetahui path direktori kerja.
    * Syntax
      * `rm [OPTIONS] [DIRECTORY_NAME] <enter>`

  * Penjelasan mengenai perintah **sudo**
    * **sudo**
      * Perintah yang digunakan untuk mengetahui path direktori kerja.
    * Syntax
      * `sudo <enter>`

  * Penjelasan mengenai perintah **ps**
    * **ps**
      * Perintah yang digunakan untuk mengetahui path direktori kerja.
    * Syntax
      * `ps <enter>`

  * Penjelasan mengenai perintah **kill**
    * **kill**
      * Perintah yang digunakan untuk mengetahui path direktori kerja.
    * Syntax
      * `kill <enter>`

  * Penjelasan mengenai perintah **grep**
    * **grep**
      * Perintah yang digunakan untuk mengetahui path direktori kerja.
    * Syntax
      * `grep <enter>`

  * Penjelasan mengenai perintah **chmod**
    * **chmod**
      * Perintah yang digunakan untuk mengetahui path direktori kerja.
    * Syntax
      * `chmod <enter>`

  * Penjelasan mengenai perintah **chown**
    * **chown**
      * Perintah yang digunakan untuk mengetahui path direktori kerja.
    * Syntax
      * `chown <enter>`

  * Penjelasan mengenai perintah **make**
    * **make**
      * Perintah yang digunakan untuk mengetahui path direktori kerja.
    * Syntax
      * `make <enter>`
  
  * Penjelasan mengenai perintah **reboot**
    * **reboot**
      * Perintah yang digunakan untuk mengetahui path direktori kerja.
    * Syntax
      * `reboot <enter>`

  * Penjelasan mengenai perintah **shotdown**
    * **shotdown**
      * Perintah yang digunakan untuk mengetahui path direktori kerja.
    * Syntax
      * `shotdown <enter>`

#### 2. Pengenalan Bahasa Pemrograman C
  * Apa itu bahasa program C?
  * Apa keuntungan belajar program C?
  * Proses kompilasi program C?
  * Struktur penulisan program C?
  * Pengenalan fungsi-fungsi dasar program C
    * Praprosesor **#include**
    * fungsi **main()**
    * fungsi **printf()**
    * fungsi **system()**


#### 3. Compile program C dengan menggunakan GNU C Library
  * Penjelasan mengenai perintah **gcc**
  * Compile satu file c menjadi satu executable
  * Compile beberapa file c menjadi satu executable
  * Compile menggunakan perintak **make**

#### 4. Menampilkan `Helo word` pada Bahasa Pemrograman C
 * Menjalankan program C tanpa ada parameter input
 * Menjalankan program C dengan parameter input

---

### File
  * Source code [LESSON 01: Pengenalan dasar tentang CLI Linux untuk develop aplikasi dengan menggunakan C GNU Library](files/Lesson1_SourceCode.zip)

---

### Execises
1. Perintah Dasar Pada Linux
    * Buka terminal dan masuk ke dalam direktori Document dengan menggunakan perintah **cd**.
    * Buat sebuah folder pada direktori Document dengan nama CProgrammingClass menggunakan perintah **mkdir**.
    * Buat sebuah folder pada direktori CProgrammingClass dengan nama Lesson01 menggunakan perintah **mkdir**.
    * Buat tiga buah folder pada direktori Lesson01 dengan nama FolderA, FolderB, DeleteFolder menggunakan satu perintah **mkdir**.
    * Tampilkan isi dari folder Lesson01 dengan menggunakan perintah **ls** dengan format panjang ke bawah.
    * Hapus folder DeleteFolder dengan menggunakan perintah **rmdir**.
    * Buat sebuah file test.c pada direktori FolderA dengan menggunakan perintah **vi** isi dengan source code di bawah ini.

      ```c
      # include <stdio.h>
      int main()
      {
        printf("Ini adalah output dari perintah printf"); 
      }
      ```
    * Pindahkan file test.c ke dalam FolderB dengan menggunakan perintah **mv**.
    * Copy file test.c ke dalam FolderA dengan menggunakan perintah **cp**.
2. Salin kembali contoh program yang telah di berikan pada **lesson 1** ini dan modifikasi source code tersebut sesuai dengan keinginan dirimu.
---

### Feedback
1. Apa yang menjadi kendala dari **lesson 01** ini?
2. Apa yang sebaiknya ditambah dan ditiadakan dari materi **lesson 01** ini?

---

### References
1. [Linux and Unix commands](https://www.computerhope.com/unix.htm)
2. [ Referensi fungsi dan header yang ada di GNU C Library Standar IEEE ](https://pubs.opengroup.org/onlinepubs/9699919799/)

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
