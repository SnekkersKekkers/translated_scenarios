BGOpen("sc620",0);
ChLayout(1);
switch (ChPrmGet(22,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ChOpen(22,254,0,2,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("H1A2200001_22_000");
    MsgDisp("Hikaru","Hm.
It's too bad.");
    MsgDisp("主人公","Yeah, it's frustrating......");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("H1A2200001_22_010");
    MsgDisp("Hikaru","But it's still amazing, you know?
You guys made it all the way here.
Mari and everyone in the club is 
so good!");
    MsgDisp("主人公","(｛ひかる＊｝...... We might have
lost, but I'm glad that I stayed as
the baseball club manager.)");
    break ;
    case 4:
    case 5:
    ChOpen(22,254,0,2,2,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("H1A2200001_22_020");
    MsgDisp("Hikaru","Mari......
Cheer up?");
    MsgDisp("主人公","We lost......");
    ChEye(22,2);
    ChMouth(22,1);
    ChMotion(22,3,1);
    VoicePlay("H1A2200001_22_030");
    MsgDisp("Hikaru","Geez, don't be so sad!
Mari and everyone else did their best!
You guys were so cool!");
    ChEye(22,2);
    ChMouth(22,0);
    ChMotion(22,0,1);
    VoicePlay("H1A2200001_22_040");
    MsgDisp("Hikaru","Making it all the way here is
amazing. Hikaru's as happy as if it
was happening to me.");
    ChEye(22,3);
    ChMouth(22,0);
    ChEyeOpenLevel(22,0);
    VoicePlay("H1A2200001_22_050");
    MsgDisp("Hikaru","So, you know?
Mari, smile?");
    MsgDisp("主人公","(｛ひかる＊｝...... We might have
lost, but I'm glad that I stayed as
the baseball club manager.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
