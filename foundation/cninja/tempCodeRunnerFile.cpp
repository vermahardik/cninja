int fir,sec,thi,fou,fif,six,sev,eig,nin,n,evsum,odsum;
    cout << "Enter integer N" <<endl;
    cin >> n;
    if ( n>=0 && n<=100000000){
        fir=n%10;
        sec=(((n%100)-fir)/10);
        thi=(((n%1000)-sec)/100);
        fou=(((n%10000)-thi)/1000);
        fif=(((n%100000)-fou)/10000);
        six=(((n%1000000)-fif)/100000);
        sev=(((n%10000000)-six)/1000000);
        eig=(((n%100000000)-sev)/10000000);
        nin=(n/100000000);
        if (fir%2==0){
            evsum=evsum+fir;
        }
        else {
            odsum=odsum+fir;
        }


        if (sec%2==0){
            evsum=evsum+sec;
        }
        else {
            odsum=odsum+sec;
        }
        if (thi%2==0){
            evsum=evsum+thi;
        }
        else {
            odsum=odsum+thi;
        }
        if (fou%2==0){
            evsum=evsum+fou;
        }
        else {
            odsum=odsum+fou;
        }
        if (fif%2==0){
            evsum=evsum+fif;
        }
        else {
            odsum=odsum+fif;
        }
        if (six%2==0){
            evsum=evsum+six;
        }
        else {
            odsum=odsum+six;
        }
        if (sev%2==0){
            evsum=evsum+sev;
        }
        else {
            odsum=odsum+sev;
        }
        if (eig%2==0){
            evsum=evsum+eig;
        }
        else {
            odsum=odsum+eig;
        }
            odsum=odsum+nin;
        

    }
    cout << evsum << endl << odsum <<endl;