switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(1,254,0,0,3,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110100002_01_000");
    MsgDisp("Kazama","Did you win the practice match?
I heard it was a beautiful victory.");
    MsgDisp("主人公","Yeah, I did my best!");
    MsgDisp("主人公","(｛風真＊＊｝ even heard
about the win. I'm so glad!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,254,0,2,3,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110100002_01_010");
    MsgDisp("Kazama","Cute and strong go hand in
hand, huh.");
    MsgDisp("主人公","What?!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("X110100002_01_020");
    MsgDisp("Kazama","The Judo team won all the practice
matches, right? You really know how to
multitask.");
    MsgDisp("主人公","(｛風真＊＊｝ gave me a compliment!
Cute and strong......
I'm really happy!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
