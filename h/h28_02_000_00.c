BGOpen("sc623",0);
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
    ChOpen(2,254,4,0,0,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("H280200000_02_000");
    MsgDisp("Sassa","｛主人公｝, it's finally time.");
    MsgDisp("主人公","｛颯砂＊＊｝, we've finally made
it this far.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("H280200000_02_010");
    MsgDisp("Sassa","Yeah, and it's all thanks to you.
Thank you");
    MsgDisp("主人公","No, it's thanks to your hard work,
｛颯砂＊＊｝.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("H280200000_02_020");
    MsgDisp("Sassa","Then, it's both of our hard work.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("H280200000_02_030");
    MsgDisp("Sassa","Just leave the rest to me.
I'll bring us results that we can both be
happy with.");
    MsgDisp("主人公","Yeah, good luck!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("H280200000_02_040");
    MsgDisp("Sassa","Yeah!");
    MsgDisp("主人公","(Alright, I'll do my best to lend my
support, too!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
