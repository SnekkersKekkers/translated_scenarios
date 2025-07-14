MsgClose();
BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
ChOpen(7,37,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("O040700002_07_000");
    MsgDisp("Mikage","A draw, huh?
I want to go again.");
    MsgDisp("主人公","(A draw, huh......
how frustrating.)");
    break ;
    case 3:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("O040700002_07_010");
    MsgDisp("Mikage","I see......
If only we had one more.");
    MsgDisp("主人公","(A draw, huh......
how frustrating.)");
    break ;
    case 4:
    case 5:
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("O040700002_07_020");
    MsgDisp("Mikage","One more time!
......I guess we can't.");
    MsgDisp("主人公","(A draw, huh......
how frustrating.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
