BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(6,255,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040623502_06_000");
MsgDisp("Himuro","Isn't it more shocking than scary?");
MsgSel("Either way it's still scary!","Actually, that's what's addictive","Let's enjoy it more honestly");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040623502_06_010");
    MsgDisp("Himuro","Seems like you'v had your fill.
Isn't that a win?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B040623502_06_020");
    MsgDisp("Himuro","Really?
Aren't you starting to realize the pattern
by now?");
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
        ChMouth(6,1);
        ChMotion(6,1);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040623502_06_030");
        MsgDisp("Himuro","It's up to me to decide how I feel.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,2);
        ChMouth(6,2);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040623502_06_040");
        MsgDisp("Himuro","... Sorry.
That's a bad habit of mine.");
        MsgDisp("主人公","No.
It's not like that.");
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623502_06_050");
        MsgDisp("Himuro","No, I'm glad you told me.");
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623502_06_060");
        MsgDisp("Himuro","I was considering what made this place
special, but if I made you uncomfortable,
I've got my priorities wrong.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,8);
        VoicePlay("B040623502_06_070");
        MsgDisp("Himuro","...Having fun with you is the biggest
priority.");
        MsgDisp("主人公","｛氷室＊＊｝...");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        ChCheek(6,0);
        VoicePlay("B040623502_06_080");
        MsgDisp("Himuro","But you know, if I really think about it,
I get to see your showy reactions, so I'm
having plenty of fun.");
        MsgDisp("主人公","(Showy reactions...)");
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
