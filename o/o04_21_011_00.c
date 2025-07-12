MsgClose();
ChOpen(21,30,7,0,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    ChMotion(21,0);
    VoicePlay("O042101100_21_000");
    MsgDisp("Michiru","Hehe, let's enjoy ourselves.");
    break ;
    case 3:
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    ChEyeOpenLevel(21,8);
    VoicePlay("O042101100_21_010");
    MsgDisp("Michiru","Mari's my opponent?
Then, maybe I'll have to get serious?");
    break ;
    case 4:
    case 5:
    ChEye(21,3);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("O042101100_21_020");
    MsgDisp("Michiru","Hehe.
No matter who wins, let's have fun!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
