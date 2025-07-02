switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","My team is......
Ah, I'm with ｛颯砂＊＊｝.");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(2,30,3,0,4,-1,-1,0,0);
    VoicePlay("O040201000_02_000");
    MsgDisp("Sassa","Oh, we're in the same team.
Let's do this!");
    MsgDisp("主人公","Yeah, let's.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("O040201000_02_010");
    MsgDisp("Sassa","Even if it's just the ball toss,
let's not slack off.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,0);
    VoicePlay("O040201000_02_020");
    MsgDisp("Sassa","Alright,
I'm gonna put every single ball
into the basket!");
    break ;
    case 3:
    MsgDisp("主人公","Hm, my team is......");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(2,30,0,0,4,-1,-1,0,0);
    VoicePlay("O040201000_02_030");
    MsgDisp("Sassa","Oh, nice, we're in the same team.
Let's do this!");
    MsgDisp("主人公","Yeah, let's.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("O040201000_02_040");
    MsgDisp("Sassa","Alright, we're definitely
winning this match!
Let's both do our best!");
    MsgDisp("主人公","Yeah!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("O040201000_02_050");
    MsgDisp("Sassa","Hmhm, I'll get all of them in.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Who was it on my team......");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(2,30,3,0,4,-1,-1,0,0);
    VoicePlay("O040201000_02_060");
    MsgDisp("Sassa","You're on my team.
Let's do our best together!");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Yeah!");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("O040201000_02_070");
    MsgDisp("Sassa","If I'm with you,
I don't feel like losing at all.");
    MsgDisp("主人公","Even if you weren't with me,
Wouldn't you still win, ｛颯砂＊＊｝?");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("O040201000_02_080");
    MsgDisp("Sassa","That's true, but when I'm with you,
that feeling is even stronger.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("O040201000_02_090");
    MsgDisp("Sassa","Ball tosses and relays
are the same when it comes to winning.
Let's aim for victory together!");
    MsgDisp("主人公","Yeah!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
