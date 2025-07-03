BGOpen("tr520",0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040324202_03_000");
MsgDisp("Honda","Apparently solo camping
is becoming a trend?");
MsgSel("Going with｛本多＊＊｝ is great▼","I can understand that feeling","I think it'll be lonely");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,0,1);
        VoicePlay("B040324202_03_010");
        MsgDisp("Honda","Yeah.
But, wouldn't it be fun 
with a larger group?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,3);
        ChMouth(3,0);
        ChMotion(3,4);
        ChCheek(3,5);
        VoicePlay("B040324202_03_020");
        MsgDisp("Honda","I got somewhat startled...
You do this from time to time huh.");
        MsgDisp("主人公","This, you say?");
        ChEye(3,0);
        ChEye(3,0);
        ChMouth(3,3);
        ChCheek(3,0);
        VoicePlay("B040324202_03_030");
        MsgDisp("Honda","You startle me sometimes.");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,2);
        VoicePlay("B040324202_03_040");
        MsgDisp("Honda","...Maybe it's more of a reflex 
than a general reaction.");
        MsgDisp("主人公","Eh?");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,0);
        VoicePlay("B040324202_03_050");
        MsgDisp("Honda","So it's not a reaction that the cerebrum
is conscious of and judges.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040324202_03_060");
        MsgDisp("Honda","That's amazing.
Because there's something about you,
my body reacts to  without any 
involvement from the cerebrum.");
        MsgDisp("主人公","Really?");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040324202_03_070");
        MsgDisp("Honda","Right right. Thanks to you, I discovered
something newly strange about me! Camping
with us two is the best!");
        SEPlay("EV_SE_569",0,0.5);
        Wait(50,0);
        MsgDisp("主人公","(｛本多＊＊｝, yu're echoing...)");
        SEStop("EV_SE_569",1);
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040324202_03_080");
    MsgDisp("Honda","Yep yep.
Time to face nature alone
might be precious.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B040324202_03_090");
    MsgDisp("Honda","Yeah yeah, when you go camping,
I'll be with you. See, now you
won't feel lonely at all.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
