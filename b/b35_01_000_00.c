BGDateAfterOpen();
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(1);
VoicePlay("B350100000_01_000");
MsgDisp("Kazama?","｛主人公｝.");
MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛風真＊＊｝.
What's wrong?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("B350100000_01_010");
MsgDisp("Kazama","I forgot something.");
MsgDisp("主人公","Eh?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B350100000_01_020");
MsgDisp("Kazama","It's you.");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,#1);
VoicePlay("B350100000_01_030");
MsgDisp("Kazama","After this, won't you keep 
me company a bit longer?");
MsgSel("Yeah, of course!","I have some errands...");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B350100000_01_040");
    MsgDisp("Kazama","That's right.");
    MsgDisp("主人公","Hehe.
What should we do now?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B350100000_01_050");
    MsgDisp("Kazama","Now, it's a real date.
Let's go?");
    break ;
    case 1:
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B350100000_01_060");
    MsgDisp("Kazama","I see...");
    MsgDisp("主人公","Sorry, okay?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B350100000_01_070");
    MsgDisp("Kazama","Don't apologize.
I only came to pick up something
I forgot. You should be careful
on your way home as well.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("主人公","(I wonder if I messed up...)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
