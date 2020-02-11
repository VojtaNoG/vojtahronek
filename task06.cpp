// Popište, jakým zpùsobem chápete Dependency Inversion Principle. Uveïte vlastní pøíklad, na kterém to vysvìtlete.

/*

DIP je zpùsob programování, u kterého pøi navrhování a psaní kódu dbáme na to, aby každá èást programu mohla stát sama o sobì. Abychom jakoukoli èást tohoto programu mohli vzít, upravit èi ji použít v jiném programu bez jakékoli zmìny kódu. Díky tomu se pak upravování programu stává mnohem jednodušším, protože staèí upravit pouze tuto èást. Nemusíme tak zasahovat do zbytku kódu našeho programu, jen do dané èásti, která "dokáže stát sama o sobì".

Pøíkladem by mohl být tøeba task05, kde jsme definovali dvì ryze virtuální metody (waitForButton() a hello()). Implementaci pro každou platformu jsme pak definovali v odvozené tøídì z hlavní rodièovské tøídy, která tyto metody obsahuje. Pro každou platformu jsme pak definovali vlastní implementaci tìchto virtálních metod. Základ programu stále zùstává stejný, pouze upravujeme virtuální metody (abstraktní tøídy) pro danou platformu. Mùj task05, uvedený zde na Githubu, není zcela správnì navržen podle DIP. Metody v hlavní tøídì by mìly být ryze virtuální...

Skvìle vysvìtleno: https://springframework.guru/principles-of-object-oriented-design/dependency-inversion-principle/

*/