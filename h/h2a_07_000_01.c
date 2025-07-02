BGOpen("sc624",0);
BGMPlay("BGM_C07_MIKAGE_A",0.01);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    ChOpen(7,254,0,2,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(7);
    VoicePlay("H2A0700001_07_000");
    MsgDisp("Mikage","｛主人公｝, it was close.
The championship was just out of reach.");
    MsgDisp("主人公","Yes......");
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("H2A0700001_07_010");
    MsgDisp("Mikage","Don't be so sad.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("H2A0700001_07_020");
    MsgDisp("Mikage","It's not your fault, but mine.
I'm sorry I was such a careless advisor.");
    MsgDisp("主人公","That's not......");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("H2A0700001_07_030");
    MsgDisp("Mikage","For all that I was unreliable, you
supported them with everything you had.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("H2A0700001_07_040");
    MsgDisp("Mikage","Thanks to that, lots of members
achieved new personal bests.");
    MsgDisp("主人公","Yes, everyone did their best......");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("H2A0700001_07_050");
    MsgDisp("Mikage","Thanks, and sorry.
To make you do my job as well.");
    MsgDisp("主人公","No, I didn't really.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("H2A0700001_07_060");
    MsgDisp("Mikage","Come on, everyone's waiting for
you. Go.");
    MsgDisp("主人公","(We didn't win championships,
but...... Everyone really did their best.
I'm glad I kept up with the club......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
