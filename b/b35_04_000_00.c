BGDateAfterOpen();
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(4);
VoicePlay("B350400000_04_000");
MsgDisp("Nanatsumori?","｛主人公｝.");
MsgClose();
ChNanaType(0);
ChOpen(4,255,0,0,0,#1,#1,0,0,0,60);
MsgDisp("主人公","Huh?
｛七ツ森＊｝, you still haven't gone home?");
VoicePlay("B350400000_04_010");
MsgDisp("Nanatsumori","There's no way I can go
home feeling this unsatisfied.");
MsgDisp("主人公","Eh?");
ChMotion(4,1,1);
VoicePlay("B350400000_04_020");
MsgDisp("Nanatsumori","If you're still okay for time,
could you hang out with 
me a little longer?");
MsgSel("Yeah, of course!","I have something to take care of...");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B350400000_04_030");
    MsgDisp("Nanatsumori","Thank you.");
    MsgDisp("主人公","Then, what should we do now?");
    ChEye(4,1);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B350400000_04_040");
    MsgDisp("Nanatsumori","Burn through this unsatisfaction.
Let's play to our heart's content...");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 1:
    ChEye(4,2);
    ChMouth(4,0);
    VoicePlay("B350400000_04_050");
    MsgDisp("Nanatsumori","Errands...");
    MsgDisp("主人公","Um, I'm sorry okay?");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B350400000_04_060");
    MsgDisp("Nanatsumori","Don't mind it.
I'll find a way to burn it off by myself 
somewhere before heading 
home. Later...");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(4,0,30);
    MsgDisp("主人公","(｛七ツ森＊｝ seemed a little down.
Did I mess up, I wonder...)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
