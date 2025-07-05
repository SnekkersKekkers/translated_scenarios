BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(2,255,4,0,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040223202_02_000");
MsgDisp("Sassa","Hoh, we're finally back.");
MsgSel("Did I make you accompany me for too long?","I hope I didn't push you into anything...","Welcome back");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040223202_02_010");
    MsgDisp("Sassa","It's fine, but It's fine, but what kind of
expression should I make when I'm kneeling
and still?");
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
        DateRateSet(0);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040223202_02_020");
        MsgDisp("Sassa","I've never had to force
myself when I'm with you.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040223202_02_030");
        MsgDisp("Sassa","I wasn't pushed into anything,
but I feel troubled.");
        MsgDisp("主人公","Troubled?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,2);
        VoicePlay("B040223202_02_040");
        MsgDisp("Sassa","My body is cramped into a tight space.
But, in front of me is your smile.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040223202_02_050");
        MsgDisp("Sassa","I'm being attcked in a way I both like and
cannot stand. For 15 minutes too.");
        MsgDisp("主人公","Ehh!
Then, what should we do next time?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040223202_02_060");
        MsgDisp("Sassa","I've already admitted my feelings, 
so it's already okay for next time.");
        MsgDisp("主人公","Eh?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040223202_02_070");
        MsgDisp("Sassa","That's why, from next time, just think
that \"This person is struggling huhー\" and
that'll be enough.");
        MsgDisp("主人公","Hehe, if you put it that way, 
I'll end up laughing at ｛颯砂＊＊｝
who's making a troubled face.");
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,0);
        ChEyeOpenLevel(2,7);
        VoicePlay("B040223202_02_080");
        MsgDisp("Sassa","Hey, you're already laughing.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040223202_02_090");
        MsgDisp("Sassa","Besides, if you laugh more, 
the ratio of things I like about 
this situation will increase,
which will help me. ");
        MsgDisp("主人公","(｛颯砂＊＊｝...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040223202_02_100");
    MsgDisp("Sassa","We came back together though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
