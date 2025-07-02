BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,30,0,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040600000_06_000");
    MsgDisp("Himuro","Well, as expected.");
    MsgDisp("主人公","(We won!
I'm glad we all did our best.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,30,0,0,3,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040600000_06_010");
    MsgDisp("Himuro","Hm, how easy.");
    MsgDisp("主人公","(We won!
I'm glad we all did our best.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,30,3,0,3,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040600000_06_020");
    MsgDisp("Himuro","Nice control.");
    MsgDisp("主人公","(We won!
I'm glad we all did our best.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
