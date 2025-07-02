BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
ChNanaType(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,5,4,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040400000_04_000");
    MsgDisp("Nanatsumori","We won?
Seriously!?");
    MsgDisp("主人公","(We did it!
I'm glad we all did our best.)");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,0,3,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040400000_04_010");
    MsgDisp("Nanatsumori","Seriously!?
Looks like we won.");
    MsgDisp("主人公","(We did it!
I'm glad we all did our best.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,3,3,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040400000_04_020");
    MsgDisp("Nanatsumori","Victory!
No one can beat us. Right?");
    MsgDisp("主人公","(We did it!
I'm glad we all did our best.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
