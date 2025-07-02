BGOpen("ne330",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMotion(5,4);
VoicePlay("B040516002_05_000");
MsgDisp("Hiiragi","I can play the crane game.");
MsgSel("Get lots of sweets!","The skull bear plushie please!","Shall we find a machine where it's easy to win prizes?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("B040516002_05_010");
    MsgDisp("Hiiragi","Yes, certainly.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,4);
    ChMouth(5,2);
    VoicePlay("B040516002_05_020");
    MsgDisp("Hiiragi","The form of the bear will
make it difficult to catch, 
But, I'll try it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMouth(5,2);
        ChMotion(5,4);
        VoicePlay("B040516002_05_030");
        MsgDisp("Hiiragi","That's putting the cart before the horse.
Please find something you would want
first.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040516002_05_040");
        MsgDisp("Hiiragi","That won't do.
What would you like?");
        MsgDisp("主人公","Eh?");
        ChEye(5,4);
        VoicePlay("B040516002_05_050");
        MsgDisp("Hiiragi","Your smile is my reward.
It is absolutely necessary for you 
to be very happy with it.");
        MsgDisp("主人公","Umm...");
        ChEye(5,0);
        ChMotion(5,4);
        VoicePlay("B040516002_05_060");
        MsgDisp("Hiiragi","Ah, 
do you doubt my technique?");
        MsgDisp("主人公","No, If I got to see your happy face when
you were able to win,｛柊＊＊＊｝, anything
would be good with me.");
        ChEye(5,3);
        ChMouth(5,2);
        ChMotion(5,0);
        VoicePlay("B040516002_05_070");
        MsgDisp("Hiiragi","!
You're the same as me...");
        ChEye(5,4);
        ChMouth(5,3);
        VoicePlay("B040516002_05_080");
        MsgDisp("Hiiragi","Yes, I've never been this happy.
I'm already happy even without
having played the crane game.");
        MsgDisp("主人公","Ehh?
We came all this way, 
why not try it?");
        ChEye(5,3);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040516002_05_090");
        MsgDisp("Hiiragi","Hーm...
Let's search for a machine 
I can definitely win.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(5);
        SEWait();
        MsgDisp("主人公","(I'm happy...｛柊＊＊＊｝
is always trying to make me happy)");
        MsgClose();
        ScrFadeOut(0,0);
        ChOpen(5,255,0,0,0,-1,-1,0,0,0,0);
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
