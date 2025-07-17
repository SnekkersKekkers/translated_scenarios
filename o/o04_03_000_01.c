BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
MsgClose();
ChOpen(3,30,0,0,0,#1,#1,0,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("O040300001_03_000");
    MsgDisp("Honda","Hm?
I thought we were going pretty well.");
    MsgDisp("主人公","(Haa... we lost.
I should've tried harder.)");
    break ;
    case 3:
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,2);
    VoicePlay("O040300001_03_010");
    MsgDisp("Honda","Da, we didn't make it.");
    MsgDisp("主人公","(Haa... we lost.
I should've tried harder.)");
    break ;
    case 4:
    case 5:
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,2);
    VoicePlay("O040300001_03_020");
    MsgDisp("Honda","Strange... I'm more frustrated than I
thought I'd be. Maybe because we were on
the same team...");
    MsgDisp("主人公","(Haa... we lost.
I should've tried harder.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
