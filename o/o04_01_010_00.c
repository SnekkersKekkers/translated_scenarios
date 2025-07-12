switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ScrFadeIn(0);
    MsgDisp("主人公","My team is......");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(1,30,0,0,0,#1,#1,0,0);
    VoicePlay("O040101000_01_000");
    MsgDisp("Kazama","Isn't this great?");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
We're together.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O040101000_01_010");
    MsgDisp("Kazama","Yeah.
There's no way we're losing.");
    MsgDisp("主人公","Yeah!");
    break ;
    case 3:
    ScrFadeIn(0);
    MsgDisp("主人公","My team is......");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(1,30,0,0,0,#1,#1,0,0);
    VoicePlay("O040101000_01_020");
    MsgDisp("Kazama","You're with me.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
Let's do our best.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O040101000_01_030");
    MsgDisp("Kazama","When we're together,
we're invincible.");
    MsgDisp("主人公","Yeah!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("O040101000_01_040");
    MsgDisp("Kazama","Let's show them all how well
we work together.");
    MsgDisp("主人公","Um...... to who?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("O040101000_01_050");
    MsgDisp("Kazama","The entire student body.
Let's go!");
    break ;
    case 4:
    case 5:
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(1,30,0,4,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040101000_01_060");
    MsgDisp("Kazama","Huh?
So this is our destiny.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
Are we on the same team?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("O040101000_01_070");
    MsgDisp("Kazama","There's no way we'd be apart.
Because that's our fate.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O040101000_01_080");
    MsgDisp("Kazama","Now that we're together,
we'll double the other team's score,
got it?");
    MsgDisp("主人公","Hehe.
Yeah, let's do our best!");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("O040101000_01_090");
    MsgDisp("Kazama","Nice.
I'll fill the basket up so much
it'll start overflowing.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
