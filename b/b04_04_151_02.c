BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040415102_04_000");
MsgDisp("Nanatsumori","If you think about it properly, bowling is
a simple game.");
MsgSel("Maybe it would look better if the pins were more vibrant","Apparently they hold events to hold customers?","I like it though.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040415102_04_010");
    MsgDisp("Nanatsumori","Looks like that's how it is in other
places. I wonder if they'll also set up
some interesting gambits here tooー.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040415102_04_020");
    MsgDisp("Nanatsumori","Eh? This place does something that fun?
Then, next time let's come here on an
event day!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(2);
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("B040415102_04_030");
        MsgDisp("Nanatsumori","Hmm.
If I get better, I wonder if I'll be able
to see the fun part of it?");
        MsgDispSksp(1,0);
        MsgDateResultDisp();
        MsgDispSksp(0);
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("B040415102_04_040");
        MsgDisp("Nanatsumori","Hmm.");
        ChMotion(4,2,1);
        VoicePlay("B040415102_04_050");
        MsgDisp("Nanatsumori","Well, lots of games that are loved for
that long tend to be simple and
replayable, that's for sure.");
        MsgDisp("主人公","I think it's nice that you can laugh, cry
and suffer together even if you're not
good at it.");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040415102_04_060");
        MsgDisp("Nanatsumori","Oh...
That's deep, what you just said.");
        MsgDisp("主人公","Really?");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,3,1);
        VoicePlay("B040415102_04_070");
        MsgDisp("Nanatsumori","Yeah.
That's definitely true.");
        VoicePlay("B040415102_04_080");
        MsgDisp("Nanatsumori","It feels nice to not only bowl together,
but share the fun too.");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040415102_04_090");
        MsgDisp("Nanatsumori","It's super fun chatting to you like this
even now.");
        MsgDisp("主人公","Hehe!");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0);
        ChMouthOpenLevel(4,0);
        VoicePlay("B040415102_04_100");
        MsgDisp("Nanatsumori","......");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040415102_04_110");
        MsgDisp("Nanatsumori","Alright!
Shall we continue where we left off?!");
        MsgDisp("主人公","Okayー!");
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
