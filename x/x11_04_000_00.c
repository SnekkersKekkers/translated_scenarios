MsgClose();
ChNanaType(0);
ChOpen(4,254,0,0,0,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    VoicePlay("X110400000_04_000");
    MsgDisp("Nanatsumori","Yo. I heard the baseball team won the
practice game. Congratulations.");
    MsgDisp("主人公","｛七ツ森＊｝,thank you!");
    MsgDisp("主人公","(Yeah, I'm a baseball manager.
I'm glad I did my best ......!)");
    break ;
    case 4:
    case 5:
    VoiceEVSPlay(4);
    VoicePlay("X110400000_04_010");
    MsgDisp("Nanatsumori","｛主人公｝,congrats. I heard you won the
baseball team's practice game.");
    MsgDisp("主人公","Ah,｛七ツ森＊｝.
That's right!");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("X110400000_04_020");
    MsgDisp("Nanatsumori","The guys in the club were all \"thanks to
the manager.\" They were so happy and
smiling. It's kind of frustrating ......");
    MsgDisp("主人公","(Is ｛七ツ森＊｝ jealous?
But I'm glad to hear your praise!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
