BGOpen("ne100",1);
ScrFadeIn(0);
MsgDisp("主人公","What should I buy as a present?");
MsgSelRand(3,"Handmade Molly patch  (3 Rich)","Boots (1 Rich)","Hair straightener set (1 Rich)");
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
