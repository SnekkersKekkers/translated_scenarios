switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(1,254,0,2,3,-1,-1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110100003_01_000");
    MsgDisp("Kazama","Congrats.
I heard you did a really difficult move.
Just don't do anything too dangerous.");
    MsgDisp("主人公","Yeah, thanks!");
    MsgDisp("主人公","(Receiving a compliment makes me
happy...... I'll try not to worry him too
much!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,254,0,4,3,-1,-1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110100003_01_010");
    MsgDisp("Kazama","Congrats.
I heard you had a great performance?");
    MsgDisp("主人公","Yeah, my new technique was
a success during the practice match.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("X110100003_01_020");
    MsgDisp("Kazama","I have no doubt it was a beautiful
victory...... I heard there were a lot of
spectators at your preformance.");
    MsgDisp("主人公","(Yay!
I'm glad I've been working hard at the 
Rythmic Gymnastics club!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
