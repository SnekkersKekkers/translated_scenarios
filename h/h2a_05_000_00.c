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
    ChOpen(5,254,0,3,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H2A0500000_05_000");
    MsgDisp("Hiiragi","Congratulations to our team for winning
the championships!
As I expected.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝, yes.
Everyone set new personal bests as well.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,3);
    VoicePlay("H2A0500000_05_010");
    MsgDisp("Hiiragi","That's amazing. The difficulty of
performing your best when the time comes
is something I understand well.");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("H2A0500000_05_020");
    MsgDisp("Hiiragi","It would simply not be possible without
their constant efforts and a great
support.");
    MsgDisp("主人公","Yes, that's right.");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("H2A0500000_05_030");
    MsgDisp("Hiiragi","I'm speaking about you.
I'm quite impressed with the amount of
work you've done as manager.");
    MsgDisp("主人公","｛柊＊＊＊｝, thank you...");
    ChEye(5,3);
    VoicePlay("H2A0500000_05_040");
    MsgDisp("Hiiragi","Please, go on and show that smile to all
of the team members as soon as possible.");
    MsgDisp("主人公","Yes!");
    MsgDisp("主人公","(I'm so glad I did my best for the track
and field team...!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
