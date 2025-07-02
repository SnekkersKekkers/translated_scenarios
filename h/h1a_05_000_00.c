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
    ChOpen(5,254,0,4,4,-1,-1,0,0);
    ScrFadeIn(0);
    ChMouth(5,3);
    VoiceEVSPlay(5);
    VoicePlay("H1A0500000_05_000");
    MsgDisp("Hiiragi","｛主人公｝,
congratulations.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝, we did it!
We won.");
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("H1A0500000_05_010");
    MsgDisp("Hiiragi","Yes, I was quite impressed.
The team is the very epitome of teamwork.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("H1A0500000_05_020");
    MsgDisp("Hiiragi","As manager, I'm sure you
contributed no small amount to that
as well.");
    MsgDisp("主人公","No, not at all.");
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("H1A0500000_05_030");
    MsgDisp("Hiiragi","Is that so? It seems as though the
players are currently looking for you.
Would you not say that is proof enough?");
    MsgDisp("主人公","Ah...... yes.
I'm so happy......");
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("H1A0500000_05_040");
    MsgDisp("Hiiragi","Rather than me, please show those
beautiful tears to the players.");
    MsgDisp("主人公","Yes, thank you, ｛柊＊＊＊｝!");
    MsgDisp("主人公","(I'm glad that I stayed as
the baseball club manager......!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
