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
    BGMPlay("BGM_C02_SASSA_C",0.01);
    ChOpen(2,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("H3A0200001_02_000");
    MsgDisp("Sassa","｛主人公｝.
... It's too bad.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝...
I lost.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("H3A0200001_02_010");
    MsgDisp("Sassa","Guess so.
I do sports too, so I get that you don't
want any encouragement right now.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("H3A0200001_02_020");
    MsgDisp("Sassa","But, let me just say this.
You were cool.
Chin up!");
    MsgDisp("主人公","(｛颯砂＊＊｝, thank you...
I lost, but I was able to make it this
far...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
