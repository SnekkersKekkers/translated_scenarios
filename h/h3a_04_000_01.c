BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(4,6)){
    case 3:
    MsgClose();
    BGMPlay("BGM_C04_NANA_C",0.01);
    ChNanaType(0);
    ChOpen(4,254,0,2,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H3A0400001_04_000");
    MsgDisp("Nanatsumori","Good work.
What, what's wrong?");
    MsgDisp("主人公","｛七ツ森＊｝......");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("H3A0400001_04_010");
    MsgDisp("Nanatsumori","You don't need to be sad.
Just making it this far is impressive,
really.");
    MsgDisp("主人公","(I lost, but I'm glad I stayed in the judo
club......)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C04_NANA_C",0.01);
    ChNanaType(0);
    ChOpen(4,254,0,2,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H3A0400001_04_020");
    MsgDisp("Nanatsumori","Yo.
......Oh my.");
    MsgDisp("主人公","｛七ツ森＊｝...... I couldn't win......");
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("H3A0400001_04_030");
    MsgDisp("Nanatsumori","It's no big deal.");
    MsgDisp("主人公","Hm?");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("H3A0400001_04_040");
    MsgDisp("Nanatsumori","You didn't win this tournament, but to
me...... uh, you're the winner. Grand
prize.");
    MsgDisp("主人公","???");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("H3A0400001_04_050");
    MsgDisp("Nanatsumori","I mean I fell for you again!
......Don't make me say it, stupid.");
    MsgDisp("主人公","(｛七ツ森＊｝...... Yeah, I lost, but
I'm glad I stayed in the judo club.)");
    BGMStop();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
