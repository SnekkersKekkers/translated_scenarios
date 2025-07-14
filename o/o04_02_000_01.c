BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,30,4,2,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040200001_02_000");
    MsgDisp("Sassa","Guh...... Seriously!?
This sucks!");
    MsgDisp("主人公","(We lost......
I should've tried harder.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,30,3,2,0,0,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040200001_02_010");
    MsgDisp("Sassa","I hate losing in any kind of competition.
Aah, so frustrating!");
    MsgDisp("主人公","(We lost......
I should've tried harder.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,30,2,2,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040200001_02_020");
    MsgDisp("Sassa","Seriously...... I wanted to win for you.
This sucks......");
    MsgDisp("主人公","(We lost......
I should've tried harder.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
