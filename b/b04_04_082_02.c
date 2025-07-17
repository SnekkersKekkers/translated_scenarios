BGOpen("fp200",0);
ChLayout(1);
ChEye(4,5);
ChMouth(4,5);
ChMotion(4,5);
ScrFadeIn(0);
VoicePlay("B040408202_04_000");
MsgDisp("Nanatsumori","Waah∋
There's something flying this way∈");
MsgSel("It's a small cabbage butterfly","Isn't it a grasshopper?","｛七ツ森＊｝, you're too surprised!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,1,1);
    VoicePlay("B040408202_04_010");
    MsgDisp("Nanatsumori","Ahh, right...
Bugs just pop out all of a sudden.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,5);
    ChMouth(4,1);
    ChMotion(4,1,1);
    VoicePlay("B040408202_04_020");
    MsgDisp("Nanatsumori","Eh∋
It's not stuck to me, is it∋");
    MsgDateResultDisp();
    break ;
    case 2:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(4,1);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040408202_04_030");
        MsgDisp("Nanatsumori","You don't care about people's feelings...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040408202_04_040");
        MsgDisp("Nanatsumori","It can't be helped.
I'm not good with bugs.");
        MsgDisp("主人公","I see. why do you dislike bugs?");
        ChEye(4,1);
        ChMouth(4,1);
        ChEyeOpenLevel(4,0);
        ChMouthOpenLevel(4,0);
        VoicePlay("B040408202_04_050");
        MsgDisp("Nanatsumori","......");
        ChEye(4,2);
        ChMouth(4,2);
        VoicePlay("B040408202_04_060");
        MsgDisp("Nanatsumori","When I was in kindergarten, we had to all
look for bugs together.");
        ChMotion(4,0,1);
        VoicePlay("B040408202_04_070");
        MsgDisp("Nanatsumori","Until that point, it wasn't like I
particularly disliked bugs, but...");
        ChMouth(4,2);
        ChMotion(4,2,1);
        ChEyeOpenLevel(4,8);
        VoicePlay("B040408202_04_080");
        MsgDisp("Nanatsumori","The insects you see one-by-one in an
encyclopedia and the ones you see moving
in groups in the wild...");
        ChEye(4,1);
        ChMouth(4,2);
        ChEyeOpenLevel(4,10);
        VoicePlay("B040408202_04_090");
        MsgDisp("Nanatsumori","The bugs in the encyclopedia don't move.
The ones in the wild move.
They wriggle, in groups!");
        MsgDisp("主人公","Ugh...");
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,1,1);
        ChEyeOpenLevel(4,10);
        VoicePlay("B040408202_04_100");
        MsgDisp("Nanatsumori","You get it, right?
Right?
You should get it now too!");
        MsgDisp("主人公","Somewhat...");
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        ChEyeOpenLevel(4,8);
        VoicePlay("B040408202_04_110");
        MsgDisp("Nanatsumori","I realised for the first time, that there
are just some realities I don't need to
know about... that was the summer when I
was 5 years old.");
        MsgDisp("主人公","I guess it's become a trauma for you...");
        ChMouth(4,2);
        ChMotion(4,0,1);
        ChEyeOpenLevel(4,#1);
        VoicePlay("B040408202_04_120");
        MsgDisp("Nanatsumori","Right...
Since then, insects and groups of insects
have only scared me..");
        ChEye(4,4);
        ChMouth(4,2);
        ChMotion(4,1,1);
        VoiceEVSPlay(4);
        VoicePlay("B040408202_04_130");
        MsgDisp("Nanatsumori","｛主人公｝, you
understand, right?
How I feel.");
        MsgDisp("主人公","(I understand how he feels, but...
The ｛七ツ森＊｝ who's
scared of insects is kind of cute?)");
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
