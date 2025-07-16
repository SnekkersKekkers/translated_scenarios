BGOpen("sc812",0);
ChLayout(1);
SEPlay("EV_SE_867",1);
ScrFadeIn(0);
MsgDisp("主人公","(......
Hmm?
The boy's room looks really lively......)");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(22,30,0,0,3,#1,#1,0,0);
VoicePlay("Q212200000_22_000");
MsgDisp("Hikaru","Oh, Mari's here too?");
MsgDisp("主人公","Ah, ｛ひかる＊｝.
The boys' room is kind of lively, isn't
it.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("Q212200000_22_010");
MsgDisp("Hikaru","Aha▼ It looks like the pillow fight is
about to start. Wanna go?");
MsgSel("Yeah, let's go!","I think we shouldn't......");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,5,1);
    VoicePlay("Q212200000_22_020");
    MsgDisp("Hikaru","Yayy!
Let's go get fired up!");
    break ;
    case 1:
    ChEye(22,2);
    ChMouth(22,2);
    ChMotion(22,0,1);
    VoicePlay("Q212200000_22_030");
    MsgDisp("Hikaru","Ehh, you're not going?
Boooriiing......");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(22);
    MsgDisp("主人公","(I'll should go back to my room too......)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_867",1);
MsgClose();
ScrFadeOut(0,0);
ChClose(22,0,0);
