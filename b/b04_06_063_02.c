BGOpen("wf620",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040606302_06_000");
MsgDisp("Himuro","...With this little people around, I can
once again feel just how vast the ocean
is.");
MsgSel("Really?","...Is it okay if I got a little closer?","Then, let's make some noise!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040606302_06_010");
    MsgDisp("Himuro","I was mistaken to bring up this sort of
topic up with you.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("B040606302_06_020");
    MsgDisp("Himuro","Are you touch-starved or something...?
Do as you'd like.");
    MsgDispSksp(1,8);
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
        ChMouth(6,1);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040606302_06_030");
        MsgDisp("Himuro","Haa... the mood is ruined.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,4);
        ChMouth(6,3);
        ChMotion(6,5);
        VoicePlay("B040606302_06_040");
        MsgDisp("Himuro","Pfft... To think I would get a response
like that.");
        MsgDisp("主人公","Eh, can we not?");
        ChEye(6,0);
        ChMouth(6,3);
        ChMotion(6,3);
        VoicePlay("B040606302_06_050");
        MsgDisp("Himuro","It's not that we can't... The flow of the
conversation was clearly weird. But it's
funny, so I'll go along with it.");
        ChEye(6,0);
        ChMouth(6,3);
        ChMotion(6,0);
        VoicePlay("B040606302_06_060");
        MsgDisp("Himuro","Still, I've never made a racket before, So
you'll need to direct me properly.");
        MsgDisp("主人公","Of course!");
        ChEye(6,0);
        ChMouth(6,3);
        ChMotion(6,3);
        VoicePlay("B040606302_06_070");
        MsgDisp("Himuro","Yeah, I'll leave it to you.");
        ChEye(6,0);
        ChMouth(6,3);
        ChMotion(6,4);
        VoicePlay("B040606302_06_080");
        MsgDisp("Himuro","So, what are we making noise about?");
        MsgDisp("主人公","(｛氷室＊＊｝ is going along with it!)");
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
