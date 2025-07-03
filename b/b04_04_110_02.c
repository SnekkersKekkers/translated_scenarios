BGMPlay("BGM_PLACE_POOL",0.01);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("B040411002_04_000");
MsgDisp("Nanatsumori","....Hey.
What's the best way 
to enjoy the pool?");
MsgSel("Of course, it's swimming!","Examining the swimsuits","I think it's playing around with water.");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(4,1);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040411002_04_010");
        MsgDisp("Nanatsumori","Then, I won't enjoy it.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("B040411002_04_020");
        MsgDisp("Nanatsumori","I see...
So you like swimming? ");
        MsgDisp("主人公","Yeah, I like it.");
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040411002_04_030");
        MsgDisp("Nanatsumori","...I've been defeated.");
        MsgDisp("主人公","Are you not good at swimming, ｛七ツ森＊｝?");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("B040411002_04_040");
        MsgDisp("Nanatsumori","No, I can swim.
It's just that outside of school lessons
I don't have any interest in swimming.");
        MsgDisp("主人公","I don't think you need to 
think about it so seriously...");
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,1,1);
        VoicePlay("B040411002_04_050");
        MsgDisp("Nanatsumori","But, if I just float around,
I'll bother the other customers.");
        MsgDisp("主人公","As long as it's not a competitive swimming
pool, it's no problem if you float around.");
        ChEye(4,3);
        ChMouth(4,4);
        ChMotion(4,0,1);
        ChEyeOpenLevel(4,10);
        VoicePlay("B040411002_04_060");
        MsgDisp("Nanatsumori","I see...");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040411002_04_070");
        MsgDisp("Nanatsumori","Then, let's play in the
pool you like so much.");
        MsgDisp("主人公","Yay!
Then, do you want to go down 
the water slide together?");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,3,1);
        VoicePlay("B040411002_04_080");
        MsgDisp("Nanatsumori","ＯＫ.");
        ChEye(4,5);
        ChMouth(4,2);
        ChMotion(4,0,1);
        VoicePlay("B040411002_04_090");
        MsgDisp("Nanatsumori","...Hmm?
When you say together, do you mean
the two-person slide∋");
        MsgDisp("主人公","Right.");
        ChEye(4,4);
        ChMouth(4,2);
        ChMotion(4,2,1);
        ChMouthOpenLevel(4,0);
        ChCheek(4,8);
        VoicePlay("B040411002_04_100");
        MsgDisp("Nanatsumori","…………");
        ChEye(4,1);
        ChMouth(4,2);
        ChMotion(4,3,1);
        VoicePlay("B040411002_04_110");
        MsgDisp("Nanatsumori","Alright.
Shall we go then...");
        MsgDisp("主人公","(｛七ツ森＊｝ seems to be fired up?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040411002_04_120");
    MsgDisp("Nanatsumori","I see..
But, don't stare too much.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040411002_04_130");
    MsgDisp("Nanatsumori","Well, it's an everlasting summer here.
So it's not just a pool for swimming.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
