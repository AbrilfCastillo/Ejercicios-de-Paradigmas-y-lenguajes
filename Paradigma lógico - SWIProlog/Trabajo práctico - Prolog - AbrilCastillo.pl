%Ejercicios de Prolog

 %Ejercicio N°1:Las edades

 familiar(roberto,95).
 familiar(isabel,87).
 familiar(ana,57).
 familiar(marcelo,61).
 familiar(martin,37).
 familiar(sara,32).
 familiar(matias,5).
 familiar(steffano,2).
 familiar(amalia,48).
 familiar(oscar,37).
 familiar(andrea,34).
 familiar(esteban,17).
 familiar(tiziana,5).


 bebe(X):-familiar(X,Y),(Y=<2).
 niño(X):-familiar(X,Y),(Y>=3,Y=<9).
 adolescente(X):-familiar(X,Y),(Y>=10,Y=<20).
 adulto(X):-familiar(X,Y),(Y>=21,Y=<69).
 anciano(X):-familiar(X,Y),(Y>=70).

 edad(X,Y):-familiar(X,Y).


 %Ejercicio N°2: Mayor o menor

 mayor_que(X,Y):-edad(X,A),edad(Y,B), (A>B).
 menor_que(X,Y):-edad(X,A),edad(Y,B), (A<B).
 igual_que(X,Y):-edad(X,A),edad(Y,B), (A=:=B).


 %Ejercicio N°3: Los parentescos
 padre(roberto,ana).
 padre(roberto,amalia).
 padre(roberto,oscar).
 padre(marcelo,martin).
 padre(martin,matias).
 padre(martin,steffano).
 padre(oscar,esteban).
 padre(oscar,tiziana).

 esposo(roberto,isabel).
 esposo(marcelo,ana).
 esposo(martin,sara).
 esposo(oscar,andrea).

 hermano(H1,H2):-padre(P,H1),padre(P,H2),H1\=H2.

 hijo(H,P):-padre(P,H).
 hijo(H,M):-padre(P,H),esposo(P,M).

 cuñado(C1,C2):-(hermano(C1,H),esposo(C2,H));(hermano(C2,H),esposo(C1,H)),(C1\=C2).

 %Cuñadas:
 cuñado(C1,C2):-(hermano(H,C1),esposo(H,C2));(hermano(H,C2),esposo(H,C1)),(C1\=C2).


 tio(T,S):-(hermano(T,P); cuñado(T,P)),hijo(S,P).

 primo(P1,P2):-hijo(P1,Pp1),hijo(P2,Pp2),hermano(Pp1,Pp2).

 abuelo(A,N):-hijo(P,A),hijo(N,P).

 nieto(N,A):-hijo(P,A),hijo(N,P).

 bisabuelo(BA,BN):-hijo(A,BA),nieto(BN,A).

 bisnieto(BN,BA):-hijo(A,BA),nieto(BN,A).


 %Ejercicio N°4: Densidad de Poblaciones

 poblacion(capital, 180219).
 poblacion(sanagasta, 2330).
 poblacion(chilecito, 42248).
 poblacion(vinchina, 2834).

 superficie(capital, 13638).
 superficie(sanagasta, 1711).
 superficie(chilecito, 4846).
 superficie(vinchina, 10334).

 densidad(N,D):-poblacion(N,P), superficie(N,S), D is (P/S).
 mayor_densidad(X,Y):-densidad(X, D1),densidad(Y, D2),(D1>D2).
 menor_densidad(X, Y):-densidad(X, D1),densidad(Y, D2),(D1<D2).
 igual_densidad(X, Y):-densidad(X, D1),densidad(Y, D2),(D1 =:= D2).


 %Ejercicio N°5:Poblaciones Vecinas

 vecino(capital,sanagasta).
 vecino(capital,chilecito).
 vecino(sanagasta,capital).
 vecino(sanagasta,chilecito).
 vecino(chilecito,capital).
 vecino(chilecito,sanagasta).
 vecino(chilecito,vinchina).
 vecino(vinchina,chilecito).


 habitante(luis,capital).
 habitante(clara,capital).
 habitante(santino,capital).
 habitante(ana,sanagasta).
 habitante(jose,sanagasta).
 habitante(amira,vinchina).
 habitante(jorge,vinchina).
 habitante(sonia,chilecito).
 habitante(julieta,chilecito).
 habitante(eduardo,chilecito).

 viveProvinciaVecina(H1,H2):-habitante(H1,L1),habitante(H2,L2),vecino(L1,L2).

 %Ejercicio N°6: Turismo Riojano

 turistas(capital,100,2010).
 turistas(capital,234,2011).
 turistas(sanagasta,79,2010).
 turistas(sanagasta,151,2011).
 turistas(chilecito,54,2010).
 turistas(chilecito,101,2011).
 turistas(vinchina,38,2010).
 turistas(vinchina,47,2011).

 turismoAtractivo(D,A):-turistas(D,C,A),(C>100).


