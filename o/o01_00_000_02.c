BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY",0.01);
ScrFadeIn(0);
MsgDisp("主人公","Okay.
Should I participate in an event?");
MsgSel("Participate.","Don't participate.");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    MsgDisp("主人公","I'm not going to participate.");
    BGMStop();
    MsgClose();
    ScrFadeOut(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
