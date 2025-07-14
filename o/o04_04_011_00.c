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
    VoicePlay("O040401100_04_000");
    MsgDisp("Nanatsumori","Yo.");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040401100_04_010");
    MsgDisp("Nanatsumori","You're on the other team, huh.
Go easy on us......");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,2,1,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(4,1,1);
    VoicePlay("O040401100_04_020");
    MsgDisp("Nanatsumori","Seriously!? Why are you on the other
team!? You're normally on mine.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
