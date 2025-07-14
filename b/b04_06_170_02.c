BGOpen("ne340",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040617002_06_000");
MsgDisp("Himuro","...How do I say this, I'm surprised you
never get tired of this.");
MsgSel("Of course not! It's fun","Isn't it about time for you to sing too ｛氷室＊＊｝?","I put on \"Love Between the Waves\"!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040617002_06_010");
    MsgDisp("Himuro","Well the fact that you're enjoying it is
most important.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040617002_06_020");
    MsgDisp("Himuro","I've refused many times already right?
That's enough, just give up.");
    MsgDateResultDisp();
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040617002_06_030");
        MsgDisp("Himuro","...I won't sing it.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,5);
        ChMotion(6,5);
        VoicePlay("B040617002_06_040");
        MsgDisp("Himuro","W-Wait!
I can't sing!");
        MsgDisp("主人公","If you don't know it, shall we sing
together?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040617002_06_050");
        MsgDisp("Himuro","...I know it.");
        MsgDisp("主人公","Eh! then I want to hear ｛氷室＊＊｝ sing
all the more now.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040617002_06_060");
        MsgDisp("Himuro","It's not something
worth listening to.");
        MsgDisp("主人公","It doesn't matter if you're good or not
though?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,0);
        VoicePlay("B040617002_06_070");
        MsgDisp("Himuro","I didn't say I'm bad.");
        MsgDisp("主人公","Then, let's enjoy it together!");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040617002_06_080");
        MsgDisp("Himuro","Ugh, you got me...
Haa, I understand.");
        MsgDisp("主人公","Hurray!");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040617002_06_090");
        MsgDisp("Himuro","But, this is on the condition my mic is
muted.");
        MsgDisp("主人公","(Then I won't be able to hear you...!)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
