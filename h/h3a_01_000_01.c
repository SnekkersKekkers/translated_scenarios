BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_D",0.01);
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(1);
    VoicePlay("H3A0100001_01_000");
    MsgDisp("Kazama","｛主人公｝, I thought it was a good match.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝...
But I lost...");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H3A0100001_01_010");
    MsgDisp("Kazama","Hey, don't make that face.
If I was the referee, I would've declared
you the winner.");
    MsgDisp("主人公","Hehe, but you're not.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H3A0100001_01_020");
    MsgDisp("Kazama","But it's true that you did your best.
Today's results aren't everything.");
    MsgDisp("主人公","(｛風真＊＊｝ is so kind...
But I really wanted to win.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_D",0.01);
    ChOpen(1,254,0,4,2,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H3A0100001_01_030");
    MsgDisp("Kazama","Did you get hurt?");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
No, I'm fine.
But I lost that last match.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    VoicePlay("H3A0100001_01_040");
    MsgDisp("Kazama","Yeah, I really can't forgive them for
that.");
    MsgDisp("主人公","It's a match, so it couldn't be helped,
you know?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H3A0100001_01_050");
    MsgDisp("Kazama","Well, at least I won't have to worry about
you for a while.");
    MsgDisp("主人公","Hehe, thanks ｛風真＊＊｝.
For worrying about me.");
    ChClose(1,0,30);
    ChLayout(0);
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(1,254,0,4,3,#1,#1,0,0,0,30);
    VoicePlay("H3A0100001_01_060");
    MsgDisp("Kazama","Honestly, I was scared to death.
But you really did your best.");
    MsgDisp("主人公","(｛風真＊＊｝...
I lost, but I'm glad I did my best.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
