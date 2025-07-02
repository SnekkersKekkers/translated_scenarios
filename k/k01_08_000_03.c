BGOpen("ne100",1);
ScrFadeIn(0);
MsgDisp("主人公","What should I buy as a present?");
MsgSelRand(3,"Handmade birthday card (3 Rich)","Hair care set (1 Rich)","Haba High brochure (1 Rich)");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    case 2:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
