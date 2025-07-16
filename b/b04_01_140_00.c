BGOpen("ne210",0);
ChLayout(1);
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040114000_01_000");
MsgDisp("Kazama","It looked like a lot of fun.");
MsgSel("Haa, that was awesome!","I think that was so-so...","It was so loud my ears were ringing..");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040114000_01_010");
    MsgDisp("Kazama","That's good then.
I can still hear the performance in my
head...");
    MsgDispSksp(1,0);
    ChEyeOpenLevel(1,#1);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,1);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040114000_01_020");
    MsgDisp("Kazama","Are you saying that seriously?
If you didn't enjoy it, there was no point
in having come here.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040114000_01_030");
    MsgDisp("Kazama","Me too. somehow, I end up speaking louder
than usual.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
