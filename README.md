# C ile Basit Şifreleme Programı #
Bu proje, C programlama dili kullanılarak oluşturulmuş basit bir şifreleme ve çözme uygulamasıdır. Program, kullanıcıdan alınan bir metni belirlenen bir yöntemle şifreleyerek okunamaz hale getirir ve isteğe bağlı olarak tekrar çözebilir.

## Özellikler ##
Kullanıcıdan alınan metni şifreler
Şifreli metni tekrar çözüp orijinal haline getirir
Kolayca değiştirilebilir ve geliştirilebilir basit yapı
Kullanılan Şifreleme Yöntemi
Bu projede Sezar Şifreleme (Caesar Cipher) yöntemi kullanılmıştır. Bu yöntemde her harf, alfabede belirlenen bir kaydırma miktarı kadar ötelenir. Örneğin, kaydırma değeri 3 ise:

A → D, B → E, C → F şeklinde kaydırma uygulanır.
Şifre çözme işlemi ise ters kaydırma yaparak gerçekleştirilir.


*Nasıl Kullanılır?*
Projeyi bilgisayarınıza indirin veya klonlayın:
sh
Kopyala
Düzenle
git clone https://github.com/kullanici_adiniz/sifreleme-projesi.git
cd sifreleme-projesi
Kodu derleyin ve çalıştırın:
sh
Kopyala
Düzenle
gcc sifreleme.c -o sifreleme
./sifreleme
Ekrandaki talimatları takip ederek şifreleme veya şifre çözme işlemi yapın.
Örnek Kullanım
yaml
Kopyala
Düzenle
Metni girin: hello
Şifreli metin: khoor
Çözülmüş metin: hello



*Geliştirme Önerileri*
Farklı şifreleme algoritmaları eklenebilir (örn: Vigenère Cipher, AES).
Dosya şifreleme özelliği eklenebilir.
Kullanıcıdan özel anahtar alma seçeneği eklenebilir.
*Lisans*
Bu proje açık kaynaklıdır ve herkes tarafından geliştirilebilir.
