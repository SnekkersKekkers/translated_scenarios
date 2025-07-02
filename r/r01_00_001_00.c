BGOpen("ne100",0);
BGMPlay("BGM_XMAS_SHOP",0.01);
ScrFadeIn(0);
MsgDisp("主人公","What should I buy?");
MsgSel("１ Rich Present","１０ Rich Present");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
