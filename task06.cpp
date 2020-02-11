// Popi�te, jak�m zp�sobem ch�pete Dependency Inversion Principle. Uve�te vlastn� p��klad, na kter�m to vysv�tlete.

/*

DIP je zp�sob programov�n�, u kter�ho p�i navrhov�n� a psan� k�du db�me na to, aby ka�d� ��st programu mohla st�t sama o sob�. Abychom jakoukoli ��st tohoto programu mohli vz�t, upravit �i ji pou��t v jin�m programu bez jak�koli zm�ny k�du. D�ky tomu se pak upravov�n� programu st�v� mnohem jednodu���m, proto�e sta�� upravit pouze tuto ��st. Nemus�me tak zasahovat do zbytku k�du na�eho programu, jen do dan� ��sti, kter� "dok�e st�t sama o sob�".

P��kladem by mohl b�t t�eba task05, kde jsme definovali dv� ryze virtu�ln� metody (waitForButton() a hello()). Implementaci pro ka�dou platformu jsme pak definovali v odvozen� t��d� z hlavn� rodi�ovsk� t��dy, kter� tyto metody obsahuje. Pro ka�dou platformu jsme pak definovali vlastn� implementaci t�chto virt�ln�ch metod. Z�klad programu st�le z�st�v� stejn�, pouze upravujeme virtu�ln� metody (abstraktn� t��dy) pro danou platformu. M�j task05, uveden� zde na Githubu, nen� zcela spr�vn� navr�en podle DIP. Metody v hlavn� t��d� by m�ly b�t ryze virtu�ln�...

Skv�le vysv�tleno: https://springframework.guru/principles-of-object-oriented-design/dependency-inversion-principle/

*/