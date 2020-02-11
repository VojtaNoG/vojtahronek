// Popište, jakým způsobem chápete Dependency Inversion Principle. Uveďte vlastní příklad, na kterém to vysvětlete.

/*

DIP je způsob programování, u kterého při navrhování a psaní kódu dbáme na to, aby každá část programu mohla stát sama o sobě. Abychom jakoukoli část tohoto programu mohli vzít, upravit či ji použít v jiném programu bez jakékoli změny kódu. Díky tomu se pak upravování programu stává mnohem jednodušším, protože stačí upravit pouze tuto část. Nemusíme tak zasahovat do zbytku kódu našeho programu, jen do dané části, která "dokáže stát sama o sobě".

Příkladem by mohl být třeba task05, kde jsme definovali dvě ryze virtuální metody (waitForButton() a hello()). Implementaci pro každou platformu jsme pak definovali v odvozené třídě z hlavní rodičovské třídy, která tyto metody obsahuje. Pro každou platformu jsme pak definovali vlastní implementaci těchto virtálních metod. Základ programu stále zůstává stejný, pouze upravujeme virtuální metody (abstraktní třídy) pro danou platformu. Můj task05, uvedený zde na Githubu, není zcela správně navržen podle DIP. Metody v hlavní třídě by měly být ryze virtuální.

Skvěle vysvětleno: https://springframework.guru/principles-of-object-oriented-design/dependency-inversion-principle/

*/
