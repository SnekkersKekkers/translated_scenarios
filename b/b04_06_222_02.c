BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040622202_06_000");
MsgDisp("Himuro","You frequently visit here; is this you
embodying the ethos of \"Learning new
things from the old?\"");
MsgSel("Uhmm....?","That's exactly it!","Do you need a reason for everything?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040622202_06_010");
    MsgDisp("Himuro","Look it up in the dictionary.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040622202_06_020");
    MsgDisp("Himuro","So?
Did you come up with new opinions?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
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
        ChMotion(6,1);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040622202_06_030");
        MsgDisp("Himuro","I hate meaningless things.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040622202_06_040");
        MsgDisp("Himuro","No... it's not necessary.");
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040622202_06_050");
        MsgDisp("Himuro","If I'm with you, I have fun no matter
where we go.");
        MsgDisp("主人公","Ehhh?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        ChCheek(6,10);
        VoicePlay("B040622202_06_060");
        MsgDisp("Himuro","Please don't make me say it again?
You clearly heard me.");
        MsgDisp("主人公","I was just wondering what you meant by
that.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040622202_06_070");
        MsgDisp("Himuro","... What does it mean?
It's just as I said.
Nothing more, nothing less.");
        MsgDisp("主人公","Hehe.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040622202_06_080");
        MsgDisp("Himuro","why are you laughing?");
        MsgDisp("主人公","I was just happy you're enjoying yourself.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040622202_06_090");
        MsgDisp("Himuro","...Ah, right.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        ChCheek(6,0);
        VoicePlay("B040622202_06_100");
        MsgDisp("Himuro","Well, it's not bad.
Spending time with you like this.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,4);
        VoicePlay("B040622202_06_110");
        MsgDisp("Himuro","Maybe that's the reason I come along.");
        MsgDisp("主人公","(Seems like ｛氷室＊＊｝ is also
having fun...
I'm glad.)");
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
