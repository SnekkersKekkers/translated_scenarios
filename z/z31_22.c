int  var0 =1;
int  var1 =0;
int  var2 =0;
int  var3 =Rand(0,99);
int  var4 =0;
switch (ChPrmGet(22,6)){
    case 2:
    if ( var3 <50){
         var2 =1;
        }
    break ;
    case 3:
    if ( var3 <75){
         var2 =1;
        }
    break ;
    case 4:
    case 5:
    if ( var3 <90){
         var2 =1;
        }
    break ;
    }
if (ChFlgGet(22,10)==0){
    Call("z/z31_22_000_00");
    }
else {
    Call("z/z31_22_001_00");
    }
int  var5 =0;
int  var6 =1;
int  var7 =2;
int  var8 =3;
while ( var0 ==1){
    if ( var1 ==1){
        if (PlFlgGet(3)==1){
            MsgSel("What people think of me.","People's information.","Check on Mari's Garden.");
             var7 =2;
            }
        else {
            MsgSel("What people think of me.","People's information.");
            }
        }
    else {
        if (PlFlgGet(3)==1){
            MsgSel("What people think of me.","People's information.","Check on Mari's Garden.","Let's hang out.");
             var7 =2;
             var8 =3;
            }
        else {
            MsgSel("What people think of me.","People's information.","Let's hang out.");
             var7 =3;
            }
        }
    switch (MsgSelRsltGet()){
        case 0:
         var4 = var5 ;
        break ;
        case 1:
         var4 = var6 ;
        break ;
        case 2:
         var4 = var7 ;
        break ;
        case 3:
         var4 = var8 ;
        break ;
        }
    switch ( var4 ){
        case 0:
        Call("z/z32_22_000_00");
        MsgClose();
        RunChEmotion();
        break ;
        case 1:
        Call("z/z33_22_000_00");
        MsgClose();
        RunChProfile();
        break ;
        case 2:
        Call("z/z34_22_000_00");
        MsgClose();
        RunGarden();
        break ;
        case 3:
        if (ChFlgGet(22,10)==0){
            Call("z/z31_22_000_01");
            }
        else {
            Call("z/z31_22_001_01");
            }
         var1 =1;
        if ( var2 ==1){
            if (ChFlgGet(22,10)==0){
                Call("z/z35_22_000_00");
                }
            else {
                Call("z/z35_22_001_00");
                }
            Call("u/u20_22");
            PlPrmSet(31,1);
             var0 =0;
            }
        else {
            if (ChFlgGet(22,10)==0){
                Call("z/z35_22_000_01");
                }
            else {
                Call("z/z35_22_001_01");
                }
            ChFlgSet(22,7,1);
            }
        break ;
        }
    if ( var0 ==1){
        Call("z/z36_22_000_00");
        if (MsgSelRsltGet()==0){
            }
        else {
            Call("z/z37_22_000_00");
             var0 =0;
            }
        }
    }
ChFlgSet(22,10,1);
