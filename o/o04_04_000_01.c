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
    ChOpen(4,30,0,0,2,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(4,2,1);
    VoicePlay("O040400001_04_000");
    MsgDisp("Nanatsumori","It's hard after all......
Haa.");
    MsgDisp("主人公","(Haa...... we lost.
I should've tried harder.)");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,0,2,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(4,1,1);
    VoicePlay("O040400001_04_010");
    MsgDisp("Nanatsumori","Ball tossing is hard......
I misjudged it.");
    MsgDisp("主人公","(Haa...... we lost.
I should've tried harder.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,2,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(4,1,1);
    VoicePlay("O040400001_04_020");
    MsgDisp("Nanatsumori","Even though we both threw in so many?
The goddess of victory is fickle......");
    MsgDisp("主人公","(Haa...... we lost.
I should've tried harder.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
