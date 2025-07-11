BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChNanaType(-1);
ChOpen(4,255,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B040423202_04_000");
MsgDisp("Nanatsumori","Come to think of it... 
did you know about the jinx that if you
kiss at the top of the ferris wheel, 
your love will come true?");
MsgSel("Wow, what a wonderful jinx!","...Do you want to try it?","K-K-kiss∋");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040423202_04_010");
    MsgDisp("Nanatsumori","Yeah.
I want to know how many couples have had
their love fulfilled with that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(4,0);
        ChEyeOpenLevel(4,9);
        VoicePlay("B040423202_04_020");
        MsgDisp("Nanatsumori","I do not.");
        ChEyeOpenLevel(4,-1);
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,4);
        ChMouth(4,1);
        ChMotion(4,1,1);
        VoicePlay("B040423202_04_030");
        MsgDisp("Nanatsumori","Yes?");
        MsgDisp("主人公","Ummm...
I was wondering if the jinx is true.");
        ChEye(4,0);
        ChMouth(4,4);
        ChMotion(4,0,1);
        ChCheek(4,7);
        VoicePlay("B040423202_04_040");
        MsgDisp("Nanatsumori","…………");
        ChCheek(4,0);
        VoiceEVSPlay(4);
        VoicePlay("B040423202_04_050");
        MsgDisp("Nanatsumori","｛主人公｝.
I'm asking you this seriously.");
        MsgDisp("主人公","Y-Yeah.");
        VoicePlay("B040423202_04_060");
        MsgDisp("Nanatsumori","Are you in love?
...With me?");
        MsgDisp("主人公","...Eh∋");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,1,1);
        VoicePlay("B040423202_04_070");
        MsgDisp("Nanatsumori","If you reorganise it in your head, the
flow of this conversation just now,
...will go there, right?");
        MsgDisp("主人公","...Ah.");
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,0,1);
        ChMouthOpenLevel(4,0);
        VoicePlay("B040423202_04_080");
        MsgDisp("Nanatsumori","…………");
        ChEye(4,2);
        ChMouth(4,4);
        ChMotion(4,2,1);
        VoicePlay("B040423202_04_090");
        MsgDisp("Nanatsumori","Sometimes I won't understand it.
Your feelings, that is.");
        ChMotion(4,0,1);
        VoicePlay("B040423202_04_100");
        MsgDisp("Nanatsumori","Sometimes, having no bad intentions 
can be the most harmful thing.");
        ChEye(4,0);
        ChMouth(4,0);
        VoicePlay("B040423202_04_110");
        MsgDisp("Nanatsumori","That's why....
you shouldn't fluster the other person, 
but look at them properly.");
        ChMotion(4,1,1);
        VoicePlay("B040423202_04_120");
        MsgDisp("Nanatsumori","I can still stay calm.
But there'll be people who can't.
That's for sure.");
        ChEye(4,2);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040423202_04_130");
        MsgDisp("Nanatsumori","I don't want you to be unhappy.
...Do you understand?
What I want to say.");
        MsgDisp("主人公","Yeah, I understand.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,3,1);
        VoicePlay("B040423202_04_140");
        MsgDisp("Nanatsumori","Mm. Alright.");
        MsgDisp("主人公","(｛七ツ森＊｝...
you really are worried about me.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040423202_04_150");
    MsgDisp("Nanatsumori","You're too anxious.
Your face is bright red.
Cute.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
