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
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(7);
    VoicePlay("H4A0700001_07_000");
    MsgDisp("Mikage","｛主人公｝, good work.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝...");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("H4A0700001_07_010");
    MsgDisp("Mikage","So you really are going to make that face.
Did you hear your applause properly?");
    MsgDisp("主人公","Hm?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("H4A0700001_07_020");
    MsgDisp("Mikage","It sounded louder than the applause for
any of the other contestants, you know?");
    MsgDisp("主人公","Really...?
I'm happy about that...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("H4A0700001_07_030");
    MsgDisp("Mikage","Right? You might not have been satisfied
with your performance, but your effort was
clear to the audience.");
    MsgDisp("主人公","Yes...!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("H4A0700001_07_040");
    MsgDisp("Mikage","Well, thanks to you, my hands are bright
red, though.");
    MsgDisp("主人公","(｛御影＊＊｝ cheered for me a lot...
that makes me happy.
But I wanted to win...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
