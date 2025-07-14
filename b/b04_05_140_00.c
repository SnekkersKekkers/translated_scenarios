BGOpen("ne210",0);
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4,1);
ChLayout(1);
ScrFadeIn(0);
ChEyeOpenLevel(5,0);
VoicePlay("B040514000_05_000");
MsgDisp("Hiiragi","...With this it's over.");
ChEyeOpenLevel(5,#1);
MsgSel("Haa, that was the best!","That was so-so huh...","The sound was so loud, my ears are ringing...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMotion(5,0);
    VoicePlay("B040514000_05_010");
    MsgDisp("Hiiragi","I'm glad.
That's a relief at least.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChMotion(5,1);
    ChEyeOpenLevel(5,0);
    VoicePlay("B040514000_05_020");
    MsgDisp("Hiiragi","I see.
My patience was in vain...");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040514000_05_030");
    MsgDisp("Hiiragi","Yes. It was strange that it was so loud
that I couldn't hear it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
