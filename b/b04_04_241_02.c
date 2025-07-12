BGOpen("tr510",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040424102_04_000");
MsgDisp("Nanatsumori","Then what should we do today?");
MsgSel("The cow milking experience▼","Let's interact with sheep!","Let's do what｛七ツ森＊｝ wants");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMotion(4,1,1);
    VoicePlay("B040424102_04_010");
    MsgDisp("Nanatsumori","Got it.
I'll watch.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,0);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("B040424102_04_020");
    MsgDisp("Nanatsumori","You go enjoy it yourself.
I can't let sheep or cows lick me,
no matter what.");
    MsgDateResultDisp();
    break ;
    case 2:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,2,1);
        VoicePlay("B040424102_04_030");
        MsgDisp("Nanatsumori","I don't feel like doing anything though.
Shall I go home?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,0);
        ChMotion(4,1,1);
        ChEyeOpenLevel(4,10);
        VoicePlay("B040424102_04_040");
        MsgDisp("Nanatsumori","Ha? Me?");
        MsgDisp("主人公","Yeah.");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,2,1);
        ChEyeOpenLevel(4,0);
        VoicePlay("B040424102_04_050");
        MsgDisp("Nanatsumori","Hmmー...
what should we doー...");
        ChEyeOpenLevel(4,#1);
        VoicePlay("B040424102_04_060");
        MsgDisp("Nanatsumori","Milking... is not my style,
and I'm not good at interacting
with animals...but I also don't
want to just stare off into space...");
        MsgDisp("主人公","It feels like you don't like arms very
much?");
        ChEye(4,2);
        ChMouth(4,4);
        ChMotion(4,1,1);
        VoicePlay("B040424102_04_070");
        MsgDisp("Nanatsumori","...Hm.
Well, more or less.");
        MsgDisp("主人公","I see.
Then, shall we go somewhere else?");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("B040424102_04_080");
        MsgDisp("Nanatsumori","No, no!
Let's not do that.
We came all the way here...");
        MsgDisp("主人公","But......");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040424102_04_090");
        MsgDisp("Nanatsumori","We both decided to go 
on a date here today.");
        MsgDisp("主人公","Yeah.");
        ChMotion(4,3,1);
        VoicePlay("B040424102_04_100");
        MsgDisp("Nanatsumori","Then let's enjoy our 
farm date to 100％.");
        MsgDisp("主人公","...Yeah!");
        ChEye(4,0);
        ChMouth(4,4);
        ChMotion(4,1,1);
        VoicePlay("B040424102_04_110");
        MsgDisp("Nanatsumori","Alright.
It's not like we have to do s
something to make it a date.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040424102_04_120");
        MsgDisp("Nanatsumori","The time we spend thinking about what
to do together like this, 
is good enough for me.");
        MsgDisp("主人公","(｛七ツ森＊｝……)");
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
