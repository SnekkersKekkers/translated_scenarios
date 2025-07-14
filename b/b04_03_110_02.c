BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChSet(3,0,1);
ScrFadeIn(0);
VoicePlay("B040311002_03_000");
MsgDisp("Honda","If I also wore a high speed, competitive
swim suit, I wonder if I could swim
quicker?");
MsgSel("Like a sharkskin swimsuit?","Is speed really the issue?","Starting with the looks first?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040311002_03_010");
    MsgDisp("Honda","Right right. Like if just wearing it gives
you more buoyancy. I'd also like to try
it.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(3,2);
        ChMouth(3,4);
        ChMotion(3,2);
        VoicePlay("B040311002_03_020");
        MsgDisp("Honda","Eh... that's harsh. Yes, I'll learn how to
swim first.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,1);
        ChMouth(3,2);
        ChMotion(3,1);
        VoicePlay("B040311002_03_030");
        MsgDisp("Honda","Ehー. You don't have to put it like that.
I'm starting to float a little you know?");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040311002_03_040");
        MsgDisp("Honda","You're right, speed isn't the main issue
here...
But floating is the first step, right?");
        MsgDisp("主人公","｛本多＊＊｝, you always look so relaxed
floating, don't you?");
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,0);
        VoicePlay("B040311002_03_050");
        MsgDisp("Honda","Huh? Your words somewhat have a bite to
them today.");
        MsgDisp("主人公","Eh, that's not what I meant!");
        MsgDisp("主人公","It's just that I think it's amazing that
｛本多＊＊｝ enjoys even the things he's
bad at.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040311002_03_060");
        MsgDisp("Honda","Yep yep, that.
That's what I meant!");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,4);
        VoicePlay("B040311002_03_070");
        MsgDisp("Honda","Then, I'll tell you especially a secret on
why I always look like I'm having fun.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,1);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040311002_03_080");
        MsgDisp("Honda","That's because of you.
Because I'm together with you.");
        MsgDisp("主人公","Hehe.
Yeah, thank you!");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChSet(3,0,1);
    VoicePlay("B040311002_03_090");
    MsgDisp("Honda","Yep yep. Yeah, exactly. Starting with the
look is important to get your spirits up.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
