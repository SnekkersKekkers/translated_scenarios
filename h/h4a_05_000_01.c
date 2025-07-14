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
    BGMPlay("BGM_C05_HIIRAGI_C",0.01);
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(5);
    VoicePlay("H4A0500001_05_000");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","｛柊＊＊＊｝...... I lost.");
    VoicePlay("H4A0500001_05_010");
    MsgDisp("Hiiragi","Regardless of winning or losing, this was
your last stage as a student of Haba High.
Were you satisfied?");
    MsgDisp("主人公","No,
I wanted to win......");
    ChEye(5,4);
    VoicePlay("H4A0500001_05_020");
    MsgDisp("Hiiragi","I see.
Well, to the next stage, then.");
    MsgDisp("主人公","Huh?");
    ChEye(5,3);
    ChMotion(5,4);
    VoicePlay("H4A0500001_05_030");
    MsgDisp("Hiiragi","As your fan, I would be happier if you
decided to do so.
I'd be quite sad if today was the last.");
    MsgDisp("主人公","｛柊＊＊＊｝......");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("H4A0500001_05_040");
    MsgDisp("Hiiragi","It's up to you to decide.");
    MsgDisp("主人公","(Yeah...... I lost, but I'm glad I stayed
in the rhythmic gymnastics club......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
