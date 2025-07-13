BGOpen("sc810",0);
ScrFadeIn(0);
MsgDisp("主人公","I wonder what to do with today's free
time......");
MsgSel("Go out as a group","Go out with one person");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
