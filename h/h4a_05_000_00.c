BGOpen("sc624",0);
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
    BGMPlay("BGM_C05_HIIRAGI_B",0.01);
    ChOpen(5,254,0,4,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(5);
    VoicePlay("H4A0500000_05_000");
    MsgDisp("Hiiragi","｛主人公｝, my congratulations for
winning.");
    MsgDisp("主人公","｛柊＊＊＊｝, thank you!");
    ChEye(5,3);
    VoicePlay("H4A0500000_05_010");
    MsgDisp("Hiiragi","Everyone in the audience had their eyes
glued to you.");
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("H4A0500000_05_020");
    MsgDisp("Hiiragi","...Mine as well.");
    MsgDisp("主人公","Hehe.
I'm glad I was able to live up to your
expectations, ｛柊＊＊＊｝.");
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("H4A0500000_05_030");
    MsgDisp("Hiiragi","Didn't I tell you?
Even before your act started, it received
full points.");
    MsgDisp("主人公","And now?");
    ChEye(5,4);
    VoicePlay("H4A0500000_05_040");
    MsgDisp("Hiiragi","I wanted to watch forever.
I'd watch an encore too, if it was
possible.");
    MsgDisp("主人公","(I did it, I won!
I'm so glad I worked so hard at the
rhythmic gymnastics club!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
