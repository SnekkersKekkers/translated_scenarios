BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgClose();
    BGMPlay("BGM_C02_SASSA_I",0.01);
    ChOpen(2,254,1,0,3,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("H3A0200000_02_000");
    MsgDisp("Sassa","｛主人公｝.
You decided that splendidly.");
    MsgDisp("主人公","｛颯砂＊＊｝,
thanks.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("H3A0200000_02_010");
    MsgDisp("Sassa","It was a beautiful win, and it
felt so great!
Congrats.");
    MsgDisp("主人公","You were watching.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("H3A0200000_02_020");
    MsgDisp("Sassa","Yeah, and I saw the results
of your efforts.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("H3A0200000_02_030");
    MsgDisp("Sassa","It's not just about strength.
It begins and ends with courtesy. I
think started liking judo because of you.");
    MsgDisp("主人公","(I did it!
I'm glad I practiced so much∈)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
