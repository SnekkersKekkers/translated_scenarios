ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
SEPlay("EV_SE_517");
Wait(110,0);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,3,#1,#1,0,0);
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
SEStop("EV_SE_517",2);
VoicePlay("B040102400_01_000");
MsgDisp("Kazama","That sounds like a harp.
I wonder how it works.");
MsgSel("It's such a peaceful and reassuring sound","I want to listen to this forever","An angel's harp?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040102400_01_010");
    MsgDisp("Kazama","It's alright.
Wouldn't it be better if there was a
little bit more oomph to it?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040102400_01_020");
    MsgDisp("Kazama","There's no doubt that we make the best
partners!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    ChCheek(1,5);
    VoicePlay("B040102400_01_030");
    MsgDisp("Kazama","Aah... That's something else. Let's listen
to it again, one more time.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
