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
    VoicePlay("H2A0600001_06_000");
    MsgDisp("Himuro","Good work.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝......");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("H2A0600001_06_010");
    MsgDisp("Himuro","I'm not going to comfort you,
even if you look at me like that.");
    MsgDisp("主人公","Ugh......");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("H2A0600001_06_020");
    MsgDisp("Himuro","Don't get me wrong. I'm saying you
don't have to make that face. You've
done all you can for the team.");
    MsgDisp("主人公","......Yeah, thanks.");
    MsgDisp("主人公","(We might have lost, but
I'm glad that I stayed as
the track and field club manager......)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C06_INORI_B",0.01);
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H2A0600001_06_030");
    MsgDisp("Himuro","............");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝......");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H2A0600001_06_040");
    MsgDisp("Himuro","......Are you crying?");
    MsgDisp("主人公","Hm?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H2A0600001_06_050");
    MsgDisp("Himuro","......I know how much thought you put
into the team and how hard you work for
them.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    VoicePlay("H2A0600001_06_060");
    MsgDisp("Himuro","So I don't really know what
to say to you right now.");
    MsgDisp("主人公","......Hehe, thanks.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("H2A0600001_06_070");
    MsgDisp("Himuro","You don't have to force yourself
to laugh.
Why are you the one that's concerned......");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("H2A0600001_06_080");
    MsgDisp("Himuro","Rest up for today.
Good work these past three years.");
    MsgDisp("主人公","(We might have lost, but
I'm glad that I stayed as
the track and field club manager......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
