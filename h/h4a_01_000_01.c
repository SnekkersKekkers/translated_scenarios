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
    ChOpen(1,254,0,4,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H4A0100001_01_000");
    MsgDisp("Kazama","Good work.
You did your best.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝......");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("H4A0100001_01_010");
    MsgDisp("Kazama","Don't make that face.
You really impressed me out there.");
    MsgDisp("主人公","O-Okay.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H4A0100001_01_020");
    MsgDisp("Kazama","It's okay.
The audience saw what you wanted to
convey.");
    MsgDisp("主人公","Hehe, you're pretty nice,
｛風真＊＊｝.
Thanks.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H4A0100001_01_030");
    MsgDisp("Kazama","Honestly, I was a little relieved.
I'd be in trouble if you won and went out
of reach.");
    MsgDisp("主人公","(I'm disappointed that I lost, but I'm
happy to hear how ｛風真＊＊｝
feels.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_D",0.01);
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(1);
    VoicePlay("H4A0100001_01_040");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝......
Sorry you came all this way to see that.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H4A0100001_01_050");
    MsgDisp("Kazama","Why are you apologizing?
I got to see a great performance.
Thank you.");
    MsgDisp("主人公","Even though I messed up a lot......");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("H4A0100001_01_060");
    MsgDisp("Kazama","I didn't see the winning performance, but
to me, you were the best.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H4A0100001_01_070");
    MsgDisp("Kazama","Is that not enough?");
    MsgDisp("主人公","Thank you.
But it's still frustrating......");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1,0,30);
    ChLayout(0);
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_D",0.01);
    ChOpen(1,254,0,0,3,#1,#1,0,0,0,30);
    VoicePlay("H4A0100001_01_080");
    MsgDisp("Kazama","It's proof that you tried your hardest.
So stick out your chest proudly until the
end.");
    ChEye(1,0);
    ChMouth(1,4);
    ChMotion(1,0);
    VoicePlay("H4A0100001_01_090");
    MsgDisp("Kazama","I'll watch the closing ceremony with you,
as your close associate.");
    MsgDisp("主人公","Hehe.
I'm glad you came, ｛風真＊＊｝.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("H4A0100001_01_100");
    MsgDisp("Kazama","That's the face I wanted to see.
Come on, let's go.");
    MsgDisp("主人公","......Yeah!");
    MsgDisp("主人公","(I'm frustrated that I didn't win,
but...... I worked hard. Thank you,
｛風真＊＊｝...... )");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
