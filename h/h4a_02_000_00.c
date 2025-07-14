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
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,254,1,0,3,#1,#1,0,0);
    VoicePlay("H4A0200000_02_000");
    MsgDisp("Sassa","You did it!
Congratulations on winning!");
    MsgDisp("主人公","｛颯砂＊＊｝, thank you!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("H4A0200000_02_010");
    MsgDisp("Sassa","It's nerve-wracking, waiting for everyone
else to finish before hearing the results.
It's bad for my heart.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("H4A0200000_02_020");
    MsgDisp("Sassa","I was even more nervous than when it's me
competing. In comparison, you were great.
Cool and composed.");
    MsgDisp("主人公","Hehe, thanks.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("H4A0200000_02_030");
    MsgDisp("Sassa","Being a champion is fitting for you, with
your skills and your heart.");
    MsgDisp("主人公","(I'm so happy......!
I'm glad I stayed in the rhythmic
gymnastics club!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
