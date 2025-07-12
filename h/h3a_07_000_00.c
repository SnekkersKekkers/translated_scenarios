BGOpen("sc624",0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    BGMPlay("BGM_C07_MIKAGE_C",0.01);
    ChOpen(7,254,3,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H3A0700000_07_000");
    MsgDisp("Mikage","You're pretty strong!");
    MsgDisp("主人公","Ah, ｛御影＊＊｝!
I won!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("H3A0700000_07_010");
    MsgDisp("Mikage","Yeah, I just about fell for you.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("H3A0700000_07_020");
    MsgDisp("Mikage","You're not just strong, but your attitude
and the way you won was great too.
Congrats.");
    MsgDisp("主人公","Hehe, thank you very much!");
    MsgDisp("主人公","(I did it!　I won the inter-high!
I'm really glad I worked so hard
at my club!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
