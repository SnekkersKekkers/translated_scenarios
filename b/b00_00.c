int  var0 =DateInfoGet(3);
Call("b/b00_00_000_00");
MsgExSel(2);
int  var1 =MsgExSelRsltGet();
Call("b/b99_00_999_00");
switch ( var1 ){
    case 0:
    BGOpen("wf000",0);
    break ;
    case 1:
    BGOpen("fp000",0);
    break ;
    case 2:
    BGOpen("ne000",0);
    break ;
    case 3:
    BGOpen("tr000",0);
    break ;
    case 4:
    BGOpen("ho000",0);
    break ;
    }
Call("b/b00_00_000_01");
MsgExSel(3, var1 );
int  var2 =MsgExSelRsltGet();
if ( var1 != var2 ){
    Call("b/b99_00_999_00");
    }
switch ( var2 ){
    case 0:
    BGOpen("wf000",0);
    break ;
    case 1:
    BGOpen("fp000",0);
    break ;
    case 2:
    BGOpen("ne000",0);
    break ;
    case 3:
    BGOpen("tr000",0);
    break ;
    case 4:
    BGOpen("ho000",0);
    break ;
    }
ScrFadeIn(0);
if ( var0 != var2 ){
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    switch ( var2 ){
        case 0:
        BGOpen("wf000",1);
        break ;
        case 1:
        BGOpen("fp000",1);
        break ;
        case 2:
        BGOpen("ne000",1);
        break ;
        case 3:
        BGOpen("tr000",1);
        break ;
        case 4:
        BGOpen("ho000",1);
        break ;
        }
    Call("b/b00_00_000_02");
    GlWorkSet(0,3);
    }
else if ( var0 == var1 && var0 == var2 ){
    GlWorkSet(0,1);
    }
else {
    GlWorkSet(0,0);
    }
