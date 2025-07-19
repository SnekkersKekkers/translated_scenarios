BGOpen("sc624",0);
BGMPlay("BGM_C07_MIKAGE_C",0.01);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    ChOpen(7,254,0,0,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H4A0700000_07_000");
    MsgDisp("Mikage","You're amazing...");
    MsgDisp("主人公","Ah, ｛御影＊＊｝!
I won!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("H4A0700000_07_010");
    MsgDisp("Mikage","Yeah, undisputed first place.");
    MsgDisp("主人公","Hehe, I did it!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("H4A0700000_07_020");
    MsgDisp("Mikage","We don't even need a judge, it was
unanimous.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("H4A0700000_07_030");
    MsgDisp("Mikage","Everyone was completely charmed.");
    MsgDisp("主人公","Were you charmed too, ｛御影＊＊｝?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("H4A0700000_07_040");
    MsgDisp("Mikage","Yeah, I surrendered myself.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("H4A0700000_07_050");
    MsgDisp("Mikage","Congratulations.
Behind all that beauty, there must be an
amazing amount of practice hiding.");
    MsgDisp("主人公","Hic...
Thank you very much!");
    MsgDisp("主人公","(I'm glad we got such great results.
My hard work for my club was worth it!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
