BGOpen("tr520",0);
ChLayout(1);
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,2);
ScrFadeIn(0);
VoicePlay("B040824202_08_000");
MsgDisp("Shirahane","If we did this at night, we could have a
campfire...");
MsgSel("It's definitely fun even during the day!","Won't that be dangerous?","I'm not really into causing a ruckus...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040824202_08_010");
    MsgDisp("Shirahane","That's right!
Then, let's prepare.
So that this becomes a good memory.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("B040824202_08_020");
    MsgDisp("Shirahane","It'll be alright.
We'll enjoy the facility's campfire.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(8,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,2,1);
        VoicePlay("B040824202_08_030");
        MsgDisp("Shirahane","I wasn't particularly thinkin' of making a
fuss or anythin'.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,2,1);
        VoicePlay("B040824202_08_040");
        MsgDisp("Shirahane","No.
I wasn't plannin' on fullin' around.");
        ChEye(8,3);
        ChMouth(8,3);
        ChMotion(8,0,1);
        VoicePlay("B040824202_08_050");
        MsgDisp("Shirahane","How should I put it...
dont'cha yearn for it?
Relaxin' round a campfire?");
        ChEye(8,4);
        ChMouth(8,0);
        ChMotion(8,2,1);
        ChCheek(8,4);
        VoicePlay("B040824202_08_060");
        MsgDisp("Shirahane","It's just the two of us, right?");
        MsgDisp("主人公","Ah... I see.");
        ChEye(8,3);
        ChMouth(8,3);
        ChMotion(8,0,1);
        VoicePlay("B040824202_08_070");
        MsgDisp("Shirahane","How about it, should we do it?");
        MsgDisp("主人公","Yeah!");
        ChEye(8,3);
        ChMouth(8,3);
        ChMotion(8,3,1);
        ChEyeOpenLevel(8,0);
        VoicePlay("B040824202_08_080");
        MsgDisp("Shirahane","If you're being for real, let's prepare it
together!
Let's get some firewood...");
        ChEye(8,3);
        ChMotion(8,2,1);
        VoicePlay("B040824202_08_090");
        MsgDisp("Shirahane","As for the place, somewhere by the
lakeside would be good. Hehe!");
        MsgDisp("主人公","(｛大地＊＊｝, that seems fun!
I'll have to help too!)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    default :
    DbgAssert(1);
    break ;
    }
