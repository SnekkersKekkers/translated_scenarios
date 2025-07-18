BGOpen("ne330",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040616002_06_000");
MsgDisp("Himuro","Do you come here often?");
MsgSel("Yeah! I'm a regular","I come here with my friends","I don't think I come that often");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040616002_06_010");
    MsgDisp("Himuro","Ehhh, really?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040616002_06_020");
        MsgDisp("Himuro","Hmm, your friends huh?
Well, it doesn't really matter who you
come with.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040616002_06_030");
        MsgDisp("Himuro","Hmm...");
        MsgDisp("主人公","｛氷室＊＊｝?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040616002_06_040");
        MsgDisp("Himuro","I also come here often.
Since I like games quite a bit.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040616002_06_050");
        MsgDisp("Himuro","I've played most of them, there are a few
games I would recommend, I think you'll
enjoy them.");
        MsgDisp("主人公","Y-Yeah?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040616002_06_060");
        MsgDisp("Himuro","That's why...
Could you include me in the list of people
you come here with?");
        MsgDisp("主人公","...Ah.
Hehe, of course!
Then, I'll invite you next time okay?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040616002_06_070");
        MsgDisp("Himuro","Yeah, do that.");
        ChEye(6,2);
        ChMouth(6,2);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        ChCheek(6,0);
        VoicePlay("B040616002_06_080");
        MsgDisp("Himuro","...Haa.
Why is it that I could only phrase it like
that....");
        MsgDisp("主人公","(?)
｛氷室＊＊｝ seems to be worried
about something?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,4);
    VoicePlay("B040616002_06_090");
    MsgDisp("Himuro","Then, I'll show you how to have fun here.
There are all sorts of games here,
there'll definitely be something that
catches your interest.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
