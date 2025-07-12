switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110200000_02_000");
    MsgDisp("Sassa","Did the baseball club win a practice
match?");
    MsgDisp("主人公","Yeah, we did.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("X110200000_02_010");
    MsgDisp("Sassa","Nice job.
You've been working hard!");
    MsgDisp("主人公","(Yay! I'm glad I've been working hard at
club!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110200000_02_020");
    MsgDisp("Sassa","Good for you.
The baseball team won the practice match
the other day, right?");
    MsgDisp("主人公","Yeah!
Everyone worked really hard!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("X110200000_02_030");
    MsgDisp("Sassa","With a manager like you,
the players can do their best.");
    MsgDisp("主人公","(Yay!
｛颯砂＊＊｝ complimented me!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
