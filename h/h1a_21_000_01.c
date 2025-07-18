BGOpen("sc620",0);
ChLayout(1);
switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ChOpen(21,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H1A2100001_21_000");
    MsgDisp("Michiru","Good work.");
    MsgDisp("主人公","｛みちる＊｝, we lost...");
    ChEye(21,0);
    ChMouth(21,4);
    ChMotion(21,3);
    VoicePlay("H1A2100001_21_010");
    MsgDisp("Michiru","That's what competition is.
But I'll never forget everyone's bravery,
and yours, Mari.");
    MsgDisp("主人公","(That's true.
We might have lost, but I'm glad that I
stayed as the baseball club manager...)");
    break ;
    case 4:
    case 5:
    ChOpen(21,254,0,4,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H1A2100001_21_020");
    MsgDisp("Michiru","Mari...good work out there.");
    MsgDisp("主人公","｛みちる＊｝, we lost...");
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,3);
    VoicePlay("H1A2100001_21_030");
    MsgDisp("Michiru","I see.
But it was a wonderful match.");
    ChEye(21,4);
    ChMouth(21,0);
    ChMotion(21,4);
    VoicePlay("H1A2100001_21_040");
    MsgDisp("Michiru","The players were doing their best, and so
were you, Mari, cheering for them.
It moved me so much I cried.");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("H1A2100001_21_050");
    MsgDisp("Michiru","So don't be too discouraged.
Let's keep our heads up!");
    MsgDisp("主人公","(That's right...!
We might have lost, but I'm glad that I
stayed as the baseball club manager!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
