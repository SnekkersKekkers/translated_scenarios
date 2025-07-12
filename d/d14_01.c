int  var0 =PlChk(34);
int  var1 =PlChk(35);
int  var2 =PlChk(36);
int  var3 =0;
int  var4 =1;
int  var5 =0;
int  var6 =0;
if ( var0 ==0|| var0 ==#1){
    return ;
    }
if ( var0 !=21&& var0 !=22){
    if (Rand(0,99)<80){
        CGSchoolMeal(5);
        Call("d/d14_00_002_00");
        while ( var4 ==1){
            MsgExSel(6);
             var3 =PlChk(42);
            if (PlPrmGet(7)>= var3 ){
                Call("d/d14_00_002_01");
                 var4 =0;
                PlPrmAdd(7,#1* var3 );
                switch ( var3 ){
                    case 0:
                    break ;
                    case 1:
                    PlPrmTblAdd(67);
                    break ;
                    case 2:
                    PlPrmTblAdd(68);
                    break ;
                    default :
                    PlPrmTblAdd(69);
                    break ;
                    }
                }
            else {
                Call("d/d14_00_001_00");
                }
            }
        CGSchoolMeal(4);
        CGSchoolMeal(1);
        Call("d/d14_{0}_999_20", var0 );
        Call("d/d14_{0}_999_20", var1 );
        if ( var2 !=0&& var2 !=#1){
            Call("d/d14_{0}_999_20", var2 );
            }
        Call("d/d14_00_999_10");
         var5 =PlChk(39);
         var6 =PlChk(38);
        if ( var5 !=#1){
            Call("d/d14_{0}_010_{1}", var6 , var5 );
            }
        if ( var5 >=50){
            ChPrmTblAdd( var6 ,138);
            }
        else if ( var5 >=10){
            ChPrmTblAdd( var6 ,139);
            }
        else if ( var5 ==0){
            ChPrmTblAdd( var6 ,140);
            }
        else if ( var5 ==1){
            ChPrmTblAdd( var6 ,141);
            }
        else if ( var5 ==2|| var5 ==4){
            ChPrmTblAdd( var6 ,142);
            }
        else {
            ChPrmTblAdd( var6 ,143);
            }
        }
    else {
        CGSchoolMeal(4);
        CGSchoolMeal(1);
        Call("d/d14_00_003_00");
        while ( var4 ==1){
            CGSchoolMeal(2);
             var6 =PlChk(40);
            switch ( var6 ){
                case 1:
                MsgDisp("主人公","(I'll get the same as ｛風真＊＊｝,
｛学食メニュー｝......)");
                break ;
                case 2:
                MsgDisp("主人公","(I'll get the same as ｛颯砂＊＊｝,
｛学食メニュー｝......)");
                break ;
                case 3:
                MsgDisp("主人公","(I'll get the same as ｛本多＊＊｝,
｛学食メニュー｝......)");
                break ;
                case 4:
                MsgDisp("主人公","(I'll get the same as ｛七ツ森＊＊｝,
｛学食メニュー｝......)");
                break ;
                case 5:
                MsgDisp("主人公","(I'll get the same as ｛柊＊＊｝,
｛学食メニュー｝......)");
                break ;
                case 6:
                MsgDisp("主人公","(I'll get the same as ｛氷室＊＊｝,
｛学食メニュー｝......)");
                break ;
                case 7:
                MsgDisp("主人公","(I'll get the same as ｛御影＊＊｝,
｛学食メニュー｝......)");
                break ;
                default :
                MsgDisp("主人公","(I'll get the ｛学食メニュー｝......)");
                break ;
                }
            MsgExSel(7);
            if (MsgExSelRsltGet()==0){
                 var3 =PlChk(42);
                if (PlPrmGet(7)>= var3 ){
                     var4 =0;
                    PlPrmAdd(7,#1* var3 );
                    switch ( var3 ){
                        case 0:
                        break ;
                        case 1:
                        PlPrmTblAdd(67);
                        break ;
                        case 2:
                        PlPrmTblAdd(68);
                        break ;
                        default :
                        PlPrmTblAdd(69);
                        break ;
                        }
                    }
                else {
                    Call("d/d14_00_001_00");
                    }
                }
            }
         var6 =PlChk(40);
        switch ( var6 ){
            case 1:
            Call("d/d14_00_003_01");
            break ;
            case 2:
            Call("d/d14_00_003_02");
            break ;
            case 3:
            Call("d/d14_00_003_03");
            break ;
            case 4:
            Call("d/d14_00_003_04");
            break ;
            case 5:
            Call("d/d14_00_003_05");
            break ;
            case 6:
            Call("d/d14_00_003_06");
            break ;
            case 7:
            Call("d/d14_00_003_07");
            break ;
            default :
            Call("d/d14_00_003_99");
            break ;
            }
        if ( var6 >0){
            ChPrmTblAdd( var6 ,144);
            }
         var5 =PlChk(41);
        if ( var5 !=#1&& var6 !=0&& var6 !=#1){
            Call("d/d14_{0}_011_{1}", var6 , var5 );
            }
        }
    }
else {
    PlPrmAdd(7,#1);
    PlPrmTblAdd(67);
    CGSchoolMeal(4);
    CGSchoolMeal(1);
    }
