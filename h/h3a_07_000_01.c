BGOpen("sc624",0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(7);
    VoicePlay("H3A0700001_07_000");
    MsgDisp("Mikage","｛主人公｝,
good work.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝......
I lost.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("H3A0700001_07_010");
    MsgDisp("Mikage","You think so?");
    MsgDisp("主人公","Huh?
Were you watching properly?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("H3A0700001_07_020");
    MsgDisp("Mikage","To me, you don't look like a loser.
Seems to me like you're strong,
beautiful and the winner of a fair fight.");
    MsgDisp("主人公","Hic......
｛御影＊＊｝......");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("H3A0700001_07_030");
    MsgDisp("Mikage","Come on, come on, don't make
that face.");
    MsgDisp("主人公","Okay......");
    MsgDisp("主人公","(｛御影＊＊｝ is so nice......
But since I was able to come this far,
I really wanted to win......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
