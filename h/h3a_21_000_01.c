BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    ChOpen(21,254,0,0,4,-1,-1,0,0);
    Wait(15,0);
    ScrFadeIn(0);
    VoicePlay("H3A2100001_21_000");
    MsgDisp("Michiru","It was very close......");
    MsgDisp("主人公","｛みちる＊｝, I lost.");
    ChEye(21,0);
    ChMouth(21,4);
    ChMotion(21,3);
    VoicePlay("H3A2100001_21_010");
    MsgDisp("Michiru","A loss is a loss.
But it was a very good match.
Good work, Mari.");
    MsgDisp("主人公","(｛みちる＊｝......
Yeah, I'm glad I worked so hard in
the judo club.)");
    break ;
    case 4:
    case 5:
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    ChOpen(21,254,3,0,0,-1,-1,0,0);
    Wait(15,0);
    ScrFadeIn(0);
    VoicePlay("H3A2100001_21_020");
    MsgDisp("Michiru","Good work.");
    MsgDisp("主人公","｛みちる＊｝……");
    ChEye(21,4);
    ChMouth(21,4);
    ChMotion(21,4);
    VoicePlay("H3A2100001_21_030");
    MsgDisp("Michiru","I'm really glad you didn't get hurt.
The match was great, too.");
    MsgDisp("主人公","Thank you.");
    ChEye(21,4);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("H3A2100001_21_040");
    MsgDisp("Michiru","Cheer up.
Even if you didn't win this match, Mari
is still number one to me. Okay?");
    MsgDisp("主人公","(｛みちる＊｝......
Yeah, I'm glad I worked so hard in
the judo club.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
