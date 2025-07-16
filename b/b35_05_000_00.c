BGDateAfterOpen();
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("B350500000_05_000");
MsgDisp("Hiiragi?","｛主人公｝.");
MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,0);
MsgDisp("主人公","What's wrong, ｛柊＊＊＊｝?");
ChEye(5,4);
ChMotion(5,4);
VoicePlay("B350500000_05_010");
MsgDisp("Hiiragi","I was reluctant to part, so I stayed
behind.
And then, I saw that you were still here.");
MsgDisp("主人公","Hehe, I see.");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("B350500000_05_020");
MsgDisp("Hiiragi","That's right.
So, won't you stay with me a little
longer?");
MsgSel("Yeah, of course!","There's something I have to take care of...");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B350500000_05_030");
    MsgDisp("Hiiragi","I'm glad.
In truth, I had a place in mind.
Let's go.");
    break ;
    case 1:
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,2);
    ChEyeOpenLevel(5,9);
    VoicePlay("B350500000_05_040");
    MsgDisp("Hiiragi","I see.
Well, I shouldn't push my luck.");
    MsgDisp("主人公","I'm sorry.");
    ChMotion(5,0);
    ChEyeOpenLevel(5,0);
    Wait(8,0);
    ChEye(5,4);
    ChMouth(5,4);
    VoicePlay("B350500000_05_050");
    MsgDisp("Hiiragi","No, thanks to you everyone won't get mad
at me.
Well, I'll cool my head and go home.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(Even though he went out of his way to
invite me, I made him feel guilty...)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
