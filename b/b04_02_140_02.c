BGOpen("ne210",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,1,1);
ScrFadeIn(0);
VoicePlay("B040214002_02_000");
MsgDisp("Sassa","This might be the first time 
I've gotten this fired up until now.");
MsgSel("Hehe, you're sweating.","｛颯砂＊＊｝ is too excited","I'm also getting excited...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040214002_02_010");
    MsgDisp("Sassa","Haha! I don't even sweat this much when I
practice.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,4);
        VoicePlay("B040214002_02_020");
        MsgDisp("Sassa","Don't retort so cooly?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040214002_02_030");
        MsgDisp("Sassa","It's no good,
I already know.");
        MsgDisp("主人公","Eh?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        ChEyeOpenLevel(2,9);
        VoicePlay("B040214002_02_040");
        MsgDisp("Sassa","Even you were moving your 
body quite a lot, you know?");
        MsgDisp("主人公","Eh?
I didn't notice...");
        ChEye(2,3);
        ChMouth(2,4);
        ChMotion(2,0);
        ChEyeOpenLevel(2,0);
        VoicePlay("B040214002_02_050");
        MsgDisp("Sassa","That's fine.
I'm guessing you had fun?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040214002_02_060");
        MsgDisp("Sassa","I much prefer that
over just standing still.");
        MsgDisp("主人公","Prefer?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040214002_02_070");
        MsgDisp("Sassa","Yeah, I like you like that.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,5);
        ChCheek(2,10);
        VoicePlay("B040214002_02_080");
        MsgDisp("Sassa","H-Hey, going to a concert with
someone makes it way more fun.");
        MsgDisp("主人公","(｛颯砂＊＊｝ really likes concerts huh...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040214002_02_090");
    MsgDisp("Sassa","Yeah, I understand it.
Let's definitely come again!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
