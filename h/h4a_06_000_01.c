BGOpen("sc623",0);
ChLayout(1);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C06_INORI_B",0.01);
    ChOpen(6,254,0,0,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H4A0600001_06_000");
    MsgDisp("Himuro","Good work.");
    MsgDisp("主人公","｛氷室＊＊｝......");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("H4A0600001_06_010");
    MsgDisp("Himuro","It was close.
But it was a good game.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("H4A0600001_06_020");
    MsgDisp("Himuro","Even now, you're a top athlete.
I think you should be proud for making
it onto this stage.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("H4A0600001_06_030");
    MsgDisp("Himuro","Good work these past three years.");
    MsgDisp("主人公","(I lost, but I'm glad I stayed
in the rhythmic gymnastics club.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C06_INORI_B",0.01);
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H4A0600001_06_040");
    MsgDisp("Himuro","Good job.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝......
Sorry you came all this way.");
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,1);
    ChEyeOpenLevel(6,0);
    VoicePlay("H4A0600001_06_050");
    MsgDisp("Himuro","Huh?
What are you apologizing?");
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H4A0600001_06_060");
    MsgDisp("Himuro","If you say something like it's
because you didn't win, that's just
nonsense.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("H4A0600001_06_070");
    MsgDisp("Himuro","Honestly, I was impressed.
......I thought you looked the most
beautiful.");
    MsgDisp("主人公","｛氷室＊＊｝......");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H4A0600001_06_080");
    MsgDisp("Himuro","You showed me something nice.
Rest well today.");
    MsgDisp("主人公","(I lost, but I'm glad I stayed
in the rhythmic gymnastics club.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChCheek(6,0);
