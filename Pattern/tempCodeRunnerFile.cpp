for(int i=i;i<=n-1;i++){
        for(int j=n-i;j>0;j--){
            cout<<"*";
        }
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        for(int j=n-i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }