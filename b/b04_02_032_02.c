BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040203202_02_000");
MsgDisp("Sassa","Apparently during the night the aquarium
is all lit up.");
MsgSel("Wow, you know a lot","I wonder if that blinds the fish?","Sounds romantic");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,4);
        VoicePlay("B040203202_02_010");
        MsgDisp("Sassa","I just read it on that poster.
You don't need to force yourself to praise
me.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040203202_02_020");
        MsgDisp("Sassa","That makes me feel kind of
good.");
        MsgDisp("主人公","What do you mean?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040203202_02_030");
        MsgDisp("Sassa","I like teaching you things about the city
that you don't know but it's rare that I
know these things.");
        MsgDisp("主人公","Ah, I see how that could
be frustrating.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040203202_02_040");
        MsgDisp("Sassa","Yeah. It makes me want to start learning
more bits of information.");
        MsgDisp("主人公","Hehe, ｛颯砂＊＊｝ can gather information
by foot.");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,0);
        VoicePlay("B040203202_02_050");
        MsgDisp("Sassa","By foot? Okay, next time let's go to
together to Mt. Habataki for information
gathering okay?");
        MsgDisp("主人公","Hehe, but isn't that just like a normal
date?");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040203202_02_060");
        MsgDisp("Sassa","You're right.
Let's have a date, then!");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040203202_02_070");
    MsgDisp("Sassa","As long as it's not a deep sea fish, it
should be fine.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040203202_02_080");
    MsgDisp("Sassa","Doesn't it?
I knew you would like that kind of thing");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
