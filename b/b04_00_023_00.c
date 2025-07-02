BGOpen("wf230",0);
ScrFadeIn(0);
MsgSel("Touch it","Don't touch it");
switch (MsgSelRsltGet()){
    case 0:
    MsgClose();
    ScrFadeOut(0);
    BGOpen("wf231",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Okay, let's touch it.)");
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
