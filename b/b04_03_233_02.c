BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
MsgClose();
ChOpen(3,255,4,4,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040323302_03_000");
MsgDisp("Honda","Huh?
What's this feeling?
It's neither fun or scary.");
MsgSel("Are you alright? Don't push yourself?","Let's confirm it. And go again.","I'm still a bit scared");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,4);
        ChMouth(3,1);
        ChMotion(3,0);
        VoicePlay("B040323302_03_010");
        MsgDisp("Honda","Aahhー.
Don't interfere when I'm trying to
convince myself!");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040323302_03_020");
        MsgDisp("Honda","I'm not pushing myself.
This is a new feeling for me.
What about you?");
        MsgDisp("主人公","Yeah, I think I'm getting used to it a
little.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,5);
        VoicePlay("B040323302_03_030");
        MsgDisp("Honda","Maybe, we've both reached the other side
of fear?");
        MsgDisp("主人公","Hehe.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        VoicePlay("B040323302_03_040");
        MsgDisp("Honda","Heey, we jumped from that height right?");
        ChEye(3,2);
        ChMouth(3,4);
        ChMotion(3,2);
        SEPlay("EV_SE_549");
        SEWait();
        VoicePlay("B040323302_03_050");
        MsgDisp("Honda","...Nope, I've come back to this side.");
        MsgDisp("主人公","Watching others jump too is scary right?");
        ChMotion(3,0);
        VoicePlay("B040323302_03_060");
        MsgDisp("Honda","Yeah, that might be even scarier.");
        MsgDisp("主人公","Hehe.
We're still not fully on the other side
yet, huh?");
        ChSet(3,3);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040323302_03_070");
        MsgDisp("Honda","Yeah, I'm fine with either side as long as
I can have conversations with you like
this.");
        MsgDisp("主人公","(From now on too, I hope I can keep having
fun conversations with
｛本多＊＊｝ like this.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,2);
    ChMouth(3,2);
    ChMotion(3,2);
    VoicePlay("B040323302_03_080");
    MsgDisp("Honda","Umm...right away?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0);
    ChCheek(3,8);
    VoicePlay("B040323302_03_090");
    MsgDisp("Honda","Yep yep.
As I thought... me too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
