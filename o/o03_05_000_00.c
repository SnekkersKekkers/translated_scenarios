BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,30,0,3,4,-1,-1,0,0);
    ScrFadeIn(0);
    ChMotion(5,4);
    VoicePlay("O030500000_05_000");
    MsgDisp("Hiiragi","To think we would achieve first......
Splendid.");
    MsgDisp("主人公","(We did it, first place!
A victory for both of us!)");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,30,0,3,3,-1,-1,0,0);
    ScrFadeIn(0);
    ChMotion(5,3);
    Wait(10,0);
    VoicePlay("O030500000_05_010");
    MsgDisp("Hiiragi","We have done it.
It is thanks to your efforts.");
    MsgDisp("主人公","(We did it, first place!
A victory for both of us!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,30,4,4,4,0,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030500000_05_020");
    MsgDisp("Hiiragi","Haa......");
    MsgDisp("主人公","｛柊＊＊＊｝, we did it!
We're first place!");
    ChMotion(5,3);
    Wait(23,0);
    ChEye(5,3);
    ChMouth(5,3);
    ChEyeOpenLevel(5,-1);
    VoicePlay("O030500000_05_030");
    MsgDisp("Hiiragi","Yes, thank you! I was able to
experience the joy of running through
the tape first, thanks to you.");
    MsgDisp("主人公","(We did it, first place!
A victory for both of us!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
