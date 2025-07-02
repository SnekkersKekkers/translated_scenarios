int  var0 =1;
int  var1 =0;
int  var2 =0;
int  var3 =Rand(0,99);
switch (ChPrmGet(21,6)){
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
if (ChFlgGet(21,10)==0){
    Call("z/z31_21_000_00");
    }
else {
    Call("z/z31_21_001_00");
    }
while ( var0 ==1){
    if ( var1 ==1){
        MsgSel("Fashion secrets.","Guy's fashion preferences.");
        }
    else {
        MsgSel("Fashion secrets.","Guy's fashion preferences.","Let's hang out.");
        }
    switch (MsgSelRsltGet()){
        case 0:
        Call("z/z32_21_000_00");
        MsgClose();
        RunFasType();
        break ;
        case 1:
        Call("z/z33_21_000_00");
        MsgClose();
        RunFasFavorite();
        break ;
        case 2:
        if (ChFlgGet(21,10)==0){
            Call("z/z31_21_000_01");
            }
        else {
            Call("z/z31_21_001_01");
            }
         var1 =1;
        if ( var2 ==1){
            if (ChFlgGet(21,10)==0){
                Call("z/z35_21_000_00");
                }
            else {
                Call("z/z35_21_001_00");
                }
            Call("u/u20_21");
            PlPrmSet(31,1);
             var0 =0;
            }
        else {
            if (ChFlgGet(21,10)==0){
                Call("z/z35_21_000_01");
                }
            else {
                Call("z/z35_21_001_01");
                }
            ChFlgSet(21,7,1);
            }
        break ;
        }
    if ( var0 ==1){
        Call("z/z36_21_000_00");
        if (MsgSelRsltGet()==0){
            }
        else {
            Call("z/z37_21_000_00");
             var0 =0;
            }
        }
    }
ChFlgSet(21,10,1);
