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
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("O040300000_03_000");
    MsgDisp("Honda","Huh, we won?
Ooh?");
    MsgDisp("主人公","(We did it!
I'm glad we all did our best.)");
    break ;
    case 3:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("O040300000_03_010");
    MsgDisp("Honda","Da, we won!
We did it!");
    MsgDisp("主人公","(We did it!
I'm glad we all did our best.)");
    break ;
    case 4:
    case 5:
    ChSet(3,3);
    VoicePlay("O040300000_03_020");
    MsgDisp("Honda","We did it!
It's our win!");
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
ChClose(3,0,0);
