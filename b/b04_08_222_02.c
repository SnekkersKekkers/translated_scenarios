BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B040822202_08_000");
MsgDisp("Shirahane","Some of the things here are heirlooms
offered by local noble families.
They may have been feudal lords
in another era.");
MsgSel("Like someone in the imperial court?","I'm sure it's not limited to feudal lords?","Do you admire it?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("B040822202_08_010");
    MsgDisp("Shirahane","That's right.
When you think about it, it's strange 
that such people lived just like us.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(8,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(2);
        ChEye(8,0);
        ChMouth(8,4);
        ChMotion(8,2,1);
        VoicePlay("B040822202_08_020");
        MsgDisp("Shirahane","...Right?
Each person's heirlooms are different
depending on the individual.");
        MsgDispSksp(1,0);
        MsgDateResultDisp();
        MsgDispSksp(0);
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(8,0);
        ChMouth(8,4);
        ChMotion(8,0,1);
        VoicePlay("B040822202_08_030");
        MsgDisp("Shirahane","Ah... that's right.
When it comes to heirlooms, each one
of those families have an individual
sense of what's valuable.");
        MsgDisp("主人公","That's right.
by the way, does ｛大地＊＊｝
have his own treasures?");
        ChEye(8,4);
        ChMouth(8,4);
        ChMotion(8,2,1);
        VoicePlay("B040822202_08_040");
        MsgDisp("Shirahane","Treasures, treasures huh?");
        ChEye(8,0);
        ChMouth(8,0);
        ChMotion(8,0,1);
        VoicePlay("B040822202_08_050");
        MsgDisp("Shirahane","All sorts of different things I received
as birthday presents from Nii-chan,
Nee-chan and all my friends are all my
treaures.");
        MsgDisp("主人公","Hehe!");
        ChEye(8,3);
        ChMouth(8,4);
        ChEyeOpenLevel(8,10);
        VoicePlay("B040822202_08_060");
        MsgDisp("Shirahane","If it doesn't have ta be an object, 
then I would say the time I
spend with you.");
        MsgDisp("主人公","Eh...");
        ChEye(8,4);
        ChMouth(8,2);
        ChMotion(8,3,1);
        ChCheek(8,8);
        VoicePlay("B040822202_08_070");
        MsgDisp("Shirahane","...That's no good.
I just said something cringy.");
        ChEye(8,4);
        ChMouth(8,3);
        ChMotion(8,2,1);
        VoicePlay("B040822202_08_080");
        MsgDisp("Shirahane","But, I'm not lying, ya know?");
        MsgDisp("主人公","(｛大地＊＊｝......)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040822202_08_090");
    MsgDisp("Shirahane","Haha! That's right, I might want
to experience being a lord 
at least once.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
