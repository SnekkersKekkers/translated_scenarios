BGOpen("tr520",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ScrFadeIn(0);
VoicePlay("B040224202_02_000");
MsgDisp("Sassa","There's people who are camping alone huh.");
MsgSel("It seems fun!","I wonder if they're lonely?","Did ｛颯砂＊＊｝ want to come alone too?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040224202_02_010");
    MsgDisp("Sassa","Ehhhー, you're interested too huh!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040224202_02_020");
    MsgDisp("Sassa","Well yeah.
Isn't it more fun to go here with lots of
people?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,4);
        VoicePlay("B040224202_02_030");
        MsgDisp("Sassa","Not at all?
That's a weird thing to ask.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040224202_02_040");
        MsgDisp("Sassa","Why?
Did something happen.");
        MsgDisp("主人公","No.
It's because ｛颯砂＊＊｝ seemed interested
in camping alone.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040224202_02_050");
        MsgDisp("Sassa","That's not it.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040224202_02_060");
        MsgDisp("Sassa","Hey, it's not just with camping, even in
other places, it would be more fun with
you.");
        MsgDisp("主人公","...Yeah, sorry.");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040224202_02_070");
        MsgDisp("Sassa","Aahー, you tricked me huh!");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040224202_02_080");
        MsgDisp("Sassa","You do that sometimes.
Often at campsites too.
I'll remember that.");
        MsgDisp("主人公","Hehe.
But, thank you.");
        ChEye(2,3);
        ChMouth(2,3);
        ChMotion(2,3);
        ChEyeOpenLevel(2,0);
        VoicePlay("B040224202_02_090");
        MsgDisp("Sassa","That's no good.
As a punishment, we'll go overnight
camping together next!");
        MsgDisp("主人公","Ehhh∋");
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
