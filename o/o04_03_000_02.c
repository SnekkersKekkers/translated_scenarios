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
    ChMotion(3,3);
    VoicePlay("O040300002_03_000");
    MsgDisp("Honda","A draw, huh.
It's unclear, huh?");
    MsgDisp("主人公","(A draw, huh......
But we were so close......)");
    break ;
    case 3:
    ChEye(3,1);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("O040300002_03_010");
    MsgDisp("Honda","Da!
If we just had one more......!");
    MsgDisp("主人公","(A draw, huh......
But we were so close......)");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,1);
    VoicePlay("O040300002_03_020");
    MsgDisp("Honda","Hey, is there no extra round?
I mean, isn't a draw kind of boring?");
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
ChClose(3,0,0);
