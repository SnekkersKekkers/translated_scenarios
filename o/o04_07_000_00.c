MsgClose();
BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
ChOpen(7,37,0,0,3,-1,-1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("O040700000_07_000");
    MsgDisp("Mikage","Alright, we won!");
    MsgDisp("主人公","(We did it, a great victory!)");
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("O040700000_07_010");
    MsgDisp("Mikage","Haha, we did it!
You put in a lot, huh?");
    MsgDisp("主人公","(We did it, a great victory!)");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("O040700000_07_020");
    MsgDisp("Mikage","Alright!
It's our win!");
    MsgDisp("主人公","(We did it, a great victory!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
