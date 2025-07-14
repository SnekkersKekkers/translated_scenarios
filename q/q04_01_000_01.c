switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("Q040100001_01_000");
    MsgDisp("Kazama","Okay!
Let's go where you want to go.");
    MsgDisp("主人公","Yay!");
    break ;
    case 3:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("Q040100001_01_010");
    MsgDisp("Kazama","Let's go.
I was looking for you just now too.");
    MsgDisp("主人公","I'm glad!");
    break ;
    case 4:
    case 5:
    ChEye(1,0);
    ChMouth(1,4);
    ChMotion(1,3);
    VoicePlay("Q040100001_01_020");
    MsgDisp("Kazama","I was supposed to ask you.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("Q040100001_01_030");
    MsgDisp("Kazama","I guess I lost.
I'll spend the entire day with you.");
    MsgDisp("主人公","(Yay! I'm happy I'll able to look around
with ｛風真＊＊｝. )");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
