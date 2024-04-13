int reinicio(){
    funcion:;
    cout<<"\n Reiniciar?   si(1)/no(0)\n";
    cin>>opcion;
    if(opcion==1){
        main();
    }
    else if (opcion==0){
        exit;
    }
    else{
        cout<<"\n Opcion no valida, volver a intentar \n";
        reinicio();
    };
    return 0;}
