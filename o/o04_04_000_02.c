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
    ChOpen(4,30,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040400002_04_000");
    MsgDisp("Nanatsumori","A tie?
So this can happen, too.");
    MsgDisp("主人公","(A draw, huh......
But we were so close......)");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,2,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040400002_04_010");
    MsgDisp("Nanatsumori","Seriously!?
Didn't it look like we were in the lead?");
    MsgDisp("主人公","(A draw, huh......
But we were so close......)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,2,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040400002_04_020");
    MsgDisp("Nanatsumori","Isn't this unsatisfying?
Both of us put so much effort in.");
    MsgDisp("主人公","(A draw, huh......
But we were so close......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
