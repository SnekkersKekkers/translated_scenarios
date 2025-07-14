MsgClose();
ChLayout(1);
ChOpen(7,37,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("O040701100_07_000");
    MsgDisp("Mikage","I'm participating too!
Let's all do our best!");
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("O040701100_07_010");
    MsgDisp("Mikage","I'm competing on this team!
I won't lose even if I'm against you, you
know?");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("O040701100_07_020");
    MsgDisp("Mikage","I'm in too!
So, this team is going to win!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
