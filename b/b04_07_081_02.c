BGOpen("fp210",0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040708102_07_000");
MsgDisp("Mikage","I get kind of nervous looking at cherry
blossoms.");
MsgSel("You're excited about new life, right?","Their beauty makes your heart go pitter patter.","Why is that?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B040708102_07_010");
    MsgDisp("Mikage","Excited, huh?
That's just like you.
I'm sure something happy will happen.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,5);
    VoicePlay("B040708102_07_020");
    MsgDisp("Mikage","Sorry, sorry!
You're right, being distracted is
disrespectful to the cherry blossoms.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040708102_07_030");
        MsgDisp("Mikage","Right, even I don't know it myself.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040708102_07_040");
        MsgDisp("Mikage","Right, even I don't
know it myself though.");
        MsgDisp("主人公","Eh?");
        ChEye(7,0);
        ChMouth(7,0);
        VoicePlay("B040708102_07_050");
        MsgDisp("Mikage","Well, maybe I'm just anxious about not
growing every year?");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040708102_07_060");
        MsgDisp("Mikage","You guys are growing up so fast around me,
right?
What about me in comparison?");
        MsgDisp("主人公","｛御影＊＊｝'s growth, huh...?");
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,1);
        VoicePlay("B040708102_07_070");
        MsgDisp("Mikage","Well, I guess the cherry blossoms have the
power to make me think about things out of
character?");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,3);
        VoicePlay("B040708102_07_080");
        MsgDisp("Mikage","On the other hand, you guys are growing
well.
I'm happy.");
        ChEye(7,1);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040708102_07_090");
        MsgDisp("Mikage","You guys, the plants in the gardening
club, Molly at home...
you're all only growing bigger...");
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040708102_07_100");
        MsgDisp("Mikage","Haa, I can't compete.");
        MsgDisp("主人公","(｛御影＊＊｝'s growth...?
I wonder what he's talking about?)");
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
