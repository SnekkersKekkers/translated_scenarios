BGOpen("sc620",0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,254,0,4,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H1A0500001_05_000");
    MsgDisp("Hiiragi","Good work.
It was a good match.");
    MsgDisp("主人公","｛柊＊＊＊｝...... We lost.");
    ChEye(5,0);
    VoicePlay("H1A0500001_05_010");
    MsgDisp("Hiiragi","Even so, the resounding applause was
louder for the Haba High Nine, compared to
the winning team.");
    MsgDisp("主人公","Hm?");
    ChMotion(5,4);
    VoicePlay("H1A0500001_05_020");
    MsgDisp("Hiiragi","The match may have been lost.
However, it was your team that touched the
hearts of the spectators.");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("H1A0500001_05_030");
    MsgDisp("Hiiragi","The efforts that did not appear on the
scoreboard ended up reaching everyone's
hearts.");
    MsgDisp("主人公","Yes...... Thank you, ｛柊＊＊＊｝......");
    ChEye(5,3);
    VoicePlay("H1A0500001_05_040");
    MsgDisp("Hiiragi","Your cherished peers are worrying for you.
Go on, go to them.");
    MsgDisp("主人公","(We might have lost, but I'm glad that I
stayed as the baseball club manager......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
