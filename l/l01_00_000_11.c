BGOpen("ho210",1);
ScrFadeIn(0);
MsgDisp("主人公","Come to think of it,
｛みちる＊｝ and
｛ひかる＊｝ invited me
to make handmade chocolates together...");
MsgSel("I'll make chocolate with them.","I'll reject them this time.");
switch (MsgSelRsltGet()){
    case 0:
    MsgClose();
    ScrFadeOut(0);
    BGOpen("ho300",2);
    ScrFadeIn(0);
    SEPlay("EV_SE_DOOR_001");
    SEWait();
    MsgDisp("主人公","Ah, they're here!");
    MsgClose();
    ScrFadeOut(0);
    BGOpen("ho100",2);
    SEPlay("EV_SE_DOOR_022");
    ScrFadeIn(0);
    SEWait();
    ChLayout(1);
    MsgClose();
    BGMPlay("BGM_HANYOU_A",0.01);
    ChOpen(21,255,0,0,0,#1,#1,0,1,0,30);
    ChOpen(22,255,0,0,3,#1,#1,0,2,0,30);
    ChMotion(22,4,1);
    VoicePlay("L010000011_22_000");
    MsgDisp("Hikaru","Bonjour～Mari▼");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("L010000011_21_000");
    MsgDisp("Michiru","Are you ready?");
    MsgDisp("主人公","Hehe, yeah!
Let's start.");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0);
    ChClose(21,0,30);
    ChClose(22,0,30);
    break ;
    case 1:
    MsgDisp("主人公","Yeah, I don't need to this time.
Let's reject them...");
    MsgClose();
    ScrFadeOut(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
